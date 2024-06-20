using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogonPanel : MonoBehaviour
{

    public LogonRequest logonRequest;
    public InputField user, password;
    public Button logonBtn;

    private void Start()
    {
        logonBtn.onClick.AddListener(OnLogonClick);
    }

    private void OnLogonClick()
    {
        if (user.text == "" || password.text == "")
        {
            Debug.LogWarning("用户名或密码不能为空");
            return;
        }
        logonRequest.SendRequest(user.text, password.text);
    }   
}
