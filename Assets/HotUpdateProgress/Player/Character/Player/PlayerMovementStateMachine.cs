using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public enum PlayerStateEnum
{
    None,
    Idle,
    Move
}

/// <summary>
/// 有限状态机
/// </summary>
public class PlayerMovementStateMachine : FSM
{   
    //玩家信息
    //假如我们没有子类，为了获取这些信息，我们不得不直接在基类声明它
    //玩家控制，同理，子类优势
    public PlayerController playerController;
    public PlayerMovementStateMachine(PlayerController controller)
    {
        playerController = controller;
    }
}
