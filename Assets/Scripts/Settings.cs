using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Settings : MonoBehaviour {

	public static bool isPause;
	public GameObject settingsPanel;
	public GameObject bgmSlider;
	public GameObject soundSlider;

	// Use this for initialization
	void Start () {
		isPause = false;
		settingsPanel.SetActive(isPause);


		if (!PlayerPrefs.HasKey("bgmVolume")) {
			PlayerPrefs.SetFloat("bgmVolume", 0.5f);
		}
		if (!PlayerPrefs.HasKey("soundVolume")) {
			PlayerPrefs.SetFloat("soundVolume", 1.0f);
		}

		if (bgmSlider && soundSlider) {
			bgmSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("bgmVolume");
			soundSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("soundVolume");
		} 
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
		isPause = false;
		Time.timeScale = 1.0F;
		Application.LoadLevel("MainMenu");
	}

	public void Retry() {
		isPause = false;
		Time.timeScale = 1.0F;
		Application.LoadLevel(Application.loadedLevel);
	}

	public void OnBgMusicChange(float value) {
		GameObject bg = GameObject.Find("Main Camera");
		if (bg && bg.GetComponent<AudioSource>()) {
			bg.GetComponent<AudioSource>().volume = value;
		}
		PlayerPrefs.SetFloat("bgmVolume", value);
	}

	public void OnSoundChange(float value) {
		GameObject player = GameObject.Find("Player");
		if (player && player.GetComponent<AudioSource>()) {
			player.GetComponent<AudioSource>().volume = value;
		}
		PlayerPrefs.SetFloat("soundVolume", value);
	}

	public void togglePanel() {
		settingsPanel.SetActive(!settingsPanel.activeSelf);
	}
}

