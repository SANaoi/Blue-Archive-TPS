using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using Mirror;

public class GMCmd
{
    [MenuItem("GMCmd/网络状态")]
    public static void GetNetworkStatus()
    {
        // 检查NetworkManager是否已实例化
        if (NetworkManager.singleton == null)
        {
            EditorUtility.DisplayDialog("网络状态", "NetworkManager未实例化", "确定");
            return;
        }

        // 检查服务器是否正在运行
        bool isServerActive = NetworkServer.active;
        // 检查客户端是否正在运行
        bool isClientActive = NetworkClient.active;

        string statusMessage = $"服务器状态: {isServerActive}\n客户端状态: {isClientActive}";

        // 如果服务器正在运行，显示房间信息
        if (isServerActive)
        {
            statusMessage += "\n已启动的房间: ";
            // 这里你可以添加代码来获取和显示房间信息
            // 例如，你可以遍历NetworkServer.connections来获取连接的客户端列表
            foreach (NetworkConnectionToClient conn in NetworkServer.connections.Values)
            {
                // 获取玩家对象
                GameObject playerObj = conn.identity.gameObject;

                // 显示玩家名称
                statusMessage += $"\n - 客户端ID: {conn.connectionId}, 玩家名称: {playerObj.name}";
            }
        }

        // 显示网络状态
        EditorUtility.DisplayDialog("网络状态", statusMessage, "确定");
    }

    [MenuItem("GMCmd/网络状态1")]
    public static void NetworkStatusChecker()
    {
        // 检查网络是否可用
        bool networkAvailable = Application.internetReachability != NetworkReachability.NotReachable;

        // 显示网络状态
        EditorUtility.DisplayDialog("网络状态", networkAvailable ? "网络可用" : "网络不可用", "确定");
    }
    [MenuItem("GMCmd/端口是否可用")]
    public static void ChecktestPort()
    {
        {
            System.Net.NetworkInformation.IPGlobalProperties iproperties = System.Net.NetworkInformation.IPGlobalProperties.GetIPGlobalProperties();
            System.Net.IPEndPoint[] ipEndPoints = iproperties.GetActiveTcpListeners();
            foreach (var item in ipEndPoints)
            {
                if (item.Port == 7777)
                {
                    Debug.Log(true);
                }
            }
            Debug.Log(false);
        }
    }
}
