using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Settings;

public class UpdateDllsToAddressables
{
    static string HotUpdateDllPath => $"{Application.dataPath}/../HybridCLRData/HotUpdateDlls/{EditorUserBuildSettings.activeBuildTarget}/";

    //static string HotUpdateDestinationPath => $"{Application.dataPath}/HotUpdateDlls/HotUpdateDll/";

    [MenuItem("My Tools/Update Dlls to Addressables")]
    public static void UpdateDlls()
    {
        // 获取Addressable设置
        AddressableAssetSettings settings = AddressableAssetSettingsDefaultObject.Settings;

        // 获取所有组
        var groups = settings.groups;

        // 遍历所有组
        foreach (var group in groups)
        {
            // 检查组是否包含DLL文件
            foreach (var entry in group.entries)
            {
                if (entry.labels.Contains("hotUpdate"))
                {
                    // 获取DLL文件的路径
                    string assetPath = AssetDatabase.GUIDToAssetPath(entry.guid);
                    string dllName = Path.GetFileNameWithoutExtension(assetPath);
                    // string destDir = Path.Combine(HotUpdateDllPath, dllName + ".bytes");
                    string destDir = Path.Combine(HotUpdateDllPath, dllName);
                    // 检查文件是否存在
                    // if (File.Exists(destDir))
                    // {
                    //     Debug.LogError($"File already exists: {destDir}");
                    //     continue;
                    // }
                    CopyHotUpdateDll(entry, assetPath);
                    // 复制文件
                    
                    // AssetDatabase.CopyAsset(destDir, assetPath);
                    // AssetDatabase.Refresh();
                    // Debug.Log($"Copied {destDir} to {assetPath}");
                }
            }
        }
        Debug.Log("copy hot update dlls success!");

        // 应用更改
        // settings.SetDirty(AddressableAssetSettings.ModificationEvent.ProjectSettingsChanged, true, true);
        // AddressableAssetSettings.SaveAssetSettings(settings);

        // 构建Addressable组
        // AddressableAssetSettings.BuildPlayerContent();
    }

    private static void CopyHotUpdateDll(AddressableAssetEntry entry, string destDir)
    {
        var dir = new DirectoryInfo(HotUpdateDllPath);
        var files = dir.GetFiles();
        foreach (var file in files)
        {
            if (file.Extension == ".dll" && entry.ToString().Contains(file.Name.Substring(0, file.Name.Length)))
            {
                Debug.Log(destDir);
                file.CopyTo(destDir, true);
            }
        }

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }
}
