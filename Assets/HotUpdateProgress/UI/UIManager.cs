using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class UIManager : MonoBehaviour
{
    private static UIManager _instance;
    private GameObject panelPrefab;
    private Transform _uiRoot;
    private Dictionary<string, string> pathDict;
    private Dictionary<string, GameObject> prefabDict;
    public Dictionary<string, BasePanel> panelDict;

    public static UIManager Instance
    {
        get 
        {
            if (_instance == null)
            {
                _instance = new GameObject("UIManager").AddComponent<UIManager>();
            }
            return _instance;
        }
    }
    public Transform UIRoot
    {
        get
        {
            if(_uiRoot == null)
            {
                _uiRoot = GameObject.Find("Canvas").transform;
            }
            return _uiRoot;
        }
    }

    private void Awake()
    {
        print(this.name + " Awake——------------");
        DontDestroyOnLoad(this);
        if (_instance != null && _instance != this)
        {
            Destroy(this.gameObject);
            return;
        }
        // 否则，设置这个实例为单例
        _instance = this;
    }
    private void OnEnable()
    {
        print(this.name + " OnEnable------------");
        InitDicts();

    }
    private void OnDisable()
    {
        print(this.name + " OnDisable------------");
    }

    private void InitDicts()
    {
        prefabDict = new Dictionary<string, GameObject>();
        panelDict = new Dictionary<string, BasePanel>();
        pathDict = new Dictionary<string, string>()
        {
            {UIConst.AmmoCanvas, "AmmoCanvas"}
        };
    }

    // public BasePanel OpenPanel(string UIname)
    // {
    //     BasePanel panel = null;
    //     if(panelDict.TryGetValue(UIname, out panel))
    //     {
    //         return panel;
    //     }

    //     string path = "";
    //     if(!pathDict.TryGetValue(UIname, out path))
    //     {
    //         Debug.LogError("界面显示错误或未配置路径：" + UIname);
    //         return null;
    //     }
    //     GameObject panelPrefab = null;
    //     if(!prefabDict.TryGetValue(UIname, out panelPrefab))
    //     {
    //         // string realPath = "Prefab/Panel/" + path;
    //         // panelPrefab = Resources.Load<GameObject>(realPath);
    //         // prefabDict.Add(name, panelPrefab);
    //         var localPrefab = Addressables.LoadAssetAsync<GameObject>(path);

    //         if (localPrefab.Status == AsyncOperationStatus.Succeeded)
    //         {
    //             panelPrefab = localPrefab.Result;
    //             print(panelPrefab.name);
    //             prefabDict.Add(name, panelPrefab); 
    //         }
    //     }
    //     GameObject panelObject = Instantiate(panelPrefab, UIRoot, false);
    //     panel = panelObject.GetComponent<BasePanel>();
    //     panelDict.Add(UIname, panel);
    //     return panel;
    // }

    // public BasePanel OpenPanel(string name, Transform UIRoot)
    // {   
    //     BasePanel panel = null;
    //     if(panelDict.TryGetValue(name, out panel))
    //     {
            
    //         return panel;
    //     }
    //     string path = "";
    //     if (!pathDict.TryGetValue(name, out path))
    //     {
    //         Debug.LogError("未配置路径：" + name);
    //         return null;
    //     }
    //     panelPrefab = null;
    //     if (!prefabDict.TryGetValue(name, out panelPrefab))
    //     {
    //         // string realPath = "Prefab/Panel/" + path;
    //         // panelPrefab = Resources.Load<GameObject>(realPath);
    //         // prefabDict.Add(name, panelPrefab);
    //         StartCoroutine(LoadPrefabCoroutine(name, path));
    //     }
    //     prefabDict.TryGetValue(name, out panelPrefab);
    //     print(panelPrefab);
    //     GameObject panelObject = Instantiate(panelPrefab, UIRoot, false);
    //     panel = panelObject.GetComponent<BasePanel>();
    //     panelDict.Add(name, panel);
    //     if (panel == null)
    //     {
    //         Debug.Log("null");
    //         Debug.Log(panelDict.Keys);
    //     }
    //     Debug.Log(name+"  将被生成" );
    //     return panel;
    // }

    // IEnumerator LoadPrefabCoroutine(string name, string path)
    // {
    //     var localPrefab = Addressables.LoadAssetAsync<GameObject>(path);
    //     yield return localPrefab;

    //     if (localPrefab.Status == AsyncOperationStatus.Succeeded)
    //     {
    //         panelPrefab = localPrefab.Result;
    //         print(panelPrefab.name);
    //         prefabDict.Add(name, panelPrefab); 
    //     }
    //     else
    //     {
    //         Debug.LogError("获取UI预制体失败");
    //     }
    // }

    public async Task<BasePanel> OpenPanelAsync(string UIname, Transform UIRoot)
    {
        BasePanel panel = null;
        if (panelDict.TryGetValue(UIname, out panel))
        {
            return panel;
        }

        string path = "";
        if (!pathDict.TryGetValue(UIname, out path))
        {
            Debug.LogError("界面显示错误或未配置路径：" + UIname);
            return null;
        }

        GameObject panelPrefab = null;
        if (!prefabDict.TryGetValue(UIname, out panelPrefab))
        {
            var handle = Addressables.LoadAssetAsync<GameObject>(path);

            // 等待加载完成
            await handle.Task;

            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                panelPrefab = handle.Result;
                print(panelPrefab.name);
                prefabDict.Add(UIname, panelPrefab); 
            }
            else
            {
                Debug.LogError("预制件加载失败：" + UIname);
                return null;
            }
        }

        GameObject panelObject = Instantiate(panelPrefab, UIRoot, false);
        panel = panelObject.GetComponent<BasePanel>();
        panelDict.Add(UIname, panel);
        return panel;
    }

    public BasePanel OpenPanel(string UIname, Transform UIRoot)
    {
        OpenPanelAsync(UIname, UIRoot).ContinueWith(task =>
        {
            if (task.Result != null)
            {
                Debug.Log($"{UIname} 面板已成功生成");
                return task.Result;
            }
            else
            {
                Debug.LogError($"{UIname} 面板生成失败");
                return null;
            }
        }, TaskScheduler.FromCurrentSynchronizationContext());
        return null;
    }
    public bool ClosePanel(string name)
    {   

        BasePanel panel = null;
        if(!panelDict.TryGetValue(name, out panel))
        {
            Debug.LogError("界面未打开" + name);
            return false;
        }
        if(panelDict.ContainsKey(name))
        {
            panelDict.Remove(name);
        }
        return true;
    }

    private void OnDestroy()
    {
        // 当 GameManager 实例被销毁时，清理静态实例引用
        if (_instance == this)
        {
            _instance = null;
        }
    }


    public class UIConst
    {
        public const string AmmoCanvas = "AmmoCanvas"; 
    }

}
