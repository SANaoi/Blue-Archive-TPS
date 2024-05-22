using System.Collections;
using UnityEngine;
using UnityEngine.Pool;

public class BaseGun : MonoBehaviour
{
    // public VisualEffectAsset VFX_Flash;
    // public VisualEffectAsset ImpactParticle;
    protected ObjectPool<TrailRenderer> TrailPool;
    // protected ObjectPool<VisualEffect> ImpactPool;

    public ShootConfig_SO shootConfig;
    public TrailConfig_SO trailConfig;

    private void Awake() 
    {
        TrailPool = new ObjectPool<TrailRenderer>(CreateTrail);
        // ImpactPool = new ObjectPool<VisualEffect>(CreateImpactParticle);
    }

    protected TrailRenderer CreateTrail()
    {
        GameObject instance = new GameObject("Buller Trail");
        TrailRenderer trail  = instance.AddComponent<TrailRenderer>();

        trail.material = trailConfig.material;
        trail.widthCurve = trailConfig.WidthCurve;
        trail.colorGradient = trailConfig.Color;
        trail.time = trailConfig.Duration;
        trail.minVertexDistance = trailConfig.MinVertexDistance;
        trail.emitting = false;
        trail.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;

        return trail;
    }
    // protected VisualEffect CreateImpactParticle()
    // {
    //     GameObject instance = new GameObject("Impact Particle");
    //     VisualEffect impact = instance.AddComponent<VisualEffect>();
    //     impact.visualEffectAsset = ImpactParticle;
    //     return impact;
    // }

    protected virtual IEnumerator PlayTrail(Vector3 StartPoint, Vector3 EndPoint, RaycastHit Hit)
    {
        TrailRenderer trailInstance = TrailPool.Get();
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
        
        if (Hit.collider != null)
        {
            // VisualEffect impactInstance = ImpactPool.Get();
            // impactInstance.transform.position = EndPoint;
            // impactInstance.gameObject.SetActive(true);

            // // TODO impactDuration 弹坑保留时间
            // yield return new WaitForSeconds(0.3f); 
            // impactInstance.gameObject.SetActive(false);
            // ImpactPool.Release(impactInstance);

        }

        yield return new WaitForSeconds(trailConfig.Duration);

        trailInstance.emitting = false;
        trailInstance.gameObject.SetActive(false);
        TrailPool.Release(trailInstance);
    }
}
