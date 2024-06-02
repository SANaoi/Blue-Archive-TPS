using System.Collections;
using System.Net;
using System.Net.Sockets;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine.UI;
using Mirror;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using System;
using System.Linq;

public class UINetworkManager : MonoBehaviour
{
    public NetworkManager manager;
    public AssetReference GameSceneRef;

    private Transform StartHost;
    private Transform StartClient;

    // 端口UI
    private Transform Port;
    private InputField portInputField;
    private InputField usernameInputField;
    private Text portText;
    private Transform addressText;


    private Transform StopHostButton;
    private Transform StopClientButton;
    private AsyncOperationHandle<SceneInstance> sceneInstance;


    void Start()
    {
        manager = FindAnyObjectByType<NetworkManager>();
        InitUI();
        Refresh();
    }

    void InitUI()
    {
        InitUIName();
        InitOnClikButton();
    }
    void InitUIName()
    {
        StartHost = transform.Find("StartHost");
        StartClient = transform.Find("StartClient");
        Port = transform.Find("Port");
        StopHostButton = transform.Find("StopHostButton");
        StopClientButton = transform.Find("StopClientButton");


        portInputField = Port.GetComponent<InputField>();
        usernameInputField = transform.Find("playerName").transform.GetComponent<InputField>();
        portText = transform.Find("Port/InputText").GetComponent<Text>();
        addressText = transform.Find("AddressText");
        addressText.GetComponent<Text>().text = "端口号:";

    }
    void InitOnClikButton()
    {
        StartHost.GetComponent<Button>().onClick.AddListener(StartHostButton);
        StartClient.GetComponent<Button>().onClick.AddListener(StartClientButton);

        StopHostButton.GetComponent<Button>().onClick.AddListener(StopHost); 
        StopClientButton.GetComponent<Button>().onClick.AddListener(StopClient);
        portInputField.onEndEdit.AddListener(OnPortInputEndEdit);

        // 等同于 PortTransport portTransport = Transport.active as PortTransport;
        if (Transport.active is PortTransport portTransport)
        {
            print(portTransport.Port.ToString());
            portInputField.text = portTransport.Port.ToString();
        }
    }

    void Refresh()
    {
        if (!NetworkClient.isConnected && !NetworkClient.active)
        {
            StartHost.gameObject.SetActive(true);
            StartClient.gameObject.SetActive(true);
            StopHostButton.gameObject.SetActive(false);
            StopClientButton.gameObject.SetActive(false);
            Port.gameObject.SetActive(true);
            addressText.GetComponent<Text>().text = "端口号:";
        }
        else
        {
            StartHost.gameObject.SetActive(false);
            StartClient.gameObject.SetActive(false);
            StopHostButton.gameObject.SetActive(true);
            StopClientButton.gameObject.SetActive(true);
            Port.gameObject.SetActive(false);
            addressText.GetComponent<Text>().text = $"{manager.networkAddress}: {portText.text}";
        }
    }

    #region 按键事件函数
    // 房主退出
    public void StopHost()
    {
        Addressables.UnloadSceneAsync(sceneInstance);
        manager.StopHost();

        Refresh();
    }
    
    // 其他玩家退出游戏
    public void StopClient()
    {
        Addressables.UnloadSceneAsync(sceneInstance);
        manager.StopClient();

        Refresh(); 

    }
    // 房主创建游戏
    public async void StartHostButton()
    {
        if (GameSceneRef == null)
        {
            Debug.LogError("GameSceneRef is not set.");
            return;
        }
        
        if (!NetworkClient.isConnected && !NetworkClient.active)
        {

            AsyncOperationHandle<SceneInstance> handle = Addressables.LoadSceneAsync(GameSceneRef, UnityEngine.SceneManagement.LoadSceneMode.Additive);
            sceneInstance = handle;
            await handle.Task;

            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                try
                {
                    NetworkManager.singleton.StartHost();
                }
                catch
                {
                    await Addressables.UnloadSceneAsync(sceneInstance);
    
                    Refresh(); 
                }
            }
            else
            {
                 Debug.LogError("Failed to load scene.");
            }

            Refresh();
        }
        else
        {
            print("无法创建房间");
        }

        
    }

    public async void StartClientButton()
    {
        if (GameSceneRef == null)
        {
            Debug.LogError("GameSceneRef is not set.");
            return;
        }
        if (!NetworkClient.isConnected && NetworkClient.active)
        {
            print("NetworkClient已处于活动状态");
            return;
        }
        else
        {

            AsyncOperationHandle<SceneInstance> handle = Addressables.LoadSceneAsync(GameSceneRef, UnityEngine.SceneManagement.LoadSceneMode.Additive);
            sceneInstance = handle;
            await handle.Task;

            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                manager.StartClient();

            }
            else
            {
                 Debug.LogError("Failed to load scene.");
            }
            Refresh();
        }

    }

    // 输入房间端口
    private void OnPortInputEndEdit(string input)
    {
        if (ushort.TryParse(input, out ushort port))
        {
            if (Transport.active is PortTransport portTransport)
            {
                portTransport.Port = port;
                portInputField.text = portTransport.Port.ToString();
                portText.text = portInputField.text;
            }
        }
        else
        {
            if (Transport.active is PortTransport portTransport)
            {
                portInputField.text = portTransport.Port.ToString();
                portText.text = portInputField.text;
            }
        }
    }
    #endregion
}
