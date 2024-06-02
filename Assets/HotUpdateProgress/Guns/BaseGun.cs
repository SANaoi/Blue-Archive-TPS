using System.Collections;
using UnityEngine;
using UnityEngine.Pool;
using Mirror;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using System.Threading.Tasks;

public class BaseGun : NetworkBehaviour
{
    // public VisualEffectAsset VFX_Flash;
    public ParticleSystem ImpactParticle;
    public TrailRenderer Trail;
    protected ObjectPool<TrailRenderer> TrailPool;
    protected ObjectPool<ParticleSystem> ImpactPool;

    public ShootConfig_SO shootConfig;
    public TrailConfig_SO trailConfig;

    private void Awake() 
    {
        // TrailPool = new ObjectPool<TrailRenderer>(CreateTrail);
        // ImpactPool = new ObjectPool<ParticleSystem>(CreateImpactParticle);
    }

    // protected TrailRenderer CreateTrail()
    // {
    //     TrailRenderer trail = Instantiate(Trail);

    //     // 在网络中同步子弹

    //     trail.material = trailConfig.material;
    //     trail.widthCurve = trailConfig.WidthCurve;
    //     trail.colorGradient = trailConfig.Color;
    //     trail.time = trailConfig.Duration;
    //     trail.minVertexDistance = trailConfig.MinVertexDistance;
    //     trail.emitting = false;
    //     trail.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;

    //     return trail;
    // }

    // protected ParticleSystem CreateImpactParticle()
    // {
    //     // 实例化粒子系统，并将其设置为子对象
    //     ParticleSystem impact = Instantiate(ImpactParticle);
    //     NetworkServer.Spawn(impact.gameObject);
    //     impact.gameObject.SetActive(false); // 默认不激活

    //     return impact;
    // }
    // [Command]
    // public void PlayTrail(Vector3 StartPoint, Vector3 EndPoint)
    // {
    //     // 服务器端生成轨迹渲染器实例
    //     GameObject trailInstance = Instantiate(Trail, StartPoint, Quaternion.identity);
    //     trailInstance.SetActive(true);
    //     NetworkServer.Spawn(trailInstance.gameObject);

    //     // 设置轨迹渲染器为激活状态并开始播放
    //     trailInstance.GetComponent<TrailRenderer>().emitting = true;
    //     float distance = Vector3.Distance(StartPoint, EndPoint);
    //     float remainingDistance = distance;
    //     while (remainingDistance > 0)
    //     {
    //         trailInstance.transform.position = Vector3.Lerp(
    //             StartPoint,
    //             EndPoint,

    //             Mathf.Clamp01(1 - remainingDistance / distance)
    //         );
    //         remainingDistance -= trailConfig.SimulationSpeed * Time.deltaTime;
    //     }
    //     // 移动轨迹渲染器到EndPoint
    //     trailInstance.transform.position = EndPoint;

    //     // 创建粒子效果实例（如果击中物体）
    //     if (Physics.Raycast(StartPoint, EndPoint - StartPoint, out RaycastHit hit))
    //     {
    //         GameObject impactInstance = Instantiate(ImpactParticle, hit.point, Quaternion.LookRotation(hit.normal));
    //         NetworkServer.Spawn(impactInstance);
    //     }
    // }
    [Command]
    public void PlayTrail(Vector3 StartPoint, Vector3 EndPoint, RaycastHit Hit)
    {
        StartCoroutine(PlayTrail_(StartPoint, EndPoint, Hit));
        if (Physics.Raycast(StartPoint, EndPoint - StartPoint, out RaycastHit hit))
        {
            ParticleSystem impactInstance = Instantiate(ImpactParticle, hit.point, Quaternion.LookRotation(hit.normal));
            NetworkServer.Spawn(impactInstance.gameObject);
        }
    }

    private IEnumerator PlayTrail_(Vector3 StartPoint, Vector3 EndPoint, RaycastHit Hit)
    {
        TrailRenderer trailInstance = Instantiate(Trail);
        NetworkServer.Spawn(trailInstance.gameObject);
        trailInstance.transform.position = StartPoint;  
        trailInstance.gameObject.SetActive(true);
        yield return null;

        trailInstance.emitting = true;

        float distance = Vector3.Distance(StartPoint, EndPoint);
        float remainingDistance = distance;

        while (remainingDistance > 0)
        {
            trailInstance.transform.position = Vector3.Lerp(
                StartPoint,
                EndPoint,

                Mathf.Clamp01(1 - remainingDistance / distance)
            );
            remainingDistance -= trailConfig.SimulationSpeed * Time.deltaTime;
            yield return null;
        }
    }
        // if (Hit.collider != null)
        // {
        //     // ParticleSystem impactInstance = ImpactPool.Get(); 
        //     // ParticleSystem impactInstance = Instantiate(ImpactParticle, EndPoint,  Quaternion.LookRotation(Hit.normal));
        //     // impactInstance.gameObject.SetActive(true);
        //     // NetworkServer.Spawn(impactInstance.gameObject);
        //     // impactInstance.transform.position = EndPoint;
        //     // impactInstance.transform.rotation = Quaternion.LookRotation(Hit.normal);
        //     // float stayTime = impactInstance.main.duration;
        //     // // TODO impactDuration 弹坑保留时间
        //     // impactInstance.gameObject.SetActive(false);
        //     // ImpactPool.Release(impactInstance);
        //     // Instantiate(ImpactParticle, EndPoint, Quaternion.LookRotation(Hit.normal));
        // }

        // yield return new WaitForSeconds(trailConfig.Duration);

        // trailInstance.emitting = false;
        // trailInstance.gameObject.SetActive(false);
        // TrailPool.Release(trailInstance);
}
