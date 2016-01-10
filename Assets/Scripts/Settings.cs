using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Settings : MonoBehaviour {

	public static bool isPause;
	public GameObject settingsPanel;
	public GameObject bgmSlider;
	public GameObject soundSlider;
	public Text highScore;
	public Button PauseButton;
	public AudioSource audio;

	// Use this for initialization
	void Start () {
		isPause = false;
		settingsPanel.SetActive(isPause);
		Time.timeScale = 1.0F;
		if (PauseButton) {
			PauseButton.interactable = true;
		}


		if (!PlayerPrefs.HasKey("bgmVolume")) {
			PlayerPrefs.SetFloat("bgmVolume", 0.5f);
		}
		if (!PlayerPrefs.HasKey("soundVolume")) {
			PlayerPrefs.SetFloat("soundVolume", 1.0f);
		}
		if (!PlayerPrefs.HasKey("highScore")) {
			PlayerPrefs.SetInt("highScore", 1);
		}

		if (bgmSlider && soundSlider) {
			bgmSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("bgmVolume");
			soundSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("soundVolume");
		} 
		if (highScore) {
			highScore.text = "High Score: " + PlayerPrefs.GetInt("highScore");
		}

		audio = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void Click() {
		if (audio) {
			audio.Play();
		}
	}

	public void Pause() {
		Click();
		Time.timeScale = isPause ? 1.0F : 0.0F;
		isPause = !isPause;
		settingsPanel.SetActive(isPause);
	}

	public void MainMenu() {
		Click();
		isPause = false;
		Time.timeScale = 1.0F;
		Application.LoadLevel("MainMenu");
	}

	public void Retry() {
		Click();
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
		Click();
		settingsPanel.SetActive(!settingsPanel.activeSelf);
	}
}

