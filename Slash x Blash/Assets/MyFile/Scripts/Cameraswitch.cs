using UnityEngine;
using System.Collections;

public class Cameraswitch : MonoBehaviour {
	public Camera main_camera;
	public Camera sub_camera;
	public Camera subsub_camera;

	// Use this for initialization
	void Start () {
		main_camera.enabled = true;
		sub_camera.enabled = false;
		subsub_camera.enabled = false;
	}

	// Update is called once per frame
	void Update () {
		if (DamageScript.stageId == 0) {
			main_camera.enabled = true;
			sub_camera.enabled = false;
			subsub_camera.enabled = false;
		} else if (DamageScript.stageId == 1) {
			main_camera.enabled = false;
			sub_camera.enabled = true;
			subsub_camera.enabled = false;
		} else if (DamageScript.stageId == 2) {
			main_camera.enabled = false;
			sub_camera.enabled = false;
			subsub_camera.enabled = true;
		}
	}
}
