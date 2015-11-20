using UnityEngine;
using System.Collections;

public class TitleMgr : MonoBehaviour {

	public static int tcamId = 0;
	public static int sceneId = 0;


	void Update(){
		if(tcamId == 0){
			if(Input.GetMouseButtonDown (0)){
				tcamId = 1;
				Debug.Log("stageselect");
			}
		}	
	}
}