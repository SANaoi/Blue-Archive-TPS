using System.Collections;
using System.Collections.Generic;
using SocketGameProtocol;
using UnityEngine;

public class GameFace : MonoBehaviour
{
    
    private ClientManager clientManager;
    private RequestManager requestManager;
    private static GameFace face;

    public static GameFace Face
    {
        get
        {
            if (face == null)
            {
                face = GameObject.Find("GameFace").GetComponent<GameFace>();
            }
            return face;
        }
    }
    
    void Awake()
    {
        clientManager = new ClientManager(this);
        requestManager = new RequestManager(this);


        clientManager.OnInit();
        requestManager.OnInit();
    }

    private void OnDestroy()
    {
        clientManager.OnDestroy();
        requestManager.OnDestroy();
    }

    public void Send(MainPack pack)
    {
        clientManager.Send(pack);
    }

    public void HandleRequest(MainPack pack)
    {
        // 处理
    }

    public void AddRequest(BaseRequest request)
    {
        requestManager.AddRequest(request);
    }

    
    public void RemoveRequest(ActionCode action)
    {
        requestManager.RemoveRequest(action);
    }
}
