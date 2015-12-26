using UnityEngine;
using System.Collections;

public class prefabscript : MonoBehaviour {
	public GameObject Obj_Creat;//要生成的物件
	public GameObject warningMark;
	public float f_Time=1.0f; //生成間隔
	public Transform Tran_CreatPoint;//物件要生成的位置
	public Vector3 V3_Random;//隨機生成位置
	public GameObject canvas;

	GameObject ground;
	float size;

	public float ballSpeed = 3000f;
	Vector3 aFace;
	Vector3 aPosition;

	void Start () {

		// Instantiate(Resources.Load("Zombunny"),new Vector3(2,2,2),Quaternion.identity);

		ground = GameObject.Find("Ground");
		size = ground.GetComponent<Renderer>().bounds.size.x;
		canvas = GameObject.Find("Canvas");
	}
	
	// Update is called once per frame
	void Update () {
		V3_Random=new Vector3(Random.Range(-50f,50f),2,Random.Range(-50f,50f));
		//XYZ隨機值
		if (f_Time > 0) {
			f_Time -= Time.deltaTime;
		} 
		else{
			createBall(timingFunction(Time.time - Score.gameTime));
			f_Time=1.0f;
		}
	}

	int timingFunction(float t) {
		return (int) Mathf.Floor(1 + t * 0.083f);
	}

	void createBall(int n = 1) {
		for (int i = 0; i < n; i++) {
			float rFace = Random.Range(1, 5);
			float rPosition = Random.Range(0, 10);
			rPosition = -size / 2 + 5 + 10 * rPosition; 			

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

			GameObject warning = (GameObject) Instantiate (warningMark, aPosition, Quaternion.identity);
			
			Invoke("createBallPrefab", 1);

			Destroy(warning, 1);
		}
		
	}

	void createBallPrefab() {
		GameObject ball = (GameObject) Instantiate (Obj_Creat, aPosition, Quaternion.identity);
		ball.GetComponent<Rigidbody>().AddForce(aFace * ballSpeed);
		ball.GetComponent<Rigidbody>().AddTorque(aFace * 100, ForceMode.Impulse);

		Destroy(ball, 2);

		Score.score += 1;
	}
}
