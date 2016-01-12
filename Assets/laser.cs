using UnityEngine;

public class laser : MonoBehaviour
{
    
    public float range = 100f;


    float timer;
    Ray shootRay;
    RaycastHit shootHit;
    int shootableMask;
    ParticleSystem gunParticles;
	LineRenderer lasershot;
	Light laserLight;
    float effectsDisplayTime = 1f;


    void Awake ()
    {
        shootableMask = LayerMask.GetMask ("shootable");	//Layer定義為shootable的
        gunParticles = GetComponent<ParticleSystem> ();
		lasershot = GetComponent <LineRenderer> ();
        laserLight = GetComponent<Light> ();
		//Shoot ();
    }
	void Update()
	{
		timer += Time.deltaTime;
		if (timer >= 3f) {
			Shoot();
		}
		if (timer >= 4f) {
			timer = 0f;
			laserLight.enabled = false;
			lasershot.enabled = false;
		}
	}
    void Shoot ()
    {
        laserLight.enabled = true;

		lasershot.enabled = true;		//子彈軌機  要有首尾
		lasershot.SetPosition (0, transform.position); //set 首:槍端為0

        shootRay.origin = transform.position;	//利用射線判斷結束的點
        shootRay.direction = transform.forward;

        if(Physics.Raycast (shootRay, out shootHit, range, shootableMask))  //判斷有沒有射到(shootHit傳出來射到什麼  shootableMask可以射到的東西)
        {
			lasershot.SetPosition (1, shootHit.point);	//尾 : 射中的點
        }
        else
        {
			lasershot.SetPosition (1, shootRay.origin + shootRay.direction * range);
        }
    }
}
