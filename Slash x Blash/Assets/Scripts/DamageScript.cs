using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
    private Animator anim;
    bool locked = false;
	int camId = CameraManager.cameraId;
	int stageId = CameraManager.cameraId - 2;


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

    /* スコア */
    float myScore = 0;
    float enemyScore = 0;
    float myDefRate = 1;
    float enemyDefRate = 1;

    void Start () {
        anim = GetComponent<Animator>();
        _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
        // _slider.maxValue = enemyHp[stageId];
        myHp = 1000f;
    }

    void Update () {
        _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
        enemyHp = _slider.value;
        myScore = 0;
        enemyScore = 0;
        myDefRate = 1;
        enemyDefRate = 1;

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
                //----------------------- コマンド処理 ------------------------//
                switch(SendEventScript.act)
                {
                    case "Attack":
                        myScore = Damage(myStatus[0], enemyDef[stageId]);
                        break;
                    case "Defence":
                        Debug.Log("Using Defence Command");
                        myDefRate = getDefRate(myStatus[1], enemyDef[stageId]);
                        break;
                    case "Magic":
                        Debug.Log("Using Magic Command");
                        break;
                }
                SendEventScript.act = null;
                SendEventScript.actFlg = false;
            }
            //----------------- 敵行動ロジック --------------------//
            if(enemyHp > 0) {
                if(Random.value >= 0.995) {
                    Debug.Log("敵の攻撃");
                    enemyScore =  Damage(enemyAtk[stageId], myStatus[1]);
                }
            } else {
                anim.SetBool("die",true);
                Debug.Log("Enemy down!");
                Invoke("StageChange", 4.5f);
            }
            //-------------------- ダメージ計算 ----------------------//
            myHp -= (enemyScore / myDefRate);
            Debug.Log(enemyScore / myDefRate);
            enemyHp -= myScore / enemyDefRate;
            _slider.value = enemyHp;
        } else {
            Debug.Log("GameOver");
        }
    }

    public void OnMouseDown (){
        myScore = Damage(myStatus[0], enemyDef[stageId]);
        enemyHp -= myScore / enemyDefRate;
        _slider.value = enemyHp;
        if(enemyHp > 0) {

        } else {
            anim.SetBool("die",true);
            Invoke("StageChange", 4.5f);
        }
    }

    float Damage(float atk, float def) {
        return atk * atk / def - def;
    }

    float getDefRate(float myDef, float enemyAtk) {
        return myDef / enemyAtk;
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
