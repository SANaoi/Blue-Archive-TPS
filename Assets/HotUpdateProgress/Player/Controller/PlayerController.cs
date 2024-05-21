using UnityEngine.InputSystem;
using UnityEngine.Animations.Rigging;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine;
using Cinemachine;
using Mirror;

public class PlayerController : NetworkBehaviour
{

    [HideInInspector] public Animator animator;

    [field: Header("Animations")]
    [field: SerializeField] public PlayerAnimationData AnimationData;
    public Transform LookPoint;
    bool isAim;
    public PlayerMovementStateMachine StateMachine;
    public PlayerAimStateMachine AimStateMachine;

    public PlayerInputAction inputActions;
    public PlayerInputAction.PlayerActions playerInputAction;
    public Rigidbody rb;
    public CharacterController characterController;
    public Transform MainCameraTransform;
    
    public MultiAimConstraint AimConstraint;
    [Range(-180, 180)]
    public float rotationOffset;
    public Recoil recoilScript;
    public Transform parentCamera;
    // --- ShootConfig ---
    public PlayerShootController ShootController;
    // --- Muzzle ---
    public GameObject muzzlePosition;


    private void Start()
    {
        if (!isLocalPlayer) { return; }
        animator = GetComponentInChildren<Animator>();
        rb = GetComponentInChildren<Rigidbody>();
        ShootController = GetComponent<PlayerShootController>();

        AnimationData = new PlayerAnimationData();
        AnimationData.InitializeData();


        StateMachine = new(this);
        //添加状态类
        StateMachine.AddState((int)PlayerStateEnum.Move, new PlayerState_Move(StateMachine));
        StateMachine.AddState((int)PlayerStateEnum.Idle, new PlayerState_Idle(StateMachine));
        //记得设置初始状态机
        StateMachine.Begin((int)PlayerStateEnum.Idle);

        AimStateMachine = new(this);
        AimStateMachine.AddState((int)PlayerAimEnum.Idle, new PlayerAimState_Idle(AimStateMachine));
        AimStateMachine.AddState((int)PlayerAimEnum.Aim, new PlayerAimState_Aim(AimStateMachine));
        AimStateMachine.AddState((int)PlayerAimEnum.Shoot, new PlayerAimState_Shoot(AimStateMachine));
        AimStateMachine.Begin((int)PlayerAimEnum.Idle);

        if (!isLocalPlayer)
        {
            AimConstraint.weight = 0f;
        }
        else
        {
            AimConstraint.weight = 1f;
        }
    }

    private void OnDisable() 
    {
        if (!isLocalPlayer) { return; }
        StateMachine.StateDic.Clear();
        AimStateMachine.StateDic.Clear();
    }
    public void Update()
    {
        if (!isLocalPlayer) { return; }
        SetAimConstraintWeight();   
        StateMachine.Update();
        AimStateMachine.Update();
    }

    private void LateUpdate() 
    { 
    }
    //如果你的状态机有物理更新，不要忘了他
    //我是把移动速度赋值逻辑写在了移动状态，所以这里没有任何移动逻辑
    public void FixedUpdate()
    {
        if (!isLocalPlayer) { return; }
        StateMachine.FixedUpdate();
        AimStateMachine.FixedUpdate();
    }


# region 主要功能
    public override void OnStartAuthority()
    {   
        base.OnStartAuthority();

        if (!isOwned){return;}

        PlayerInputAction inputActions = new PlayerInputAction();
        inputActions.Enable();
        playerInputAction = inputActions.Player;

    }

    public override void OnStopAuthority() 
    {
        if (!isOwned){return;}
        base.OnStartAuthority();

        inputActions.Disable();
    }

    public override void OnStartLocalPlayer()
    {
        if (!isLocalPlayer){return;}
        base.OnStartLocalPlayer();
        
        AsyncOperationHandle<GameObject> op = Addressables.InstantiateAsync("PlayerFollowCamera", parentCamera);
        op.Completed += (AsyncOperationHandle<GameObject> obj) =>
        {
            if (obj.Status == AsyncOperationStatus.Succeeded)
            {
                // 获取实例化的对象
                GameObject camera = obj.Result;
                camera.GetComponent<CinemachineVirtualCamera>().Follow = LookPoint;
                camera.GetComponent<CinemachineVirtualCamera>().LookAt = LookPoint;
            }
            else
            {
                Debug.LogError("加载camera失败");
            }
        };
        MainCameraTransform = Camera.main.transform;  
    }


    
# endregion
# region 可复用功能
    public bool isPlayerAim()
    {
        bool isAim = true?playerInputAction.Aim.ReadValue<float>() > 0 : false;
        bool isShoot = true?playerInputAction.Shoot.ReadValue<float>() > 0 : false;
        return isAim || isShoot;
    }
    
    public void PlayAnimation(int animationHash, float value)
    {
        animator.SetFloat(animationHash, value);
    }

    public void PlayAnimation(int animationHash )
    {
        animator.Play(animationHash);
    }

    public void StartAnimation(int animationHash)
    {
        animator.SetBool(animationHash, true);
    }

    public void StopAnimation(int animationHash)
    {
        animator.SetBool(animationHash, false);
    }

    private void SetAimConstraintWeight()
    {   
        if (!isLocalPlayer) {return;}
        if (AimStateMachine.CurEid != (int)PlayerAimEnum.Idle && isOwned)
        {
            transform.rotation = Quaternion.Euler(0f, MainCameraTransform.eulerAngles.y + rotationOffset, 0f);
            isAim = true;
        }
        else
        {
            isAim = false;
        }
        float targetWeight = isAim == true ? 1f : 0f;
        AimConstraint.weight = Mathf.Lerp(AimConstraint.weight, targetWeight ,  2 * Time.deltaTime);
    }

# endregion


}
