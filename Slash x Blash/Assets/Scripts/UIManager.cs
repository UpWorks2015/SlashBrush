using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {
	public AudioClip attack;
	public AudioClip ko;
	public AudioSource audio;

	public Canvas GameUI;
	public Image hpbar;
	public Image pointbar;
	public Image enemybar;
	public Image UIeffect;
	

	private Animator _animHpbar;
	private Animator _animPointbar;
	private Animator _animEffect;
	
	private bool isSetAll;
	private bool isReset;

	private float maxHp;
	private float maxPoint;
	private float time;
	private float atkTime;

	private bool isEnemydown;

	// Use this for initialization
	void Start () {
		isSetAll = false;
		isReset = true;
		isEnemydown = false;

		_animHpbar = hpbar.GetComponent<Animator>();
		_animPointbar = pointbar.GetComponent<Animator>();
		_animHpbar = hpbar.GetComponent<Animator>();
		_animEffect = UIeffect.GetComponent<Animator> ();
		
		atkTime = DamageScript.atkRoutine[0];
		maxHp = DamageScript.myHp;
		maxPoint = DamageScript.actPoint;
		GameUI.enabled = false;

	}
	
	// Update is called once per frame
	void Update () {


		if (CameraManager.cameraId >= 2 && CameraManager.cameraId < 11) {

			if(!isSetAll){
				maxHp = DamageScript.myHp;
				maxPoint = DamageScript.actPoint;
				isSetAll = true;
				isReset = false;
				StartCoroutine(isSetFinish());
				_animHpbar.SetBool("isSetup",true);
				_animPointbar.SetBool("isSetup",true);
			}



			atkTime = DamageScript.atkRoutine[CameraManager.cameraId-2];
			if(DamageScript.enemyHp > 0){
				isEnemydown = false;
				time += Time.deltaTime;
				enemybar.fillAmount = time/atkTime;
				if (time >= atkTime) {
					audio.clip = attack;
					audio.Play ();
					Debug.Log("enemyAtk!!!!!");
					DamageScript.isHighatk = true;
					ShakeCamera.isDamaged = true;
					_animEffect.SetTrigger("isDamaged");
					time = 0;
				}
			}else{
				time = 0;
				if(!isEnemydown){
					isEnemydown = true;
					StartCoroutine(isDown());
				}
				
			}


			hpbar.fillAmount =  DamageScript.myHp / maxHp;
			Debug.Log(DamageScript.myHp + "/" + maxHp);

			pointbar.fillAmount = DamageScript.actPoint / maxPoint;



			GameUI.enabled = true;
		}else {
			if(!isReset){
				isReset = true;
				isSetAll = false;
				isEnemydown = false;
				GameUI.enabled = false;
				Debug.Log ("Reset");
			}
		}
	}
	IEnumerator isDown(){
		yield return new WaitForSeconds (2.8f);
		audio.clip = ko;
		audio.Play ();
	}


	IEnumerator isSetFinish(){
		yield return new WaitForSeconds (1.2f);
		_animHpbar.enabled = false;
		_animPointbar.enabled = false;
		_animHpbar.SetBool("isSetup",false);
		_animPointbar.SetBool("isSetup",false);
	}
}
