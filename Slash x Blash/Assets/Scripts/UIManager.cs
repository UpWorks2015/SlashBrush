using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {
	public Canvas GameUI;
	public Image hpbar;
	public Image pointbar;
	public Image enemybar;
	
	private Animator _animHpbar;
	private Animator _animPointbar;

	private bool isSetAll;
	private bool isReset;
	
	float time;
	float atkTime;

	// Use this for initialization
	void Start () {
		isSetAll = false;
		isReset = true;

		_animHpbar = hpbar.GetComponent<Animator>();
		_animPointbar = pointbar.GetComponent<Animator>();
		_animHpbar = hpbar.GetComponent<Animator>();

		atkTime = 10f;
		GameUI.enabled = false;
	
	}
	
	// Update is called once per frame
	void Update () {

		time += Time.deltaTime;
		enemybar.fillAmount = time/atkTime;
		if (time >= atkTime) {
			Debug.Log("enemyAtk!!!!!");
			time = 0;
		}

		if (CameraManager.cameraId >= 2 && CameraManager.cameraId < 11) {
			if(!isSetAll){
				isSetAll = true;
				isReset = false;
				StartCoroutine(isSetFinish());
				_animHpbar.SetBool("isSetup",true);
				_animPointbar.SetBool("isSetup",true);
			}
			GameUI.enabled = true;
		} else {
			if(!isReset){
				isReset = true;
				isSetAll = false;
				GameUI.enabled = false;
				Debug.Log ("Reset");
			}
		}
	}
	

	IEnumerator isSetFinish(){
		yield return new WaitForSeconds (1.2f);
		_animHpbar.enabled = false;
		_animPointbar.enabled = false;
		_animHpbar.SetBool("isSetup",false);
		_animPointbar.SetBool("isSetup",false);
	}
}
