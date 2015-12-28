using UnityEngine;
using System.Collections;

public class MudTrap : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Destroy(gameObject, 3f);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.name == "Player") {
			CharacterMovement.isMud = true;
		}
	}

	void OnTriggerExit(Collider other) 
	{
	}
}
