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
    bool changeFlg = false;

    // 自分ステータス
    float myHp;
    // 攻撃力, 防御力, スキルポイント
    float[] myStatus = {100f, 100f, 100f};

    // 敵ステータス
    string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider", "ButaSlider", "songokuSlider", "sanzouSlider", "KobitoSlider", "MaMaSlider", "OujiSlider"};
    float enemyHp;
    float[] enemyAtk = new float[]{ 30f, 40f, 50f, 60f, 70f, 100f, 180f, 260f, 1000f};
    float[] enemyDef = new float[]{ 50f, 80f, 90f, 100f, 140f, 180f, 220f, 260f, 430f};

    /* スコア */
    float myScore = 0;
    float enemyScore = 0;
    float myDefRate = 1;
    float enemyDefRate = 1;

    void Start () {
        anim = GetComponent<Animator>();
        _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
        myHp = 1000f;
        enemyHp = _slider.value;
    }

    void Update () {
        camId = CameraManager.cameraId;
        Debug.Log("camId : " + camId + ", stageId : " + stageId);
        if (CameraManager.cameraId >= 2) {
            _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
            Debug.Log("敵 :" + _slider.name + ", myScore : " + myScore + ", myHp : " + myHp);
            enemyHp = _slider.value;
            // randomPosX = Random.Range(-1.5f,1.5f);
            // randomPosY = Random.Range(-1.5f,1.5f);
            // Debug.Log("myHp => " + myHp + ", enemyHp => " + enemyHp);
            // 生きている間の処理
            if(myHp > 0) {
                myScore = 0;
                enemyScore = 0;
                myDefRate = 1;
                enemyDefRate = 1;
                if(SendEventScript.actFlg){
                    // Damage(SendEventScript.act,DeathFlg);
                    //----------------------- コマンド処理 ------------------------//
                    switch(SendEventScript.act)
                    {
                        case "Attack":
                            myScore = Damage(myStatus[0], enemyDef[stageId]);
                            break;
                        case "Defence":
                            myDefRate = getDefRate(myStatus[1], enemyDef[stageId]);
                            break;
                        case "Magic":
                            myScore = myStatus[2];
                            break;
                    }
                    SendEventScript.act = null;
                    SendEventScript.actFlg = false;
                }
                //----------------- 敵行動ロジック --------------------//
                if(enemyHp > 0) {
                    if(Random.value >= 0.995) {
                        enemyScore =  Damage(enemyAtk[stageId], myStatus[1]);
                    }
                    //-------------------- ダメージ計算 ----------------------//
                    myHp -= enemyScore / myDefRate;
                    enemyHp -= myScore / enemyDefRate;
                    _slider.value = enemyHp;
                } else {
                    if(!deathFlg){
                        deathFlg = true;
                        anim.SetBool("die",true);
                        Debug.Log("Enemy down!");
                        StartCoroutine(isStageChange());
                    }
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
            Debug.Log("オーバーキル");
        }
    }

    float Damage(float atk, float def) {
        return atk * atk / def - def;
    }

    float getDefRate(float myDef, float enemyAtk) {
        return myDef / enemyAtk;
    }

    IEnumerator isStageChange()
    {
        if(!changeFlg) {
            changeFlg = true;
            yield return new WaitForSeconds(3.0f);
            deathFlg = false;
            changeFlg = false;
            stageId++;
            camId++;
            CameraManager.cameraId = camId;
            enemyHp = _slider.value;
            myStatus[0] = myStatus[0] + 200;
            myStatus[1] = myStatus[1] + 200;
            Debug.Log("camId =>" + CameraManager.cameraId + ", stageId => " + stageId);
        }
    }
}
