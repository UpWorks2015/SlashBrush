using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
    private Animator anim;
    bool locked = false;

	int camId = CameraManager.cameraId;
	public static int stageId = 0;
	public static bool isHighatk = false;

    Slider _slider;
    float _point;
    bool deathFlg = false;
    bool changeFlg = false;

    // 自分ステータス
	public static float myHp;
    float ACT_POINT_MAX = 1000f;
	public static float actPoint;
    public float actPointRequire;
    // 攻撃力, 防御力, スキルポイント
    float[] myStatus = {100f, 100f, 100f};

    // 敵ステータス
    string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider", "ButaSlider", "GokuSlider", "sanzouSlider", "KobitoSlider", "MamaSlider", "OujiSlider"};
    float enemyHp;
    float[] enemyAtk = new float[]{ 30f, 40f, 50f, 60f, 70f, 100f, 180f, 260f, 1000f};
    float[] enemyDef = new float[]{ 50f, 80f, 90f, 100f, 140f, 180f, 220f, 260f, 430f};
	public static float[] atkRoutine = new float[]{ 5f, 7f, 10f, 6f ,7f, 15f, 3f, 8f, 10f};
	float[] highDamageRate = new float[]{ 2f, 2.5f, 5f, 2.2f, 2.5f, 7f, 1.5f, 2.7f, 5f};
    float[] enemySkillPoints = new float[]{ 600f, 20f, 10f, 130f, 99f, 109f, 120f, 800f, 3000f};

    // スコア
    float myScore = 0;
    float enemyScore = 0;
    float myDefRate = 1;
    float enemyDefRate = 1;

    void Init() {
        myHp = 2500f;
		actPoint = ACT_POINT_MAX;
        myHp = 2500f;
		actPoint = 1000f;
        camId = CameraManager.cameraId;
        stageId = camId - 2;
        foreach(var x in enemy) {
            _slider = GameObject.Find(x).GetComponent<Slider>();
            _slider.value = _slider.maxValue;
        }
//        Debug.Log(System.DateTime.Now + " Init()");
    }

    void Start () {
        anim = GetComponent<Animator>();
        _slider = GameObject.Find(enemy[0]).GetComponent<Slider>();
        myHp = 2500f;
		actPoint = ACT_POINT_MAX;
        enemyHp = _slider.value;
        actPointRequire = 0;
    }

    void Update () {
        camId = CameraManager.cameraId;
        stageId = camId - 2;
        Debug.Log("camId : " + camId + ", stageId : " + stageId);
        if (camId == 0) Init();
        if (camId >= 2 && camId < 12) {
            _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
//            Debug.Log("敵 :" + _slider.name + ", myScore : " + myScore + ", myHp : " + myHp + ", myStatus : " + myStatus[0] + " " + myStatus[1]);
            enemyHp = _slider.value;
            // randomPosX = Random.Range(-1.5f,1.5f);
            // randomPosY = Random.Range(-1.5f,1.5f);
            // 生きている間の処理
            if(myHp > 0) {
//                Debug.Log(System.DateTime.Now + "actPoint " + actPoint);
                myScore = 0;
                enemyScore = 0;
                myDefRate = 1;
                enemyDefRate = 1;
                actPointRequire = 0;
#if !DEBUG_MODE
                if(SendEventScript.actFlg){
                    actPointRequire = 5f;
                    // Damage(SendEventScript.act,DeathFlg);
                    //----------------------- コマンド処理 ------------------------//
                    switch(SendEventScript.act)
                    {
                        case "Attack":
                            actPointRequire += 15f;
                            if(actPoint > actPointRequire) {
                                myScore = Damage(myStatus[0], enemyDef[stageId]);
                                if (myScore <= 0) myScore = 2;
                            }
    						break;
                        case "Defence":
                            actPointRequire += 5f;
                            if(actPoint > actPointRequire) {
                                myDefRate = getDefRate(myStatus[1], enemyDef[stageId]);
                            }
    						break;
                        case "Magic":
                            actPointRequire += 500f;
                            if(actPoint > actPointRequire) {
                                myScore = myStatus[2] - enemySkillPoints[stageId];
                                myHp += 1000f;
                                myHp = Mathf.Min(1000f, myHp);
                            }
    						break;
                    }
                    actPoint -= actPointRequire;
                    actPointRequire = 0;
                    SendEventScript.act = null;
                    SendEventScript.actFlg = false;
                }
#else
				if(DebugManager.debugActflg){
                    actPointRequire = 5f;
					Debug.Log(System.DateTime.Now + DebugManager.debugAct);
					//----------------------- コマンド処理 ------------------------//
					switch(DebugManager.debugAct)
					{
					case "Attack":
                        actPointRequire += 15f;
                        if(actPoint > actPointRequire) {
                            myScore = Damage(myStatus[0], enemyDef[stageId]);
                            if (myScore <= 0) myScore = 2;
                        }
						break;
					case "Defence":
                        actPointRequire += 5f;
                        if(actPoint > actPointRequire) {
                            myDefRate = getDefRate(myStatus[1], enemyDef[stageId]);
                        }
						break;
					case "Magic":
                        actPointRequire += 500f;
                        if(actPoint > actPointRequire) {
                            myScore = myStatus[2] - enemySkillPoints[stageId];
                            myHp += 1000f;
                            myHp = Mathf.Min(1000f, myHp);
                        }
						break;
					}
                    actPoint -= actPointRequire;
                    actPointRequire = 0;
					DebugManager.debugAct = null;
					DebugManager.debugActflg = false;
				}

#endif
                //----------------- 敵行動ロジック --------------------//
                if(enemyHp > 0) {
					if(isHighatk){
						isHighatk = false;
						Debug.Log("HighAtk");
                        enemyScore = Damage(enemyAtk[stageId], myStatus[1]);
						enemyScore = enemyScore + Mathf.Abs(enemyScore * highDamageRate[stageId]);
					}
                    if(Random.Range(0.0f, 1.0f) >= 0.995) {
                        enemyScore =  Damage(enemyAtk[stageId], myStatus[1]);
                        Debug.Log("敵の攻撃 enemyScore : " + enemyScore);
                    }
                    //-------------------- ダメージ計算 ----------------------//
                    StartCoroutine(HpDown());
                } else {
                    if(!deathFlg){
                        deathFlg = true;
//                        anim.SetBool("die",true);
						anim.SetTrigger("die");
                        Debug.Log("Enemy down!");
                        StartCoroutine(isStageChange());
                    }
                }
                if(actPoint < ACT_POINT_MAX) {
					StartCoroutine("ActBarDown");
                } else {
					StopCoroutine("ActBarDown");
                }
            } else {
                CameraManager.cameraId = 12;
            }
        }
    }

    public void OnMouseDown (){
        if(enemyHp > 0) {

            myScore = Damage(myStatus[0], enemyDef[stageId]);
            if (myScore <= 0) myScore = 2;
            enemyHp -= myScore / enemyDefRate;
            _slider.value = enemyHp;
        } else {
            Debug.Log(System.DateTime.Now + " オーバーキル");
        }
    }

    float Damage(float atk, float def) {
        float rate = Random.Range(0.9f, 1.1f);
        if(Random.Range(0, 101) <= 5 ) {
            rate = 1.5f;
            Debug.Log(System.DateTime.Now + "Critical Hit!!!!!!");
        }
        return (atk * atk / def - def) * (1.0f + Random.value) * rate;
    }

    float getDefRate(float myDef, float enemyAtk) {
        return Mathf.Abs(myDef / enemyAtk);
    }

    IEnumerator isStageChange()
    {
        if(!changeFlg && camId != 11) {
            changeFlg = true;
            yield return new WaitForSeconds(3.0f);
            deathFlg = false;
            changeFlg = false;
            stageId++;
            camId++;
            CameraManager.cameraId = camId;
            enemyHp = _slider.value;
            myStatus[0] = myStatus[0] * Random.Range(0.98f, 1.25f);
            myStatus[1] = myStatus[1] * Random.Range(0.98f, 1.25f);
            Debug.Log(System.DateTime.Now + " camId =>" + CameraManager.cameraId + ", stageId => " + stageId);
        }
    }

    IEnumerator HpDown() {
      float myDamage = enemyScore / myDefRate;
      if(actPointRequire > actPoint) {
          myScore = 0;
          myDefRate = 1;
      } else {
          actPoint -= actPointRequire;
      }
      if(myDamage > 0) {
          myHp -= myDamage;
      } else if(enemyScore < 0) {
          myHp -= Random.Range(0, 5);
      }
      Debug.Log(System.DateTime.Now + " : damaged => " + enemyScore / myDefRate);
      enemyHp -= (myScore / enemyDefRate);
      _slider.value = enemyHp;
      yield return null;
      Debug.Log("myHp " + myHp);
    }

    IEnumerator ActBarDown() {
        // yield return new WaitForSeconds(2.0f);
//        actPoint += 0.2f;
        yield return null;
    }
}
