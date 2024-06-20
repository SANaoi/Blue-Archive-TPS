using System.Collections;
using System.Collections.Generic;
using SocketGameProtocol;

namespace SocketMultiplayerGameServer.Controller
{
    abstract class BaseController
    {
        // 所有controller处理方法都在server端处理
        protected RequestCode requestCode = RequestCode.None;

        public RequestCode GetRequestCode
        {
            get { return requestCode; }
        }
    }


}
