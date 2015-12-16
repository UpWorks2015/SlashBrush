using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {
	public Canvas GameUI;
	public Image hpBar;
	public Image actionPoint;
	public Image enemyAtk;

	// Use this for initialization
	void Start () {

		 GameUI.enabled = false;
	
	}
	
	// Update is called once per frame
	void Update () {

		if (CameraManager.cameraId >= 2 && CameraManager.cameraId < 11) {
			GameUI.enabled = true;
		} else {
			GameUI.enabled = false;
		}
	}
}
