
using Mirror;
using UnityEngine;
using UnityEngine.UIElements;

public class Recoil : MonoBehaviour
{
    private Vector3 currentRotation;
    private Vector3 targetRotation;

    [SerializeField] private float recoilX;
    [SerializeField] private float recoilY;
    [SerializeField] private float recoilZ;

    [SerializeField] private float snappiness;
    [SerializeField] private float returnSpeed;

    public Transform CharacterTransform;
    private float targetAngle;

    void Start()
    {
    }

    void Update()
    {
        targetRotation = Vector3.Lerp(targetRotation, Vector3.zero, returnSpeed * Time.deltaTime);
        currentRotation = Vector3.Slerp(currentRotation, targetRotation, snappiness * Time.fixedDeltaTime);
        transform.localRotation = Quaternion.Euler(currentRotation);
    }

    public void RecoilFire()
    {
        targetAngle = CharacterTransform.rotation.eulerAngles.y;
        float targetAngleRadians = targetAngle * Mathf.Deg2Rad;
        
        targetRotation += new Vector3
        (
            recoilX * Mathf.Cos(targetAngleRadians),
            0,
            -recoilX * Mathf.Sin(targetAngleRadians)
        );
    }
}   
