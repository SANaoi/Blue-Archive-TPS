using System.Collections;
using UnityEngine;


public class HotUpdateTest
{
    public static void Run()
    {
        Debug.Log("Hello, HybridCLR");

        GameObject go = new GameObject("Test1");
        go.AddComponent<PrintTest>();
    }
}