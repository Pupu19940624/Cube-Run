using UnityEngine;

public class BallMovement : MonoBehaviour
{
	public float speed = 6f;            // The speed that the player will move at.
	Vector3 movement;                   // The vector to store the direction of the player's movement.
	Rigidbody Ball;          			// Reference to the ball's rigidbody.


	void Awake ()
	{
		// Set up references.
		Ball = GetComponent<Rigidbody>();
		float h = Random.Range(-1.0f,1.0f);
		float v = Random.Range(-1.0f,1.0f);
		movement.Set (h, 0f, v);
		
		// Ball.AddForce (movement * 3000);
	}
	
	
/*	void FixedUpdate ()
	{
		float h = Random.Range(-100f,100f);
		float v = Random.Range(-100f,100f);
		
		// Move the ball around the scene.
		Move (h, v);
		//Destroy (Ball);
	}
	
	void Move (float h, float v)
	{
		// Set the movement vector based on the axis input.
		movement.Set (h, 0f, v);

		Ball.AddForce (movement);
		// Normalise the movement vector and make it proportional to the speed per second.
		//movement = movement.normalized * speed * Time.deltaTime;
		
		// Move the player to it's current position plus the movement.
		//Ball.MovePosition (transform.position + movement);
	}
*/
}