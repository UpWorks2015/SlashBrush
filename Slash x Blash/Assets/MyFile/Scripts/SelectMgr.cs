using UnityEngine;
using System.Collections;

public class SelectMgr : MonoBehaviour {

	void Update(){
		if(TitleMgr.tcamId == 1){
			if(Input.GetMouseButtonDown (0)){
				TitleMgr.tcamId = 2;
				Debug.Log("detail");
			}
		}
	}
}