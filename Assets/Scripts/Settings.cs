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
		if (isPause) {
			Time.timeScale = 1.0F;
		}
		else {
			Time.timeScale = 0.0F;
		}
		isPause = !isPause;

		settingsPanel.SetActive(isPause);
	}
}
