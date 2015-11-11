using UnityEngine;
using System.Collections;

public class CameraChange : MonoBehaviour {
	public Camera TopCamera;
	public Camera MainCamera;
	bool cameraFlg = true;

	// Use this for initialization
	void Start () {
		TopCamera.enabled = true;
		MainCamera.enabled = false;
	}

	// Update is called once per frame
	void Update () {
		/*
		if (Input.GetMouseButtonDown(0)) {
			cameraFlg = false;
			//Debug.Log("Click");
		}
		*/

		if(NetworkViewMgr1.Connected == true){
			//Debug.Log("Change");
			TopCamera.enabled = false;
			MainCamera.enabled = true;
		}
		if(NetworkViewMgr1.Connected == false){
			//Debug.Log("Change");
			TopCamera.enabled = true;
			MainCamera.enabled = false;
		}
	}
}
