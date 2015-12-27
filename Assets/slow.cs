using UnityEngine;
using System.Collections;

public class slow : MonoBehaviour {
	public int slowtime;
	// Use this for initialization
	void Start () {
	
	}
	void OnTriggerEnter (Collider other)
	{
		if(other.gameObject.name == "Player")
		{
			CharacterMovement.movementSpeed = 12.5f;
			CharacterMovement.timer = slowtime;
		}
	}
	// Update is called once per frame
	void Update () {
	
	}
}
