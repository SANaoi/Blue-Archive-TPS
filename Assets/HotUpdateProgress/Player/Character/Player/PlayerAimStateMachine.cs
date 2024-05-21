using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PlayerAimEnum
{
    Idle,
    Aim,
    Shoot,
}
public class PlayerAimStateMachine : FSM
{
    public PlayerController playerController;
    public PlayerAimStateMachine(PlayerController Controller)
    {
        playerController = Controller;
    }
}
