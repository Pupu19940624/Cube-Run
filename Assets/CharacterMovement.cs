using UnityEngine;
using System.Collections;
using System;
using UnityStandardAssets.CrossPlatformInput;

public class CharacterMovement : MonoBehaviour {

	public static bool DebugMode = false;

	public static float movementSpeed = 25.0f;
	public static float timer = 0f;
	public float jumpSpeed = 20.0f;
	public float gravity = 40.0f;
	public static Animator animator;
	float speed = 0.0f;
	float maxSpeed = 1.0f;
	float minSpeed = 0.0f;
	Vector3 moveToward;
	CharacterController characterController;

	public GameObject trail;
	public float trailInterval = 0.1f;

	public static CharacterMovement cm;

	public static bool canMove = true;
	public static bool isMud = false;

	bool doubleJump = false;

	public AudioSource audio;
	public AudioClip stepSound;
	public AudioClip jumpSound;

	// Use this for initialization
	void Start () {
		cm = this;
		canMove = true;
		animator = GetComponent<Animator>();
		moveToward = Vector3.zero;
		characterController = GetComponent<CharacterController>();
		audio = GetComponent<AudioSource>();

		InvokeRepeating("CreateFootPrint", 0.0f, trailInterval);
	}
	
	// Update is called once per frame
	void Update () {
		//// only four dimension 
		// float horizontal = CrossPlatformInputManager.GetAxis("Horizontal");
		// float vertical = CrossPlatformInputManager.GetAxis("Vertical");
		// Vector3 direction = Math.Abs(horizontal) > Math.Abs(vertical) ? new Vector3(1, 0, 0) * horizontal : new Vector3(0, 1, 0) * vertical;
		// gameObject.transform.Translate(direction * movementSpeed * Time.deltaTime);

		
		if (characterController.isGrounded && canMove) {
			doubleJump = false;

			//// 360 degree
			if (CrossPlatformInputManager.GetAxis("Horizontal") != 0 || CrossPlatformInputManager.GetAxis("Vertical") != 0) {
				speed = 1;
				// speed = Mathf.Clamp(speed + Time.deltaTime, minSpeed, maxSpeed);
				animator.SetFloat("WalkSpeed", speed);
				if (!audio.isPlaying) {
					audio.PlayOneShot(stepSound);
				}
			}
			else {
				speed = 0;
				// speed = Mathf.Clamp(speed - Time.deltaTime, minSpeed, maxSpeed);
				animator.SetFloat("WalkSpeed", speed);
			}

			moveToward = new Vector3(CrossPlatformInputManager.GetAxis("Horizontal"), 0, CrossPlatformInputManager.GetAxis("Vertical"));
			gameObject.transform.LookAt(gameObject.transform.position + new Vector3(moveToward.x, 0, moveToward.z));
			
			moveToward = new Vector3(gameObject.transform.forward.x, 0, gameObject.transform.forward.z) * speed * movementSpeed;
		}

		if (CrossPlatformInputManager.GetButtonDown("Jump") || Input.GetKeyDown("space") && canMove) {
			if (doubleJump || characterController.isGrounded) {
				animator.SetTrigger(doubleJump ? "DoubleJump" : "Jump");
				speed = 0;
				moveToward.y = jumpSpeed;
				animator.SetFloat("WalkSpeed", speed);
				doubleJump = !doubleJump;

				audio.PlayOneShot(jumpSound);
				
			}
		}

		moveToward.y -= gravity * Time.deltaTime;
		
		if (canMove) {
			characterController.Move(moveToward * Time.deltaTime);
		}

		if (timer > 0) {
			timer -= Time.deltaTime;
		} 
		else {
			// movementSpeed = 25.0f; 
			timer = 0f;
		}
		
		if (isMud) {
			movementSpeed = 10.0f;
			isMud = false;
			Invoke("SpeedUp", 3f);
		}
	}

	void SpeedUp() {
		movementSpeed = 25.0f;
	}

	void CreateFootPrint () {
		if (gameObject.transform.position.y < 0) {
			Debug.Log("under");
		}
		var fp = Instantiate(trail, gameObject.transform.position + new Vector3(0.0f, 0.5f, 0.0f), gameObject.transform.rotation);
		Destroy(fp, 5);
	}

	public static void GameOver() {
		Debug.Log("Die!");
		if (!DebugMode) {
			CharacterMovement.animator.SetTrigger("Die");
			canMove = false;

			cm.Invoke("Back2MainMenu", 3);
		}
	}

	void Back2MainMenu() {
		Application.LoadLevel("MainMenu");
	}
}
