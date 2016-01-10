using UnityEngine;
using System.Collections;

public class GroundTrap : MonoBehaviour {
	float ry;
	public float growingSpeed = 1f;
	bool isGrowing = true;
	Vector3 moveToward;

	// Use this for initialization
	void Start () {
		ry = Random.Range(10, 20);
		transform.localScale = new Vector3(transform.localScale.x, ry, transform.localScale.z);
		transform.position = new Vector3(transform.position.x, -ry / 2, transform.position.z);
	}
	
	// Update is called once per frame
	void Update () {
		if (isGrowing) {
			moveToward = new Vector3(0, 1f, 0) * growingSpeed * Time.deltaTime;
			if ((transform.position + moveToward).y > ry / 2) {
				moveToward.y = ry / 2 - transform.position.y;
				Invoke("changeDirection", 3f);
			}
		}
		else {
			moveToward = new Vector3(0, -1f, 0) * growingSpeed * Time.deltaTime;
			if ((transform.position + moveToward).y < -ry / 2) {
				Destroy(gameObject);
			}
		}

		transform.Translate(moveToward);
	}

	void changeDirection() {
		isGrowing = false;
	}
}
