using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

	public static int score;
	public Text scoreText;

	public static float gameTime;

	// Use this for initialization
	void Start () {
		score = 0;
		gameTime = Time.time;
	}
	
	// Update is called once per frame
	void Update () {
		scoreText.text = "Score: " + score.ToString();
	}
}
