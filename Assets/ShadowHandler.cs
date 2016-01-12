using UnityEngine;
using System.Collections;

public class ShadowHandler : MonoBehaviour {

	public GameObject character;

	// Use this for initialization
	void Start () {
		character = GameObject.FindWithTag("Player");
	}
	
	// Update is called once per frame
	void Update () {
		gameObject.transform.position = new Vector3(character.transform.position.x, 0.05f, character.transform.position.z); 

		if (character.GetComponent<CharacterController>().isGrounded) {
			Destroy(gameObject);
		}
	}
}
