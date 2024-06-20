using System;
using System.Collections.Generic;
using SocketGameProtocol;
using SocketMultiplayerGameServer.servers;

namespace SocketMultiplayerGameServer.Controller
{
    class UserController : BaseController
    {
        public UserController()
        {
            // 每个controller都要添加
            requestCode = RequestCode.User;
        }

        // 注册
        public MainPack Logon(Server server, Client client, MainPack pack)
        {
            if(client.Logon(pack))
            {
                pack.ReturnCode = ReturnCode.Succeed;
            }
            else
            {
                pack.ReturnCode = ReturnCode.Fail;
            }
            return pack;
        }

        // 登录
        public MainPack Login(Server server, Client client, MainPack pack)
        {
            return null;
        }
    }
}