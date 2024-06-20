using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SocketMultiplayerGameServer.servers;

namespace SocketMultiplayerGameServer
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Server server = new Server(6666);

            Console.Read();
        }
    }
}
