﻿using UnityEngine;
using System.Collections;

public class MenuButton : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PlayGame() {
		Application.LoadLevel("Loading");
	}

	public void QuitGame() {
		Application.Quit();
	}
}
