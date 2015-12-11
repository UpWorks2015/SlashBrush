using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
    private Animator anim;
    bool locked = false;
    int stageId = StageCameraSwitch.cameraId - 2;
    //public static int  targetEnemy = 0;
    // public GameObject hitEffect;
    // public GameObject hitEffect2;
    // public GameObject hitEffect3;
    // public AudioClip  hitsound;
    // public AudioClip  hitsound2;
    // public AudioClip  hitsound3;
    // public AudioSource speaker;
    // public AudioSource speaker2;
    // public AudioSource speaker3;

    // GameObject AtkParticle;
    // GameObject AtkParticle2;
    // GameObject Atkparticle3;
    // float randomPosX;
    // float randomPosY;

    Slider _slider;
    float _point;
    bool deathFlg = false;

    // 自分ステータス
    float myHp;
    // 攻撃力, 防御力, スキルポイント
    float[] myStatus = {100f, 100f, 100f};

    // 敵ステータス
    string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider" };
    float enemyHp;
    float[] enemyAtk = new float[]{ 120f, 200f, 200000f};
    float[] enemyDef = new float[]{ 50f, 80f, 500000f};
    float damage = 0;

    void Start () {
        anim = GetComponent<Animator>();
        _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
        // _slider.maxValue = enemyHp[stageId];
        myHp = 1000f;
    }

    void Update () {
        _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
        enemyHp = _slider.value;
        // randomPosX = Random.Range(-1.5f,1.5f);
        // randomPosY = Random.Range(-1.5f,1.5f);
        Debug.Log("myHp => " + myHp);
        Debug.Log("enemyHp => " + enemyHp);
        // 生きている間の処理
        if(myHp > 0) {
            // Debug.Log("SendEventScript : " + SendEventScript.act);
            if(SendEventScript.actFlg){
                // Damage(SendEventScript.act,DeathFlg);
                Debug.Log(SendEventScript.act);
                if(SendEventScript.act == "Attack") {
                    damage = Damage(myStatus[0], enemyDef[stageId]);
                    enemyHp -= damage;
                    _slider.value = enemyHp;
                    // 敵が生きている間の処理
                    if(enemyHp > 0) {
                        // デバッグ用に自分を無敵にする
                        /*
                        if(Random.value >= 0.5) {
                            damage = Damage(enemyAtk[stageId], myStatus[1]);
                            myHp -= damage;
                        }
                        */
                    } else {
                        anim.SetBool("die",true);
                        Debug.Log("Enemy down!");
                        Invoke("StageChange", 4.5f);
                    }
                }
                SendEventScript.act = null;
                SendEventScript.actFlg = false;
            }
        } else {
            Debug.Log("GameOver");
        }
    }

  //public void OnMouseDown (){
		//_hp -= 20f;
		//AtkParticle = Instantiate (hitEffect, new Vector3( transform.position.x+randomPosX,transform.position.y+randomPosY, transform.position.z+1),Quaternion.identity) as GameObject;
		//Invoke ("ParticleDestroy", 0.3f);
		//speaker.PlayOneShot(hitsound);
		// エフェクト発生
		//AtkParticle2 = Instantiate (hitEffect2, new Vector3( transform.position.x+randomPosX,transform.position.y+randomPosY, transform.position.z+1),Quaternion.identity) as GameObject;
		//Invoke ("ParticleDestroy", 0.1f);
		//speaker2.PlayOneShot(hitsound2);
		// エフェクト発生 2
	//}
	public void OnMouseDown (){
      // Atkparticle3 = Instantiate (hitEffect3, new Vector3( transform.position.x,transform.position.y,transform.position.z+2),Quaternion.identity) as GameObject;
      // Invoke ("ParticleDestroy", 0.01f);
      // speaker3.PlayOneShot(hitsound3);
      //エフェクト発生 3
      enemyHp -= Damage(myStatus[0], enemyDef[stageId]);
      _slider.value = enemyHp;
      Debug.Log("Hit");
      if(enemyHp > 0) {

      } else {
          anim.SetBool("die",true);
          Invoke("StageChange", 4.5f);
      }
  }

    float Damage(float atk, float def) {
        return atk * atk / def - def;
    }

    void StageChange()
    {
        DisableCamera(StageCameraSwitch.cameraNames[StageCameraSwitch.cameraId]);
        stageId++;
        StageCameraSwitch.cameraId++;
        Debug.Log("stageId: " + stageId + ", cameraId: " + StageCameraSwitch.cameraId);
        EnableCamera(StageCameraSwitch.cameraNames[StageCameraSwitch.cameraId]);
    }

    /* func DisableCamera
    * カメラをオフにする
    * @params カメラ名
    */
    private void DisableCamera(string name) {
        Camera _camera = GameObject.Find(name).GetComponent<Camera>();
        _camera.enabled = false;
    }

    /* func EnableCamera
    * カメラをオンにする
    * @params カメラ名
    */
    private void EnableCamera(string name) {
        Camera _camera = GameObject.Find(name).GetComponent<Camera>();
        _camera.enabled = true;
    }

  //   void ParticleDestroy()
	// {
        // Destroy (AtkParticle);
  //   }
}
