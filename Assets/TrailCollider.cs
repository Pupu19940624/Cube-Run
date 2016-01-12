using UnityEngine;
using System.Collections;

public class TrailCollider : MonoBehaviour {

	bool firstTrigger;

	// Use this for initialization
	void Awake () {
		firstTrigger = true;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.name == "Player") {
			if (!firstTrigger) {
				CharacterMovement.GameOver();
			}
		}
	}
	void OnTriggerExit(Collider other) {
		if (other.gameObject.name == "Player") {
			firstTrigger = false;
		}
	}
}
