using UnityEngine;
using System.Collections;

public class Cameraswitch : MonoBehaviour {
	public Camera main_camera;
	public Camera sub_camera;
	public Camera subsub_camera;
	public Camera title_camera;
	// public Camera end_camera;
	public static int titleFlg = 0;


	// Use this for initialization
	void Start () {
		title_camera.enabled = true;
		main_camera.enabled = false;
		sub_camera.enabled = false;
		subsub_camera.enabled = false;
		// end_camera.enabled = false;
	}

	// Update is called once per frame
	void Update () {
		if(titleFlg == 1){
			if (DamageScript.stageId == 0) {
				title_camera.enabled = false;
				main_camera.enabled = true;
				sub_camera.enabled = false;
				subsub_camera.enabled = false;
				// end_camera.enabled = false;
			} else if (DamageScript.stageId == 1) {
				title_camera.enabled = false;
				main_camera.enabled = false;
				sub_camera.enabled = true;
				subsub_camera.enabled = false;
				// end_camera.enabled = false;
			} else if (DamageScript.stageId == 2) {
				title_camera.enabled = false;
				main_camera.enabled = false;
				sub_camera.enabled = false;
				subsub_camera.enabled = true;
				// end_camera.enabled = false;
			}
		}
	}

	void ToStart()
	{
		Invoke("Reset", 4.5f);
	}

	void Reset()
	{
		title_camera.enabled = true;
		main_camera.enabled = false;
		sub_camera.enabled = false;
		subsub_camera.enabled = false;
		titleFlg = 0;
		DamageScript.stageId = 0;
	}
}
