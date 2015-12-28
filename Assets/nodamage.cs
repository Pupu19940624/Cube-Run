using UnityEngine;
using System.Collections;

public class nodamage : MonoBehaviour {
	public int nodamagetime;
	// Use this for initialization
	void Start () {
	
	}
	void OnTriggerEnter (Collider other)
	{
		if(other.gameObject.name == "Player")
		{
			CharacterMovement.DebugMode = true;
			CharacterMovement.nodamagetimer = nodamagetime;
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
