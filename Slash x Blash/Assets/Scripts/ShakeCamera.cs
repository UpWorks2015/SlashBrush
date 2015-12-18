using UnityEngine;
using System.Collections;

public class ShakeCamera : MonoBehaviour {
	public float setShakeTIme; // 持続振動時間
	
	private float lifeTime;
	private Vector3 savePosition;
	private float lowRangeX;
	private float maxRangeX;
	private float lowRangeY; 
	private float maxRangeY;


	public static bool isDamaged = false;
	
	void CatchShake( ) {
		savePosition = transform.position;
		lowRangeY = savePosition.y - 0.2f;
		maxRangeY = savePosition.y + 0.2f;
		lowRangeX = savePosition.x - 0.2f;
		maxRangeX = savePosition.x + 0.2f;
		lifeTime = setShakeTIme;
	}
	void Start () {
		if(setShakeTIme <= 0.0f)
			setShakeTIme = 0.2f;
		lifeTime = 0.0f;
	}	
	
	void Update () {
		Debug.Log (lifeTime);
		if(lifeTime < 0.0f){
			transform.position = savePosition;
			lifeTime = 0.0f;
		}
		if(lifeTime > 0.0f){
			isDamaged = false;
			Debug.Log("Shake");
			lifeTime -= Time.deltaTime;
			float x_val = Random.Range(lowRangeX,maxRangeX);
			float y_val = Random.Range(lowRangeY,maxRangeY);
			transform.position = new Vector3(x_val,y_val,transform.position.z);
		}

		if (CameraManager.cameraId >= 2 && CameraManager.cameraId < 11) {
			if (isDamaged) {
				lifeTime = 0.2f;
				CatchShake();
			}
		}
	}
}