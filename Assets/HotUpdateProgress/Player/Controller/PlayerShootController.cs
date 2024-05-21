
using UnityEngine;

public class PlayerShootController : BaseGun
{
    public void StartPlayTrail(Vector3 StartPoint, Vector3 EndPoint, RaycastHit Hit)
    {
        StartCoroutine(PlayTrail(StartPoint,EndPoint,Hit));
    }
}
