using UnityEngine;
using System.Collections;

public class TitleCameraSwitch : MonoBehaviour {
	public Camera title_camera;
	public Camera stageselect_camera;
	public Camera stagedetail_camera;

	// Use this for initialization
	void Start () {
		title_camera.enabled = true;
		stageselect_camera.enabled = false;
		stagedetail_camera.enabled = false;
	}

	// Update is called once per frame
	void Update () {
		if(TitleMgr.sceneId == 0){
			if (TitleMgr.tcamId == 0) {
				title_camera.enabled = true;
				stageselect_camera.enabled = false;
				stagedetail_camera.enabled = false;
			} 
			else if (TitleMgr.tcamId == 1) {
				title_camera.enabled = false;
				stageselect_camera.enabled = true;
				stagedetail_camera.enabled = false;
			}
			else if (TitleMgr.tcamId == 2) {
				title_camera.enabled = false;
				stageselect_camera.enabled = false;
				stagedetail_camera.enabled = true;
			}
		}
	}
}
