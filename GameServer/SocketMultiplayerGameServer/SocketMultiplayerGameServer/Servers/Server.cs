using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Net;
using System.Threading.Tasks;
using System;
using SocketMultiplayerGameServer.Controller;

using MySql.Data.MySqlClient;
using SocketGameProtocol;

namespace SocketMultiplayerGameServer.servers
{
    public class Server
    {
        private Socket socket;
        private List<Client> clientList = new List<Client>();
        private ControllerManager controllerManager;

        public Server(int port)
        {
            controllerManager = new ControllerManager(this);
            socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp); // 初始化
            socket.Bind(new IPEndPoint(IPAddress.Any, port)); // 绑定
            socket.Listen(0); // 监听 0:操作系统将决定最大的连接数。
            StartAccept();
            Console.WriteLine("TCP服务已启动...");
        }

        void StartAccept() // 开始异步接受连接请求
        {
            socket.BeginAccept(AcceptCallback, null);
        }

        // 一个回调方法，当有连接请求时会被调用。
        void AcceptCallback(IAsyncResult iar)
        {
            Socket client = socket.EndAccept(iar);
            clientList.Add(new Client(client, this));

            StartAccept();
        }

        public void Login()
        {
        
        }

        public void HandleRequest(MainPack pack, Client client)
        {
            controllerManager.HandleRequest(pack, client);
        }
    }
}