using UnityEngine;
using System.Collections;

public class slow : MonoBehaviour {
	public int slowtime;
	// Use this for initialization
	void Start () {
	
	}
	void OnTriggerEnter (Collider other)
	{
		if(other.gameObject.name == "Player" && CharacterMovement.DebugMode != true)
		{
			CharacterMovement.movementSpeed = 12.5f;
			CharacterMovement.slowtimer = slowtime;
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
