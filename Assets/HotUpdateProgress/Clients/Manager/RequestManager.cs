using System.Collections;
using System.Collections.Generic;
using SocketGameProtocol;
using UnityEngine;

public class RequestManager : BaseManager
{
    // 通过requestcode找到对应controller -> actionCode找到对用处理方法
    public RequestManager(GameFace face) : base(face)
    {
    
    }
    
    private Dictionary<ActionCode, BaseRequest> requestDict = new Dictionary<ActionCode,BaseRequest>();

    public void AddRequest(BaseRequest request)
    {
        requestDict.Add(request.GetActionCode, request);
    }

    public void RemoveRequest(ActionCode action)
    {
        requestDict.Remove(action);
    }
}   
