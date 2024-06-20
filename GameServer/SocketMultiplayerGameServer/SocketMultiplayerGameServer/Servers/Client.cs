using System;
using System.Collections.Generic;
using System.Linq;  
using System.Text;
using System.Threading.Tasks;   
using System.Net.Sockets;
using SocketMultiplayerGameServer.Tool;
using SocketMultiplayerGameServer.DAO;
using SocketGameProtocol;
using MySql.Data.MySqlClient;


namespace SocketMultiplayerGameServer.servers
{
    public class Client
    {
        private const string connstr = "database=ba_tps;data source=localhost;user=root;password=mysql4959;pooling=false;charset=utf8;port=3306";
        private Socket socket;
        private Message message;
        private UserData userData;
        private Server server;
        private MySqlConnection sqlConnection;

        public UserData GetUserData
        {
            get{ return userData; }
        }

        public Client(Socket socket, Server server)
        {
            userData = new UserData();
            message = new Message();
            sqlConnection = new MySqlConnection(connstr);
            Console.WriteLine("准备连接");
            sqlConnection.Open();

            this.socket = socket;   
            this.server = server;

            StartReceive();
        }

        // 接受数据
        void StartReceive()
        {
            socket.BeginReceive(message.Buffer, message.Startindex, message.RemainSize, SocketFlags.None, ReceiveCallback, null);
        }

        void ReceiveCallback(IAsyncResult iar)
        {
            try
            {
                if (socket == null || socket.Connected == false) return;
                
                int len = socket.EndReceive(iar);
                Console.WriteLine("接收");

                if (len == 0)
                {
                    Console.WriteLine("接收数据为0");

                    return;
                }

                message.ReadBuffer(len, HandleRequest);

                StartReceive();
            }
            catch (Exception ex) // 捕获异常
            {
                Console.WriteLine(ex);

            }
            
        }

        public void Send(MainPack pack)
        {
            if (socket == null || socket.Connected == false) return;
            try
            {
                socket.Send(Message.packData(pack));
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex);
            }
        }

        void HandleRequest(MainPack pack)
        {
            server.HandleRequest(pack, this);
        }
        public bool Logon(MainPack pack)
        {
            return GetUserData.Logon(pack, sqlConnection);
        }

    }
}