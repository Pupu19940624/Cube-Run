using UnityEngine;
using System.Collections;

[RequireComponent(typeof(AudioSource))]
public class PlayAudio : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
        // audio.Play(44100);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void Play() {
		AudioSource audio = GetComponent<AudioSource>();
        audio.Play();
	}
}
