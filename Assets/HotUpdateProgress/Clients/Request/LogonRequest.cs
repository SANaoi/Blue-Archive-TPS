using System.Collections;
using System.Collections.Generic;
using SocketGameProtocol;
using UnityEngine;

public class LogonRequest : BaseRequest
{
    public override void Awake()
    {
        requestCode =  RequestCode.User;
        actionCode = ActionCode.Logon;
        base.Awake();

    }

    public override void OnResponse(MainPack pack)
    {
        switch (pack.ReturnCode)
        {
            case ReturnCode.Succeed:
            Debug.Log("注册成功");
            break;
            case ReturnCode.Fail:
            Debug.Log("注册失败");
            break;
        }
    }

    public void SendRequest(string user, string password)
    {
        MainPack pack = new MainPack();
        pack.RequestCode = requestCode;
        pack.ActionCode = actionCode;

        LoginPack loginPack = new LoginPack();
        loginPack.Username = user;
        loginPack.Password = password;  
        pack.LoginPack = loginPack;
        base.SendRequest(pack); 
    }
}
