using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Net;
using System.Threading.Tasks;
using System;
using Google.Protobuf;
using SocketGameProtocol;
using System.Linq;


namespace SocketMultiplayerGameServer.Tool
{
    class Message
    {
        private byte[] buffer = new byte[1024];

        private int startindex; // 代表buffer存到第几位

        public byte[] Buffer
        {
            get { return buffer; }
        }

        public int Startindex
        {
            get { return startindex; }
        }

        public int RemainSize
        {
            get 
            {
                return buffer.Length - startindex;
            }
        }

        public void ReadBuffer(int len, Action<MainPack> HandleRequest) // 消息解析
        {
            startindex += len;
            if (startindex <= 4) // 包头属于int类型，占4个字节， <= 4 表示 buffer不完整
            {
                return;
            }
            int count = BitConverter.ToInt32(buffer, 0); // 解析包头
            
            while (true)
            {
                if (startindex >= (count + 4)) // 解析消息内容
                {
                    MainPack pack = (MainPack)MainPack.Descriptor.Parser.ParseFrom(buffer, 4, count);
                    HandleRequest(pack); // 调用client的handleRequest
                    // 处理一段数据后 把后面没处理的数据往前移
                    Array.Copy(buffer, count + 4, buffer, 0, startindex - (count + 4));
                    startindex -= count + 4;
                }
                else
                {
                    break;
                }
            }
        }

        // 静态的有返回值的包装数据的方法
        public static byte[] packData(MainPack pack)
        {
            byte[] data = pack.ToByteArray(); // 包体
            byte[] head = BitConverter.GetBytes(data.Length); // 包头
            return head.Concat(data).ToArray(); // 连接
        }
    }
}