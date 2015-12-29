using UnityEngine;
using System.Collections;

public class prefabscript : MonoBehaviour {
	public GameObject Obj_Creat;//要生成的物件
	public GameObject bouncingBall;
	public GameObject groundTrap;
	public GameObject mud;
	public GameObject metero;
	public GameObject invincibleItem;

	public GameObject warningMark;
	public float f_Time=1.0f; //生成間隔
	public GameObject canvas;

	GameObject ground;
	float size;

	public float ballSpeed = 3000f;
	public float bouncingBallSpeed = 40f;
	Vector3 aFace;
	Vector3 aPosition;

	int number = 1;
	public int wave;

	void Start () {

		// Instantiate(Resources.Load("Zombunny"),new Vector3(2,2,2),Quaternion.identity);

		ground = GameObject.Find("Ground");
		size = ground.GetComponent<Renderer>().bounds.size.x;
		canvas = GameObject.Find("Canvas");

		wave = 0;

		gameObject.GetComponent<AudioSource>().volume = PlayerPrefs.GetFloat("bgmVolume");
		GameObject.Find("Player").GetComponent<AudioSource>().volume = PlayerPrefs.GetFloat("soundVolume");
	}
	
	// Update is called once per frame
	void Update () {
		
		if (f_Time > 0) {
			f_Time -= Time.deltaTime;
		} 
		else{
			if (wave >= 5 && wave <= 12) {
				createBall(timingFunction(Time.time - Score.gameTime));
			}
			else if (wave >= 16 && wave < 25) {
				createBouncingBall(bouncingBallTimingFunction(Time.time - Score.gameTime));
			}
			else if(wave >= 27 && wave < 39){
				createBall(timingFunction(number));
				createBouncingBall(bouncingBallTimingFunction(number));
				number++;
			}
			else if(wave >= 41 && wave < 54){
				createBall(timingFunction(number));
				createBouncingBall(bouncingBallTimingFunction(number));
				number++;
			}
			else if(wave >= 56){
				createBall(timingFunction(number));
				createBouncingBall(bouncingBallTimingFunction(number));
				number++;
			}
			createGroundTrap(Random.Range(0, 2));

			if (wave % 5 == 1) {
				createMud(Random.Range(0, 2));
			}
			if (wave % 10 == 1) {
				createInvincible(1);
			}

			f_Time=1.0f;
			wave += 1;
		}
	}

	int timingFunction(float t) {
		return (int) Mathf.Floor(1 + t * 0.083f);
	}

	int bouncingBallTimingFunction(float t) {
		return (int) Mathf.Floor(1 + t * 0.001f);
	}

	void getRandomPosition() {
		int N = 9;

		float rFace = Random.Range(1, 5);
		float rPosition = Random.Range(0, N);
		rPosition = -size / 2 + size / N / 2 + size / N * rPosition; 			

		if (rFace == 1) {
			aFace = new Vector3(0, 0, 1);
			aPosition = new Vector3(rPosition, 0.5f, -50f);
		}
		else if (rFace == 2) {
			aFace = new Vector3(-1, 0, 0);
			aPosition = new Vector3(50f, 0.5f, rPosition);
		}
		else if (rFace == 3) {
			aFace = new Vector3(0, 0, -1);
			aPosition = new Vector3(rPosition, 0.5f, 50f);
		}
		else {
			aFace = new Vector3(1, 0, 0);
			aPosition = new Vector3(-50f, 0.5f, rPosition);
		}
	}

	void createBall(int n = 1) {
		for (int i = 0; i < n; i++) {
			getRandomPosition();

			GameObject warning = (GameObject) Instantiate (warningMark, aPosition, Quaternion.identity);
			
			StartCoroutine(createBallPrefab(aPosition, aFace));

			Destroy(warning, 1);
		}	
	}

	void createBouncingBall(int n = 1) {
		for (int i = 0; i < n; i++) {
			getRandomPosition();

			GameObject warning = (GameObject) Instantiate (warningMark, aPosition, Quaternion.identity);

			aPosition.y = Random.Range(10f, size / 2);

			StartCoroutine(createBouncingBallPrefab(aPosition, aFace));

			Destroy(warning, 1);
		}
	}

	void createGroundTrap(int n = 1) {
		int N = 9;
		for (int i = 0; i < n; i++) {
			float rx = Random.Range(0, N);
			float rz = Random.Range(0, N);
			rx = -size / 2 + size / N / 2 + (size / N) * rx;
			rz = -size / 2 + size / N / 2 + (size / N) * rz;

			aPosition = new Vector3(rx, 0, rz);

			GameObject warning = (GameObject) Instantiate (warningMark, aPosition, Quaternion.identity);

			StartCoroutine(createGroundTrapPrefab(aPosition));

			Destroy(warning, 1);
		}
	}

	void createMud(int n = 1) {
		int N = 9;
		for (int i = 0; i < n; i++) {
			float rx = Random.Range(0, N);
			float rz = Random.Range(0, N);
			rx = -size / 2 + size / N / 2 + (size / N) * rx;
			rz = -size / 2 + size / N / 2 + (size / N) * rz;

			aPosition = new Vector3(rx, 0, rz);

			GameObject warning = (GameObject) Instantiate (warningMark, aPosition, Quaternion.identity);

			StartCoroutine(createMudPrefab(aPosition));

			Destroy(warning, 1);
		}
	}

	void createInvincible(int n = 1) {
		int N = 9;
		for (int i = 0; i < n; i++) {
			float rx = Random.Range(0, N);
			float rz = Random.Range(0, N);
			rx = -size / 2 + size / N / 2 + (size / N) * rx;
			rz = -size / 2 + size / N / 2 + (size / N) * rz;

			aPosition = new Vector3(rx, 5f, rz);

			GameObject item = (GameObject) Instantiate (invincibleItem, aPosition, Quaternion.identity);
		}
	}

	IEnumerator createBallPrefab(Vector3 aPosition, Vector3 aFace)
	{
		yield return new WaitForSeconds(1f);
		
		GameObject ball = (GameObject) Instantiate (Obj_Creat, aPosition, Quaternion.identity);
		ball.GetComponent<Rigidbody>().AddForce(aFace * ballSpeed);
		ball.GetComponent<Rigidbody>().AddTorque(aFace * 100, ForceMode.Impulse);

		Destroy(ball, 2);

		Score.score += 10;
	}

	IEnumerator createBouncingBallPrefab(Vector3 aPosition, Vector3 aFace)
	{
		yield return new WaitForSeconds(1f);
		
		GameObject ball = (GameObject) Instantiate (bouncingBall, aPosition, Quaternion.identity);
		ball.GetComponent<Rigidbody>().AddForce(aFace * bouncingBallSpeed, ForceMode.Impulse);

		Destroy(ball, 3.5f);

		Score.score += 10;
	}

	IEnumerator createGroundTrapPrefab(Vector3 aPosition)
	{
		yield return new WaitForSeconds(1f);
		
		GameObject trap = (GameObject) Instantiate (groundTrap, aPosition, Quaternion.identity);

		Score.score += 10;
	}

	IEnumerator createMudPrefab(Vector3 aPosition)
	{
		yield return new WaitForSeconds(1f);
		
		GameObject trap = (GameObject) Instantiate (mud, aPosition, Quaternion.identity);

		Score.score += 10;
	}

}
