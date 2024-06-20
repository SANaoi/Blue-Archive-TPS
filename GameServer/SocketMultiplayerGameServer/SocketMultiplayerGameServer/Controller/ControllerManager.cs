using System;
using System.Collections;
using System.Collections.Generic;
using SocketGameProtocol;
using System.Reflection; // 反射
using SocketMultiplayerGameServer.servers;


namespace SocketMultiplayerGameServer.Controller
{
    class ControllerManager
    {
        // 用于管理所有controller
        private Dictionary<RequestCode, BaseController> controlDict = new Dictionary<RequestCode, BaseController>();
        private Server server;

        public ControllerManager(Server server)
        {
            //TODO 初始化所以controller
            UserController userController = new UserController();   
            controlDict.Add(userController.GetRequestCode, userController);
        }

        public void HandleRequest(MainPack pack, Client client)
        {
            if(controlDict.TryGetValue(pack.RequestCode, out BaseController controller))
            {
                string methodname = pack.ActionCode.ToString(); // 得到名字 
                MethodInfo method = controller.GetType().GetMethod(methodname); // 得到方法
                if (method == null)
                {
                    Console.WriteLine($"没有对应的事件处理: {pack.ActionCode.ToString()}");
                    return;
                }

                object[] obj = new object[] {server, client, pack};
                object ret = method.Invoke(controller, obj); // 在controller调用method,返回obj

                // ret是usercontroller里的mainpack
                if (ret != null)
                {   
                    /// 客户端发出登录请求，服务器端通过ActionCode和RequestCode找到对应的方法
                    /// 然会返回参数给客户端，比如是否登录成功
                    client.Send(ret as MainPack);
                }
            }
            else
            {
                Console.WriteLine("没有对应的controller处理");
            }
        }
    }

}