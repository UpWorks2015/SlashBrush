using UnityEngine;
using System.Collections;

public class CameraManager : MonoBehaviour {

	public static int CameraId = 0;
	public  Camera TitleCam;
	public  Camera StageSelectCam;
	public  Camera Inu1Cam;
	public  Camera Momo2Cam;
	public  Camera Baba3Cam;
	public  Camera Buta1Cam;
	public  Camera Goku2Cam;
	public  Camera Sanzo3Cam;
	public  Camera Kobito1Cam;
	public  Camera Mama2Cam;
	public  Camera Ouji3Cam;
	public  Camera ClearCam;
	public  Camera GameOverCam;


	// Use this for initialization
	void Start () {
		TitleCam.enabled = false;
		StageSelectCam.enabled = false;
		Inu1Cam.enabled = true;
		Momo2Cam.enabled = false;
		Baba3Cam.enabled = false;
		Buta1Cam.enabled = false;
		Goku2Cam.enabled = false;
		Sanzo3Cam.enabled = false;
		Kobito1Cam.enabled = false;
		Mama2Cam.enabled = false;
		Ouji3Cam.enabled = false;
		ClearCam.enabled = false;
		GameOverCam.enabled = false;
	}
	
	// Update is called once per frame
	void Update (){
		if (CameraId == 1) {
			TitleCam.enabled = false;
			StageSelectCam.enabled = false;
			Inu1Cam.enabled = false;
			Momo2Cam.enabled = true;
			Baba3Cam.enabled = false;
			Buta1Cam.enabled = false;
			Goku2Cam.enabled = false;
			Sanzo3Cam.enabled = false;
			Kobito1Cam.enabled = false;
			Mama2Cam.enabled = false;
			Ouji3Cam.enabled = false;
			ClearCam.enabled = false;
			GameOverCam.enabled = false;

		} else if (CameraId == 2) {
			TitleCam.enabled = false;
			StageSelectCam.enabled = false;
			Inu1Cam.enabled = false;
			Momo2Cam.enabled = false;
			Baba3Cam.enabled = true;
			Buta1Cam.enabled = false;
			Goku2Cam.enabled = false;
			Sanzo3Cam.enabled = false;
			Kobito1Cam.enabled = false;
			Mama2Cam.enabled = false;
			Ouji3Cam.enabled = false;
			ClearCam.enabled = false;
			GameOverCam.enabled = false;
			
		} else if (CameraId == 11) {
			TitleCam.enabled = false;
			StageSelectCam.enabled = false;
			Inu1Cam.enabled = false;
			Momo2Cam.enabled = false;
			Baba3Cam.enabled = false;
			Buta1Cam.enabled = false;
			Goku2Cam.enabled = false;
			Sanzo3Cam.enabled = false;
			Kobito1Cam.enabled = false;
			Mama2Cam.enabled = false;
			Ouji3Cam.enabled = false;
			ClearCam.enabled = true;
			GameOverCam.enabled = false;
		}
	}
}