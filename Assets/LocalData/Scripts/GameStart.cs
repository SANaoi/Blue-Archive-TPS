using System.Collections.Generic;
using System.Reflection;
using Cysharp.Threading.Tasks;
using HybridCLR;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using Mirror;

namespace Main
{
    public class EntryManager : MonoBehaviour
    {
        // Addressables中资源的标签和引用
        // 这里使用标签和引用来加载资源 是为了简单
        public AssetLabelReference hotUpdateDllLabelRef; // 热更DLL标签
        public AssetLabelReference aotMetadataDllLabelRef; // AOT元数据DLL标签
        public AssetReference hotUpdateMainSceneRef;
        public string sceneName;
        

        // 热更入口 从这里开始
        private void Start()
        {
            //在Start中调用执行更新检查的任务
            _check_update().Forget();
            gameObject.SetActive(true); 
        }

        private async UniTask _check_update()
        {
            //加载热更DLL任务
            await _load_hotfix_dlls();
            //加载AOT元数据DLL任务
            await _load_meta_data_for_aot_dlls();
            //检查资源更新任务
            await _update_address_ables();
            //进入热更主场景任务
            await _enter_hotfix_main_scene();
        }
        private async UniTask _update_address_ables()
        {
            await Addressables.InitializeAsync();

            var downloadHandle = Addressables.DownloadDependenciesAsync("default");
            float progress = 0;
            while (downloadHandle.Status == AsyncOperationStatus.None)
            {
                float percentageComplete = downloadHandle.GetDownloadStatus().Percent;
                if (percentageComplete > progress * 1.01) // Report at most every 10% or so
                {
                    progress = percentageComplete; // More accurate %
                    print($"下载百分比：{progress * 100}%");
                }

                await UniTask.WaitForFixedUpdate();
            }

            // Debug.Log("更新完毕!");
            Addressables.Release(downloadHandle);
        }


        private async UniTask _download(IResourceLocator resourceLocator)
        {
            var size = await Addressables.GetDownloadSizeAsync(resourceLocator.Keys);
            // Debug.Log($"更新:{resourceLocator}资源,总大小:{size}");
            if (size <= 0) return;
            var downloadHandle = Addressables.DownloadDependenciesAsync(resourceLocator.Keys, Addressables.MergeMode.Union);
            float progress = 0;
            while (downloadHandle.Status == AsyncOperationStatus.None)
            {
                float percentageComplete = downloadHandle.GetDownloadStatus().Percent;
                if (percentageComplete > progress * 1.01) // Report at most every 10% or so
                {
                    progress = percentageComplete; // More accurate %
                    print($"下载百分比：{progress * 100}%");
                }

                await UniTask.WaitForFixedUpdate();
            }

            await downloadHandle;

            // Debug.Log("更新完毕!");
            Addressables.Release(downloadHandle);
        }

        private async UniTask _load_hotfix_dlls()
        {
            // 加载热更DLL
            // 这里使用标签来加载资源 Addressables会自动根据标签来加载所有资源
            var dlls = await Addressables.LoadAssetsAsync<TextAsset>(hotUpdateDllLabelRef, null);
            foreach (var asset in dlls)
            {
                Debug.Log("加载热更DLL:" + asset.name);
                Assembly.Load(asset.bytes);
                Debug.Log("加载热更DLL:" + asset.name + "完成");
            }
        }

        private async UniTask _load_meta_data_for_aot_dlls()
        {
            //这一步实际上是为了解决AOT 泛型类的问题 
            HomologousImageMode mode = HomologousImageMode.SuperSet;
            var aots = await Addressables.LoadAssetsAsync<TextAsset>(aotMetadataDllLabelRef, null);
            foreach (var asset in aots)
            {
                LoadImageErrorCode errorCode = RuntimeApi.LoadMetadataForAOTAssembly(asset.bytes, mode);
                if (errorCode == LoadImageErrorCode.OK)
                {
                    continue;
                }

                Debug.LogError($"加载AOT元数据DLL:{asset.name}失败,错误码:{errorCode}");
            }
        }

        private async UniTask _enter_hotfix_main_scene()
        {
            // 等待用户输入
            await _wait_for_enter_input();
            // SceneManager.SetActive(true);
            // RequestSceneChange(SceneName);
            // 加载热更主场景
            // var scene = await Addressables.LoadSceneAsync(hotUpdateMainSceneRef);
            // // // 激活场景
            // await scene.ActivateAsync();
           await SceneManager.LoadSceneAsync(sceneName);
        }

        private async UniTask _wait_for_enter_input()
        {
            print("按 空格键 进入主场景");
            switch (Application.platform)
            {
                case RuntimePlatform.WindowsPlayer:
                    while (!Input.GetKey(KeyCode.Space))
                    {
                        await UniTask.WaitForFixedUpdate();
                    }
                    break;
                case RuntimePlatform.Android:
                    while (Input.touchCount == 0)
                    {
                        await UniTask.WaitForFixedUpdate();
                    }
                    break;
            }
        }
        public void RequestSceneChange(string newSceneName)
        {
            ServerChangeScene(newSceneName);
        }

        private void ServerChangeScene(string newSceneName)
        {
            NetworkManager.singleton.ServerChangeScene(newSceneName);
        }
    }
    
}


//        public AssetReference hotUpdateMainSceneRef;