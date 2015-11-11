using UnityEngine;
using System.Collections;
 
public class stage1 : MonoBehaviour {
 
	void Update () {
		if (Input.GetMouseButtonDown (0)){
			Application.LoadLevel ("stageselect1");
		}
	}
}