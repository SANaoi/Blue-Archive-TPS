using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using SocketGameProtocol;
using UnityEngine;

public class ClientManager : BaseManager
{
    private Socket socket;
    private ClientMessage message;

    public ClientManager(GameFace face) : base(face)
    {

    }

    public override void OnInit()
    {
        base.OnInit();
        message = new ClientMessage();
        InitSocket();

    }

    public override void OnDestroy()
    {
        base.OnDestroy();
        message = null;
        CloseSocket();
    }

    private void InitSocket()
    {
        socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
        try
        {
            socket.Connect("127.0.0.1", 6666);

            // 连接成功
            StartReceive();
            Debug.Log("连接成功");
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
        }
    }

    private void CloseSocket()
    {
        if (socket.Connected && socket != null)
        {
            socket.Close();
        }
    }

    private void StartReceive()
    {
        socket.BeginReceive(message.Buffer, message.Startindex, message.RemainSize, SocketFlags.None,ReceiveCallback ,null);
    }

    private void ReceiveCallback(IAsyncResult iar)
    {
        try
        {
            if (socket == null || socket.Connected == false) return; 
            int len = socket.EndReceive(iar);
            if (len == 0)
            {
                CloseSocket(); 
                return;
            }

            message.ReadBuffer(len, HandleResponse);
            StartReceive();
        }   
        catch (System.Exception)
        {
            
        }
    }

    private void HandleResponse(MainPack pack)
    {
        face.HandleRequest(pack);
    }

    public void Send(MainPack pack)
    {
        socket.Send(ClientMessage.packData(pack));
    }
}
