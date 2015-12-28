using UnityEngine;
using System.Collections;

public class LoadingProgress : MonoBehaviour {

	public AsyncOperation async;
	public float oy;
	public float oz;

	IEnumerator Start() {
		oy = transform.position.y;
		oz = transform.position.z;

        async = Application.LoadLevelAsync("Scene");
        yield return async;
        Debug.Log("Loading complete");
    }

	// Update is called once per frame
	void Update () {
		if (async != null) {
			transform.position = new Vector3(-5f + 10 * async.progress, oy, oz);
		}
	}
}
