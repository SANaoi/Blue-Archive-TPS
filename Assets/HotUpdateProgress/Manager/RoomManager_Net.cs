
using UnityEngine;
using Mirror;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;


public class RoomManager_Net : NetworkRoomManager
{

    bool IsShowStartButton;
    public GameObject m_gamePlayerPrefab;
    public NetworkRoomPlayer m_roomPlayerPrefab;
    public override void Start()
    {
        base.Start();

        m_gamePlayerPrefab = playerPrefab;
        m_roomPlayerPrefab = roomPlayerPrefab.GetComponent<NetworkRoomPlayer>();
    }

    public override void OnRoomClientSceneChanged() 
    {
        Debug.Log($"OnRoomClientSceneChanged");
    }
    public override void OnRoomServerPlayersReady()
    {
        if (Utils.IsHeadless())
        {
            base.OnRoomServerPlayersReady();
        }
        else
        {
            IsShowStartButton = true;
            // if (roomPlayerPrefab == null || playerPrefab == null)
            // {
            //     playerPrefab = m_gamePlayerPrefab;
            //     roomPlayerPrefab = m_roomPlayerPrefab;
            //     // Addressables.LoadAssetAsync<GameObject>("Network GamePlayer").Completed += GamePlayerLoaded;
            //     // Addressables.LoadAssetAsync<GameObject>("Network RoomPlayer").Completed += RoomPlayerLoaded;
            // }
        }
    }

    public override void OnGUI()
    {
        base.OnGUI();

        if (allPlayersReady && IsShowStartButton  && GUI.Button(new Rect(150, 300, 120, 20), "START GAME"))
        {
            // set to false to hide it in the game scene
            IsShowStartButton = false;
            ServerChangeScene(GameplayScene);
        }
    }

    // private void GamePlayerLoaded(AsyncOperationHandle<GameObject> obj)
    // {
    //     if (obj.Status == AsyncOperationStatus.Succeeded)
    //     {
    //         GameObject gamePlayerPrefab = obj.Result;

    //         playerPrefab = gamePlayerPrefab;
    //         Debug.Log(playerPrefab.name);
    //     }
    //     else
    //     {
    //         Debug.LogError("加载GamePlayer失败: " + obj.OperationException.Message);
    //     }
    // }
    // private void RoomPlayerLoaded(AsyncOperationHandle<GameObject> obj)
    // {
    //     if (obj.Status == AsyncOperationStatus.Succeeded)
    //     {
    //         GameObject roomPlayer = obj.Result;
    
    //         roomPlayerPrefab = roomPlayer.GetComponent<NetworkRoomPlayer>();
    //         Debug.Log(roomPlayerPrefab.name);
    //     }
    //     else
    //     {
    //         Debug.LogError("加载GamePlayer失败: " + obj.OperationException.Message);
    //     }
    // }

}
