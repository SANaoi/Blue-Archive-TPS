using System.Collections.Generic;

public class FSM
{
    public Dictionary<int, IState> StateDic;
    //当前状态
    public IState currentState;
    //当前状态的枚举
    public int CurEid;
    //构造函数
    public FSM()
    {
        StateDic = new();
    }

    //添加状态
    public virtual void AddState(int eid, IState state)
    {
        if (!StateDic.ContainsKey(eid)) StateDic.Add(eid, state);
    }

     public virtual void Update()
    {
        currentState?.OnUpdate();
    }

    protected internal virtual void FixedUpdate()
    {
        currentState?.OnPhysicsUpdate();
    }

    /// <summary>
    /// 初始化时开启第一个状态,并调用其进入函数
    /// </summary>
    public virtual void Begin(int eid)
    {
        if (!StateDic.ContainsKey(eid)) return;
        CurEid = eid;
        currentState = StateDic[eid];
        currentState?.OnEnter();
    }

    //切换状态
    public void SwitchState(int eid)
    {
        //目标状态是否已被添加
        if (!StateDic.ContainsKey(eid)) return;
        //退出当前状态
        currentState?.OnExit();
        //切换状态，并触发进入函数
        currentState = StateDic[eid];
        CurEid = eid;
        currentState?.OnEnter();

    }
}

/// <summary>
/// 一个参数类，参数类是存储共同数据的类
/// </summary>
public class FSM_Parameter
{
    public string name;
}