using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

/// <summary>
/// 玩家瞄准及射击状态机实现基类，实现了 玩家瞄准及射击状态机 的公用功能
/// </summary>
public class PlayerAimState : IState
{
    protected PlayerAimStateMachine playerAimStateMachine;
    public bool isAim;
    public bool isShoot;
    public float lastShoot;
    //TODO config
    public float fireRate = 0.15f;
    public Ray FireRay;

    public PlayerAimState(PlayerAimStateMachine playerAimStateMachine)
    {
        this.playerAimStateMachine = playerAimStateMachine;
    }

    public virtual void OnEnter()
    {
        // Debug.Log("State " + GetType().Name);
        AddInputActionsCallbacks();
    }

    public virtual void OnExit()
    {
        RemoveInputActionsCallbacks();
    }

    public virtual void OnPhysicsUpdate()
    {
    }

    public virtual void OnUpdate()
    {
    }

    # region 输入读取
    protected virtual void AddInputActionsCallbacks()
    {
        playerAimStateMachine.playerController.playerInputAction.Aim.started += OnAim;
        playerAimStateMachine.playerController.playerInputAction.Aim.canceled += OnAim;
        playerAimStateMachine.playerController.playerInputAction.Shoot.started += OnShoot;
        playerAimStateMachine.playerController.playerInputAction.Shoot.canceled += OnShoot;
    }
    
    protected virtual void RemoveInputActionsCallbacks()
    {
        playerAimStateMachine.playerController.playerInputAction.Aim.started -= OnAim;
        playerAimStateMachine.playerController.playerInputAction.Aim.canceled -= OnAim;
        playerAimStateMachine.playerController.playerInputAction.Shoot.started -= OnShoot;
        playerAimStateMachine.playerController.playerInputAction.Shoot.canceled -= OnShoot;
    }

    protected virtual void OnAim(InputAction.CallbackContext context)
    {
        float temp = playerAimStateMachine.playerController.playerInputAction.Aim.ReadValue<float>();
        if (temp > 0f) 
        {
            isAim = true;
            return;
        }
        isAim = false;
    }

    protected virtual void OnShoot(InputAction.CallbackContext context)
    {
        float temp = playerAimStateMachine.playerController.playerInputAction.Shoot.ReadValue<float>();
        if (temp > 0f)
        {
            isShoot = true;
            return;
        }
        isShoot = false;
    }
    #endregion
}
public class PlayerAimState_Idle : PlayerAimState
{
    public PlayerAimState_Idle(PlayerAimStateMachine playerAimStateMachine) : base(playerAimStateMachine)
    {

    }
    public override void OnEnter()
    {
        base.OnEnter();
        isAim = false;
        isShoot = false;
        playerAimStateMachine.playerController.StopAnimation(playerAimStateMachine.playerController.AnimationData.shootParameterHash);
        playerAimStateMachine.playerController.StopAnimation(playerAimStateMachine.playerController.AnimationData.aimParameterHash);
    }
    public override void OnUpdate()
    {
        base.OnUpdate();
        isAim = true?playerAimStateMachine.playerController.playerInputAction.Aim.ReadValue<float>() > 0 : false;
        isShoot = true?playerAimStateMachine.playerController.playerInputAction.Shoot.ReadValue<float>() > 0 : false;
        if (isAim || isShoot) playerAimStateMachine.SwitchState((int)PlayerAimEnum.Aim);
    }
}

public class PlayerAimState_Aim : PlayerAimState
{
    public PlayerAimState_Aim(PlayerAimStateMachine playerAimStateMachine) : base(playerAimStateMachine) { }

    public override void OnEnter()
    {
        base.OnEnter();
        isAim = true;
        isShoot = true?playerAimStateMachine.playerController.playerInputAction.Shoot.ReadValue<float>() > 0 : false;
        playerAimStateMachine.playerController.StartAnimation(playerAimStateMachine.playerController.AnimationData.aimParameterHash);
    }

    public override void OnUpdate()
    {
        base.OnUpdate();
        if (!isAim && !isShoot)
        {
            playerAimStateMachine.SwitchState((int)PlayerAimEnum.Idle);
        }
        if (isShoot){ playerAimStateMachine.SwitchState((int)PlayerAimEnum.Shoot); }

    }

    public override void OnExit()
    {
        base.OnExit();
        if (!isShoot)
        {
            playerAimStateMachine.playerController.StopAnimation(playerAimStateMachine.playerController.AnimationData.aimParameterHash);
        }
    }
}

public class PlayerAimState_Shoot : PlayerAimState
{
    public PlayerAimState_Shoot(PlayerAimStateMachine playerAimStateMachine): base(playerAimStateMachine) { }

    public override void OnEnter()
    {
        base.OnEnter();
        isShoot = true;
        playerAimStateMachine.playerController.StartAnimation(playerAimStateMachine.playerController.AnimationData.shootParameterHash);
    }

    public override void OnUpdate()
    {
        base.OnUpdate();

        if (!isShoot)
        {
            if (isAim)
            {
                playerAimStateMachine.SwitchState((int)PlayerAimEnum.Aim);
            } 
            playerAimStateMachine.SwitchState((int)PlayerAimEnum.Idle);
        }

        shoot();
        
    }

    public override void OnExit()
    {
        base.OnExit();
        isShoot = false;
        playerAimStateMachine.playerController.StopAnimation(playerAimStateMachine.playerController.AnimationData.shootParameterHash);

    }

    private void shoot()
    {
        if (isShoot && Time.time > (fireRate + lastShoot))
        {
            if (playerAimStateMachine.playerController.ammoUI.isReload)
            {
                playerAimStateMachine.playerController.ammoUI.reloadRefreshUI();
                return;
            }
            else
            {
                playerAimStateMachine.playerController.ammoUI.shootRefreshUI();
            }
            
            playerAimStateMachine.playerController.animator.Play(playerAimStateMachine.playerController.AnimationData.shootAnimationName, -1, 0);
            
            playerAimStateMachine.playerController.recoilScript.RecoilFire();
            lastShoot = Time.time;
            Vector3 shootDirection = playerAimStateMachine.playerController.MainCameraTransform.transform.forward;
            shootDirection.Normalize();
            FireRay = new Ray(playerAimStateMachine.playerController.MainCameraTransform.transform.position, shootDirection);
            
            PlayerShootController shootController = playerAimStateMachine.playerController.ShootController;

            
            if (Physics.Raycast(
                FireRay,
                out RaycastHit hit,
                float.MaxValue,
                shootController.shootConfig.HitMask
                
            ))
            {
                shootController.StartPlayTrail(
                    playerAimStateMachine.playerController.muzzlePosition.transform.position,
                    hit.point,
                    hit);
            }

            else
            {
                shootController.StartPlayTrail(
                    playerAimStateMachine.playerController.muzzlePosition.transform.position,
                    playerAimStateMachine.playerController.MainCameraTransform.transform.position + (shootDirection * shootController.trailConfig.MissDistance),
                    new RaycastHit());
            }
        }
    }
    
}