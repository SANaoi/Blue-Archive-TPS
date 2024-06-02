using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using kcp2k;
using Cysharp.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using System.Runtime.InteropServices;
using System.Threading.Tasks;


public class GameManager : MonoBehaviour
{
    public GameObject playerPrefab;
    // Start is called before the first frame update
    async void Awake()
    {
        DontDestroyOnLoad(this);

        // UIManager初始化
        GameObject UIManager = new GameObject("UIManager");
        UIManager.AddComponent<UIManager>();
        
        // NetworkManager初始化
        GameObject NetworkManager = await LoadNetworkManager();
        NetworkManager networkManager = NetworkManager.GetComponent<NetworkManager>();
        await LoadGamePlayer(networkManager);

        await LoadRoomManagerUI();

    }

    async UniTask LoadGamePlayer(NetworkManager networkManager)
    {
        var handle = Addressables.LoadAssetAsync<GameObject>("Network GamePlayer");
        await handle.Task;

        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            networkManager.playerPrefab = handle.Result;
        }
        else
        {
            Debug.LogError("GamePlayer加载失败");
        }
    }

    async UniTask LoadRoomManagerUI()
    {
        var handle = Addressables.LoadAssetAsync<GameObject>("RoomManagerCanvas");
        await handle.Task;

        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            Instantiate(handle.Result);
        }
    }
    async Task<GameObject> LoadNetworkManager()
    {
        var handle = Addressables.LoadAssetAsync<GameObject>("Network Manager");
        await handle.Task;

        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            Instantiate(handle.Result);
            return handle.Result;
        }
        return null;
    }
}
