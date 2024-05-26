using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine.UI;
using Mirror;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class UINetworkManager : MonoBehaviour
{
    public NetworkManager manager;
    public AssetReference GameSceneRef;

    private Transform StartButton;

    void Start()
    {
        manager = FindAnyObjectByType<NetworkManager>();
        InitUI();
    }
    void InitUI()
    {
        InitUIName();
        InitOnClikButton();
    }
    void InitUIName()
    {
        StartButton = transform.Find("StartButton");
    }
    void InitOnClikButton()
    {
        StartButton.GetComponent<Button>().onClick.AddListener(StartGame);
    }

    public async void StartGame()
    {
        if (GameSceneRef == null)
        {
            Debug.LogError("GameSceneRef is not set.");
            return;
        }
        var handle = Addressables.LoadSceneAsync(GameSceneRef, UnityEngine.SceneManagement.LoadSceneMode.Additive);
        await handle.Task;

        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
            Debug.Log("Scene loaded successfully.");
            manager.StartHost();
        }
        else
        {
             Debug.LogError("Failed to load scene.");
        }
    }
}
