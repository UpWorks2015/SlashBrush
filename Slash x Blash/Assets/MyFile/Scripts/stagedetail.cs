using UnityEngine;
using System.Collections;
 
public class stagedetail : MonoBehaviour {

 
	void Update () {
		if(TitleMgr.tcamId == 2){
			if (Input.GetMouseButtonDown (0)){
				DamageScript.stageId = 0;
				Debug.Log("stage");
			}
		}
	}
}