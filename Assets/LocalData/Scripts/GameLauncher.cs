using System;
using System.Collections;
using System.Reflection;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;

public class CheckAssetsUpdate : MonoBehaviour
{
    void Start()
    {
        Debug.Log("ok?");
    }

    // private IEnumerator FechRemoteData()
    // {
    //     // 检测是否更新
    //     AsyncOperationHandle downloadSizeOfHandle = Addressables.DownloadDependenciesAsync("all");

    //     while (!downloadSizeOfHandle.IsDone)
    //     {
    //         long downloadedBytes = downloadSizeOfHandle.GetDownloadStatus().DownloadedBytes;
    //         long totalBytes = downloadSizeOfHandle.GetDownloadStatus().TotalBytes;
    //         // print(downloadedBytes+" / "+totalBytes);
    //         // print($"当前进度 {Mathf.Round(downloadedBytes / 1048579f * 100) / 100}M / {Mathf.Round(totalBytes / 1048579f * 100) / 100}M ");
    //         print(downloadSizeOfHandle.GetDownloadStatus().Percent);
    //         yield return null;
    //     }
    //     if (downloadSizeOfHandle.Status == AsyncOperationStatus.Succeeded)
    //     {
    //         Addressables.Release(downloadSizeOfHandle);
    //         EnterGame();
    //     }
    // }

    // private void EnterGame()
    // {
    //     AsyncOperationHandle<SceneInstance> lastLoadHandle =  Addressables.LoadSceneAsync("HotUpdateScene", LoadSceneMode.Single);

    //     // lastLoadHandle.Completed += (AsyncOperationHandle<SceneInstance> op) =>
    //     // {
    //     // };
    // }

    // private void OnDisable()
    // {
    //     // Addressables.LoadAssetAsync<GameObject>("Azusa_Swimsuit").Completed -= LoadAssets_Completed;
    //     // Addressables.LoadAssetAsync<TextAsset>("HotUpdate.dll").Completed -= LoadAssets_Completed_TextAsset;
    // }

    // // void LoadAssets_Completed(AsyncOperationHandle<GameObject> obj)
    // // { 
    // //     var a = Instantiate(obj.Result);
    // // }
    // // void LoadAssets_Completed_TextAsset(AsyncOperationHandle<TextAsset> obj)
    // // {
    // //     // var a = Instantiate(obj.Result);
    // //     Assembly hotUpdateAss = Assembly.Load(obj.Result.bytes);
    // //     if (obj.Status == AsyncOperationStatus.Succeeded)
    // //     {
    // //         Type type = hotUpdateAss.GetType("Hello");
    // //         type.GetMethod("Run").Invoke(null, null);
    // //     }
    // // }
}
