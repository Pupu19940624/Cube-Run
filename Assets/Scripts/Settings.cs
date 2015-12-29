using UnityEngine;
using System.Collections;

public class Settings : MonoBehaviour {

	public static bool isPause;
	public GameObject settingsPanel;

	// Use this for initialization
	void Start () {
		isPause = false;
		settingsPanel.SetActive(isPause);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Pause() {
		Time.timeScale = isPause ? 1.0F : 0.0F;
		isPause = !isPause;
		settingsPanel.SetActive(isPause);
	}

	public void MainMenu() {
		Application.LoadLevel("MainMenu");
	}

	public void Retry() {
		isPause = false;
		Time.timeScale = 1.0F;
		Application.LoadLevel(Application.loadedLevel);
	}

	public void OnBgMusicChange(float value) {
		AudioSource bg = GameObject.Find("Main Camera").GetComponent<AudioSource>();
		bg.volume = value;
	}

	public void OnSoundChange(float value) {
		AudioSource player = GameObject.Find("Player").GetComponent<AudioSource>();
		player.volume = value;
	}

	public void togglePanel() {
		settingsPanel.SetActive(!settingsPanel.activeSelf);
	}
}

