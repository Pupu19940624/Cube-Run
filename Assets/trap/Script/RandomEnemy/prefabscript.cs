﻿using UnityEngine;
using System.Collections;

public class prefabscript : MonoBehaviour {
	public GameObject Obj_Creat;//要生成的物件
	public float f_Time=1.0f; //生成間隔
	public Transform Tran_CreatPoint;//物件要生成的位置
	public Vector3 V3_Random;//隨機生成位置
	// Use this for initialization

	GameObject ground;
	float size;

	public float ballSpeed = 3000f;

	void Start () {

		// Instantiate(Resources.Load("Zombunny"),new Vector3(2,2,2),Quaternion.identity);

		ground = GameObject.Find("Ground");
		size = ground.GetComponent<Renderer>().bounds.size.x;
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
			float rPosition = Random.Range(-size / 2, size / 2);
			Vector3 aFace;
			Vector3 aPosition;

			if (rFace == 1) {
				aFace = new Vector3(0, 0, 1);
				aPosition = new Vector3(rPosition, 0, -50f);
			}
			else if (rFace == 2) {
				aFace = new Vector3(-1, 0, 0);
				aPosition = new Vector3(50f, 0, rPosition);
			}
			else if (rFace == 3) {
				aFace = new Vector3(0, 0, -1);
				aPosition = new Vector3(rPosition, 0, 50f);
			}
			else {
				aFace = new Vector3(1, 0, 0);
				aPosition = new Vector3(-50f, 0, rPosition);
			}

			GameObject ball = (GameObject) Instantiate (Obj_Creat, aPosition, Quaternion.identity);
			ball.GetComponent<Rigidbody>().AddForce(aFace * ballSpeed);

			Destroy(ball, 2);

			Score.score += 1;
		}
		
	}
}
