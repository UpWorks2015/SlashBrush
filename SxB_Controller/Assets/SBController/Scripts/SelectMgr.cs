using UnityEngine;
using System.Collections;
 
public class SelectMgr : MonoBehaviour {
 
	void Update () {
		if (Input.GetMouseButtonDown (0)){
			Application.LoadLevel ("SS1");
		}
	}
}