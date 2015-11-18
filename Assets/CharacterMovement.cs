using UnityEngine;
using System.Collections;
using System;
using UnityStandardAssets.CrossPlatformInput;

public class CharacterMovement : MonoBehaviour {

	public float movementSpeed = 5.0f;
	public float jumpSpeed = 3.0f;
	Animator animator;
	float speed = 0.0f;
	float maxSpeed = 1.0f;
	float minSpeed = 0.0f;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
		//// only four dimension 
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		// Vector3 direction = Math.Abs(horizontal) > Math.Abs(vertical) ? new Vector3(1, 0, 0) * horizontal : new Vector3(0, 1, 0) * vertical;
		// gameObject.transform.Translate(direction * movementSpeed * Time.deltaTime);

		//// 360 degree
		if (CrossPlatformInputManager.GetAxis("Horizontal") != 0 || CrossPlatformInputManager.GetAxis("Vertical") != 0) {
			speed = Mathf.Clamp(speed + Time.deltaTime, minSpeed, maxSpeed);
			animator.SetFloat("WalkSpeed", speed);
		}
		else {
			speed = Mathf.Clamp(speed - Time.deltaTime, minSpeed, maxSpeed);
			animator.SetFloat("WalkSpeed", speed);
		}

		if (CrossPlatformInputManager.GetButtonDown("Jump")) {
			animator.SetTrigger("Jump");
			speed = 0;
			animator.SetFloat("WalkSpeed", speed);
		}

		Vector3 moveToward = new Vector3(CrossPlatformInputManager.GetAxis("Horizontal"), 0, CrossPlatformInputManager.GetAxis("Vertical"));
		gameObject.transform.LookAt(gameObject.transform.position + moveToward);
		moveToward = gameObject.transform.forward * speed * movementSpeed;
		gameObject.transform.Translate(moveToward * Time.deltaTime, Space.World);
		
		
		
	}
}
