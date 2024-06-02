
using Mirror;
using UnityEditor;
using UnityEngine;

public class PlayerShootController : BaseGun
{
    public void StartPlayTrail(Vector3 StartPoint, Vector3 EndPoint, RaycastHit Hit)
    {
        PlayTrail(StartPoint,EndPoint,Hit);
    }
}
