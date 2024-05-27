using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine.UI;
using Mirror;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;
using UnityEngine.ResourceManagement.ResourceProviders;

public class UINetworkManager : MonoBehaviour
{
    public NetworkManager manager;
    public AssetReference GameSceneRef;

    private Transform StartButton;

    // 端口UI
    private Transform Port;
    private InputField portInputField;
    private Text portText;
    private Transform addressText;


    private Transform StopHostButton;
    private Transform StopClientButton;
    private AsyncOperationHandle<SceneInstance> sceneInstance;

    void Start()
    {
        manager = FindAnyObjectByType<NetworkManager>();
        InitUI();
    }

    void Update()
    {
        Refresh();
    }
    void InitUI()
    {
        InitUIName();
        InitOnClikButton();
    }
    void InitUIName()
    {
        StartButton = transform.Find("StartButton");
        Port = transform.Find("Port");
        StopHostButton = transform.Find("StopHostButton");
        StopClientButton = transform.Find("StopClientButton");


        portInputField = Port.GetComponent<InputField>();
        portText = transform.Find("Port/InputText").GetComponent<Text>();
        addressText = transform.Find("AddressText");
        addressText.GetComponent<Text>().text = "端口号:";

    }
    void InitOnClikButton()
    {
        StartButton.GetComponent<Button>().onClick.AddListener(StartGame);
        StopHostButton.GetComponent<Button>().onClick.AddListener(StopHost);  
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
            StartButton.gameObject.SetActive(true);
            StopHostButton.gameObject.SetActive(false);
            StopClientButton.gameObject.SetActive(false);
            Port.gameObject.SetActive(true);
            addressText.GetComponent<Text>().text = "端口号:";
        }
        else
        {
            StartButton.gameObject.SetActive(false);
            StopHostButton.gameObject.SetActive(true);
            StopClientButton.gameObject.SetActive(true);
            Port.gameObject.SetActive(false);
            addressText.GetComponent<Text>().text = $"{manager.networkAddress}: {portText.text}";
        }
    }

    #region 按键事件函数
    // 房主退出
    public async void StopHost()
    {
        await Addressables.UnloadSceneAsync(sceneInstance);
        manager.StopHost();
    }

    // 房主创建游戏
    public async void StartGame()
    {
        if (GameSceneRef == null)
        {
            Debug.LogError("GameSceneRef is not set.");
            return;
        }
        AsyncOperationHandle<SceneInstance> handle = Addressables.LoadSceneAsync(GameSceneRef, UnityEngine.SceneManagement.LoadSceneMode.Additive);
        sceneInstance = handle;
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
