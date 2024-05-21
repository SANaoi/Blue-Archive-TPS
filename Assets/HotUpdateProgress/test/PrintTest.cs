using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class PrintTest : MonoBehaviour
{
    void Start()
    {
        Debug.Log($"[Print] GameObject:{name}");  
        Addressables.LoadAssetAsync<GameObject>("Cube").Completed += LoadAssets_Completed;
    }

    void LoadAssets_Completed(AsyncOperationHandle<GameObject> obj)
    { 
        var a = Instantiate(obj.Result);
    }

}
