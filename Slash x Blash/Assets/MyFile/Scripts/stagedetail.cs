using UnityEngine;
using System.Collections;

public class stagedetail : MonoBehaviour {


	void Update () {
		if(TitleMgr.tcamId == 2){
			if (Input.GetMouseButtonDown (0)){
                StageCameraSwitch.cameraId = 0;
				Debug.Log("stage");
			}
		}
	}
}
