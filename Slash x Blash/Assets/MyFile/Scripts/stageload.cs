using UnityEngine;
using System.Collections;
 
public class stageload : MonoBehaviour {


 
	void Update () {
		if(TitleMgr.tcamId == 2){
			if (Input.GetMouseButtonDown (0)){
				Application.LoadLevel ("stage");
				TitleMgr.sceneId = 1;
				Debug.Log("load");
			}
		}
	}
}
