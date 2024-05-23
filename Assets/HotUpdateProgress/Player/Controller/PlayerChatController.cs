using UnityEngine.UI;
using UnityEngine;
using Mirror;
using System;
public class PlayerChatController : NetworkBehaviour
{
    [SerializeField] private GameObject ChatUI = null;
    [SerializeField] private Text ChatText = null;
    [SerializeField] private InputField inputField = null;

    private static Action<string> OnMessage;

    public override void OnStartAuthority()
    {
        ChatUI.SetActive(true); 

        OnMessage += HandleNewMessage;
    }

    // 只在客户端调用
    [ClientCallback] 
    private void OnDestroy()
    {
        if (!isOwned) { return;}

        OnMessage -= HandleNewMessage;
    }

    private void HandleNewMessage(string message)
    {
        ChatText.text += message;
    }

    [Client]
    public void Send(string message)
    {
        // 当按下回车以及内容不为空则继续执行
        if (!Input.GetKeyDown(KeyCode.Return)) { return; }

        if (string.IsNullOrEmpty(message)) { return; }

        CmdSendMessage(inputField.text);

        inputField.text = string.Empty;
    }
    [Command]
    private void CmdSendMessage(string message)
    {
        RpcHandleMessage($"[{connectionToClient.connectionId}]: {message}");
    }

    [ClientRpc]
    private void RpcHandleMessage(string message)
    {
        OnMessage?.Invoke($"\n{message}");
    }

    
}
