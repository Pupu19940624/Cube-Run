using UnityEngine;
using System.Collections;
using System;
using UnityStandardAssets.CrossPlatformInput;

public class CharacterMovement : MonoBehaviour {

	public float movementSpeed = 4.0f;
	public float jumpSpeed = 8.0f;
	public float gravity = 2.0f;
	public static Animator animator;
	float speed = 0.0f;
	float maxSpeed = 1.0f;
	float minSpeed = 0.0f;
	Vector3 moveToward;
	CharacterController characterController;

	public GameObject trail;
	public float trailInterval = 0.3f;

	bool doubleJump = false;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator>();
		moveToward = Vector3.zero;
		characterController = GetComponent<CharacterController>();

		InvokeRepeating("CreateFootPrint", 0.0f, trailInterval);
	}
	
	// Update is called once per frame
	void Update () {
		//// only four dimension 
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		// Vector3 direction = Math.Abs(horizontal) > Math.Abs(vertical) ? new Vector3(1, 0, 0) * horizontal : new Vector3(0, 1, 0) * vertical;
		// gameObject.transform.Translate(direction * movementSpeed * Time.deltaTime);

		
		if (characterController.isGrounded) {
			//// 360 degree
			if (CrossPlatformInputManager.GetAxis("Horizontal") != 0 || CrossPlatformInputManager.GetAxis("Vertical") != 0) {
				speed = Mathf.Clamp(speed + Time.deltaTime, minSpeed, maxSpeed);
				animator.SetFloat("WalkSpeed", speed);
			}
			else {
				speed = Mathf.Clamp(speed - Time.deltaTime, minSpeed, maxSpeed);
				animator.SetFloat("WalkSpeed", speed);
			}

			moveToward = new Vector3(CrossPlatformInputManager.GetAxis("Horizontal"), moveToward.y, CrossPlatformInputManager.GetAxis("Vertical"));
			gameObject.transform.LookAt(gameObject.transform.position + new Vector3(moveToward.x, 0, moveToward.z));
			
			moveToward = gameObject.transform.forward * speed * movementSpeed;
		}

		if (CrossPlatformInputManager.GetButtonDown("Jump") || Input.GetKeyDown("space")) {
			if (doubleJump || characterController.isGrounded) {
				Debug.Log("jump");
				animator.SetTrigger(doubleJump ? "DoubleJump" : "Jump");
				speed = 0;
				moveToward.y += jumpSpeed;
				animator.SetFloat("WalkSpeed", speed);
				doubleJump = !doubleJump;
			}
		}
		
		characterController.Move(moveToward * Time.deltaTime);
		
	}

	void CreateFootPrint () {
		var fp = Instantiate(trail, gameObject.transform.position + new Vector3(-0.5f, 1.0f, 0.0f), gameObject.transform.rotation);
		Destroy(fp, 5);
	}
}
