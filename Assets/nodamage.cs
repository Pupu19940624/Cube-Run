using UnityEngine;
using System.Collections;

public class nodamage : MonoBehaviour {
	public int nodamagetime;
	Shader invincibleShader;
	GameObject player;
	Renderer rend;

	// Use this for initialization
	void Start () {
		player = GameObject.Find("Ciccio_LOD0");
		rend = player.GetComponent<SkinnedMeshRenderer>();
		invincibleShader = Shader.Find("FX/Flare");
		Destroy(gameObject, 3f);
	}
	void OnTriggerEnter (Collider other)
	{
		if(other.gameObject.name == "Player")
		{
			CharacterMovement.DebugMode = true;
			CharacterMovement.nodamagetimer = nodamagetime;

			rend.materials[0].shader = invincibleShader;

			Score.score += 50;

			Destroy(gameObject);
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
