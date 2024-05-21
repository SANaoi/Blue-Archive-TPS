using UnityEngine;
using UnityEngine.InputSystem;

/// <summary>
/// 玩家移动状态机实现基类，实现了 玩家移动状态机 的公用功能
/// </summary>
public class PlayerMovementState : IState
{
    //玩家的状态机
    protected PlayerMovementStateMachine stateMachine;
    protected Vector2 movementInput;
    private Vector3 moveDirection = Vector3.zero; 
    private Vector3 moveVelocity; // 平滑速度向量
    public bool isMoving = true;
    protected float baseSpeed = 2f;
    protected float targetSpeedModifier;
    protected float speedModifier = 0f;
    public Vector2 playerMoveContext;
    protected Vector3 currentTargetRotation;
    protected Vector3 timeToReachTargetRotation;
    protected Vector3 dampedTargetRotationCurrentVelocity;
    protected Vector3 dampedTargetRotationPassedTime;

    public PlayerMovementState(PlayerMovementStateMachine stateMachine)
    {
        this.stateMachine = stateMachine;
        InitializeData();
    }

    ~PlayerMovementState()
    {
        stateMachine.playerController.playerInputAction.Movement.performed -= GetplayerMoveInput;
    }
    private void InitializeData()
    {
        timeToReachTargetRotation.y = 0.14f;
        stateMachine.playerController.playerInputAction.Movement.performed += GetplayerMoveInput;
    }

    #region IState 函数
    public virtual void OnEnter() 
    { 
        // Debug.Log("State " + GetType().Name); 
        AddInputActionsCallbacks();

    }
    public virtual void OnExit() 
    { 
        RemoveInputActionsCallbacks();
    }
    public virtual void OnUpdate() 
    {
        ReadMovementInput();
        
        stateMachine.playerController.PlayAnimation(stateMachine.playerController.AnimationData.speedParameterHash, GetMovementSpeed());
    }
    public virtual void OnPhysicsUpdate() 
    { 
        Move();
    }
    # endregion

    # region 主函数
    protected virtual void ReadMovementInput()
    {
        movementInput = stateMachine.playerController.playerInputAction.Movement.ReadValue<Vector2>();
    }

    private void Move()
    {
        if (movementInput == Vector2.zero || speedModifier == 0f) { return; }

        Vector3 movementDirection = GetMovementInputDirection();

        float targetRotationYAngle = Rotate(movementDirection);

        Vector3 targetRotationDirection = GetTargetRotationDirection(targetRotationYAngle);

        float movementSpeed = GetMovementSpeed();

        Vector3 currentPlayerHorizontalVelocity = GetPlayerHorizontalVelocity();
        
        if (stateMachine.playerController.AimStateMachine.CurEid == (int)PlayerAimEnum.Idle)
        {
            Vector3 tep = targetRotationDirection * movementSpeed - currentPlayerHorizontalVelocity;
            Vector3 targetMoveDirection = new Vector3(tep.x, moveDirection.y, tep.z);
            RotateTowardsTargetRotation();
            
            moveDirection = Vector3.SmoothDamp(moveDirection, targetMoveDirection, ref moveVelocity, Time.deltaTime);
            
        }
        else
        {
            Vector3 AimingmovementDirection = GetPalyerMoveVector();
            Vector3 tep = AimingmovementDirection * Mathf.Abs(movementSpeed)  - currentPlayerHorizontalVelocity;
            Vector3 targetMoveDirection = new Vector3(tep.x, moveDirection.y, tep.z);
            
            moveDirection = Vector3.SmoothDamp(moveDirection, targetMoveDirection, ref moveVelocity, Time.deltaTime);
        }
        stateMachine.playerController.characterController.Move(moveDirection * Time.deltaTime);

         // stateMachine.playerController.rb.AddForce(targetRotationDirection * movementSpeed - currentPlayerHorizontalVelocity, ForceMode.VelocityChange);
    }
    private float Rotate(Vector3 direction)
    {
        // 通过给定的方向来旋转玩家。更新目标旋转角度，使玩家朝向目标旋转，并返回方向角度。
        float directionAngle = UpdateTargetRotation(direction);


        return directionAngle;
    }
    
    private Vector3 GetPalyerMoveVector()
    {
        Transform PlayerTransform = stateMachine.playerController.transform;
        Vector3 moveDirection = playerMoveContext.x * PlayerTransform.right + playerMoveContext.y * PlayerTransform.forward;
        return moveDirection.normalized;
    }

    private float AddCameraRotationToAngle(float angle)
    {
        // 将相机的旋转角度添加到给定的角度上，考虑到相机当前的y轴旋转。
        angle += stateMachine.playerController.MainCameraTransform.eulerAngles.y;

        if (angle > 360f)
        {
            angle -= 360f;
        }

        return angle;
    }

    private float GetDirectionAngle(Vector3 direction)
    {
        // Mathf.Atan2: 算出夹角弧度
        // Mathf.Rad2Deg：弧度转度（范围[-pi，pi])
        // 根据输入方向计算角度（以度为单位）
        float directionAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg;

        if (directionAngle < 0f)
        {
            directionAngle += 360f;
        }

        return directionAngle;
    }

    private void UpdateTargetRotationData(float targetAngle)
    {
        //  使用给定的目标角度更新目标旋转数据。
        currentTargetRotation.y = targetAngle;

        dampedTargetRotationPassedTime.y = 0f;
    }
    # endregion

    # region 可复用函数
    protected Vector3 GetMovementInputDirection()
    {
        return new Vector3(movementInput.x, 0f, movementInput.y);
    }

    protected float GetMovementSpeed()
    {
        
        return speedModifier;
    }

    protected Vector3 GetPlayerHorizontalVelocity()
    {
        // 返回玩家刚体速度的水平分量
        Vector3 playerHorizontalVelocity = stateMachine.playerController.characterController.velocity;

        playerHorizontalVelocity.y = 0f;

        return playerHorizontalVelocity;
    }

    private void RotateTowardsTargetRotation()
    {
        // 使用SmoothDampAngle平滑地将玩家旋转到目标旋转。
        float currentYAngle = stateMachine.playerController.rb.rotation.eulerAngles.y;

        if (currentYAngle == currentTargetRotation.y)
        {
            return;
        }

        float smoothedYAngle = Mathf.SmoothDampAngle(currentYAngle, currentTargetRotation.y, ref dampedTargetRotationCurrentVelocity.y, 
                                                    timeToReachTargetRotation.y - dampedTargetRotationPassedTime.y);
        dampedTargetRotationPassedTime.y += Time.deltaTime;

        Quaternion targetRotation = Quaternion.Euler(0f, smoothedYAngle, 0f);

        stateMachine.playerController.rb.MoveRotation(targetRotation);
    }

    protected float UpdateTargetRotation(Vector3 direction, bool shouldConsiderCameraRotation = true)
    {
        // 根据输入方向更新目标旋转。如果指定，考虑相机旋转。
        float directionAngle = GetDirectionAngle(direction);

        if (shouldConsiderCameraRotation)
        {
            directionAngle = AddCameraRotationToAngle(directionAngle);
        }

        if (directionAngle != currentTargetRotation.y)
        {
            UpdateTargetRotationData(directionAngle);
        }

        return directionAngle;
    }

    protected Vector3 GetTargetRotationDirection(float targetAngle)
    {
        // 四元数和向量相乘可以表示这个向量按照这个四元数进行旋转之后得到的新的向量
        // Vector3.forward 表示世界坐标系中的正前方（0, 0, 1）。
        // 它表示将正前方向量 Vector3.forward 绕 y 轴旋转了 targetAngle 度后的方向。
        return Quaternion.Euler(0f, targetAngle, 0f) * Vector3.forward;
    }

    protected void ResetVelocity()
    {
        // 立即停止移动
        moveDirection = new Vector3(0f, moveDirection.y, 0f);
        // stateMachine.playerController.rb.velocity = Vector3.zero;        
    }
    protected virtual void AddInputActionsCallbacks()
    {
        stateMachine.playerController.playerInputAction.Movement.canceled += OnMovementCanceled;
    }

    protected virtual void RemoveInputActionsCallbacks()
    {
        stateMachine.playerController.playerInputAction.Movement.canceled -= OnMovementCanceled;
    }

    protected virtual void OnMovementCanceled(InputAction.CallbackContext context)
    {
        playerMoveContext = Vector2.zero;
        stateMachine.SwitchState((int)PlayerStateEnum.Idle);
    }

    private void GetplayerMoveInput(InputAction.CallbackContext context)
    {
        playerMoveContext = context.ReadValue<Vector2>();
    } 
    # endregion
}

#region  其他状态实现
public class PlayerState_Idle : PlayerMovementState
{
    public PlayerState_Idle(PlayerMovementStateMachine stateMachine) : base(stateMachine)
    {
    }
    public override void OnEnter()
    {
        base.OnEnter();
        //进入状态，玩家开始播放待机动画
        speedModifier = stateMachine.playerController.animator.GetFloat(stateMachine.playerController.AnimationData.speedParameterHash);
        targetSpeedModifier = 0f;
        ResetVelocity();
    }
    public override void OnPhysicsUpdate()
    {
        base.OnPhysicsUpdate();
    }
    public override void OnUpdate()
    {
        base.OnUpdate();
        speedModifier = Mathf.Lerp(speedModifier, targetSpeedModifier, 3 * Time.deltaTime);

        if (movementInput == Vector2.zero)
        {
            return;
        }
        //检测到玩家移动了，那么切换到移动状态
        if (isMoving) stateMachine.SwitchState((int)PlayerStateEnum.Move);
    }
    //没有离开方法，因为在移动状态中，进入会直接切换动画
    //一般来说，离开和进入方法只要有一个存在就行了，如果有一些专属的参数之类的需要清理则会用离开方法来清理
}

public class PlayerState_Move : PlayerMovementState
{
    public PlayerState_Move(PlayerMovementStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void OnEnter()
    {   
        base.OnEnter();
        speedModifier = stateMachine.playerController.animator.GetFloat(stateMachine.playerController.AnimationData.speedParameterHash);
    }
    public override void OnPhysicsUpdate()
    {
        base.OnPhysicsUpdate();
    }

    public override void OnUpdate()
    {
        base.OnUpdate();
        if (playerMoveContext.y < 0 && stateMachine.playerController.AimStateMachine.CurEid != (int)PlayerAimEnum.Idle)
        {
            targetSpeedModifier = -2f;
        }
        else if (playerMoveContext.y >= 0 && stateMachine.playerController.AimStateMachine.CurEid != (int)PlayerAimEnum.Idle)
        {
            targetSpeedModifier = 2f;
        }
        else
        {
            targetSpeedModifier = 4f;
        }
        speedModifier = Mathf.Lerp(speedModifier, targetSpeedModifier, 3 * Time.deltaTime);
    }

}

#endregion