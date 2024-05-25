using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        DontDestroyOnLoad(this);
    }
    void Start()
    {
        GameObject UIManager = new GameObject("UIManager");
        UIManager.AddComponent<UIManager>();
    }

    
    
}
