using UnityEngine;
using System.Collections;

public class EnemyManager : MonoBehaviour {
	[SerializeField]
	private GameObject inu;
	[SerializeField]
	private GameObject saru;
	[SerializeField]
	private GameObject kiji;
	[SerializeField]
	private GameObject buta;
	[SerializeField]
	private GameObject kappa;
	[SerializeField]
	private GameObject goku;
	[SerializeField]
	private GameObject sanzo;
	[SerializeField]
	private GameObject kobito;
	[SerializeField]
	private GameObject kagami;
	[SerializeField]
	private GameObject mama;
	[SerializeField]
	private GameObject ouji;
	[SerializeField]
	private GameObject hime;


	public Animator inuAnimator;
	private Animator anim;

	public static string motion;
	private bool hasMotion;

	// Use this for initialization
	void Start () {
		motion = "idle";
		hasMotion = false;
		//inuAnimator = inu.GetComponent<Animator> ();
	
	}
	
	// Update is called once per frame
	void Update () {
		if (motion != "idle") {
			Debug.Log("motion:"+ motion);
			if(!hasMotion){
//				inuAnimator.SetTrigger("die");
				hasMotion = true;
				isAnimate(motion);
			}
		}
	}

	public void isAnimate(string motion ){
		switch(CameraManager.cameraId){
		case 2:
			Debug.Log("InuDie");
			inuAnimator.SetTrigger("die");
			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:
			
			break;
		case 9:
			
			break;
		case 10:
			
			break;
		}
		motion = "idle";
		hasMotion = false;
	}
}
