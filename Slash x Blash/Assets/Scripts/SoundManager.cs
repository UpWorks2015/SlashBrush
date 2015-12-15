using UnityEngine;
using System.Collections;

public class SoundManager : MonoBehaviour {
	public AudioClip  titleBGM;
	public AudioClip battleBGM;
	public AudioClip japaneseBGM;
	public AudioSource audioSource;
	private int soundId;
	private bool isPlay = false;

	// Use this for initialization
	void Start ()  {
		soundId = CameraManager.cameraId;
		Debug.Log (CameraManager.cameraId);
		audioSource.clip = titleBGM;
		audioSource.Play ();
	}

	void Update() {
		Debug.Log ("soundId:"+soundId);
		if (CameraManager.cameraId >= soundId) {
			if(!isPlay){
				isPlay = true;
				isSoundChange();
				soundId++;
				Debug.Log("SoundChange");
			}
		}
	}

	 void  isSoundChange (){
		switch(CameraManager.cameraId){
		case 0:
			audioSource.clip = titleBGM;
			audioSource.Play ();
			break;
		case 2:
			audioSource.clip = japaneseBGM;
			audioSource.Play ();
			break;
		case 5:
			audioSource.clip = japaneseBGM;
			audioSource.Play ();
			break;
		case 8:
			audioSource.clip = battleBGM;
			audioSource.Play ();
			break;
		case 11:
			Debug.Log("11");
			Initialize();
			break;
		case 12:
			Debug.Log("12");
			Initialize();
			break;
		}
		isPlay = false;
	}

	void Initialize(){
		soundId = 0;
		audioSource.clip = titleBGM;
		audioSource.Play ();
	}
}