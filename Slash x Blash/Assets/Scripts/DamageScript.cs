using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
  private Animator anim;
  public static int stageId = 0;
  public static bool locked = false; // ロック処理に使うフラグ
  Slider _slider;
  public static float _point;
  public static bool DeathFlg = false;

  // 自分ステータス
  float myHp;
  // ATK, DEF, SP
  float[] myStatus = { 100f, 100f, 100f };

  // 敵ステータス
  string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider" };
  float[] enemyHp = new float[]{ 5000f, 8000f, 12500f};
  float[] enemyAtk = new float[]{ 120f, 200f, 200000f};
  float[] enemyDef = new float[]{ 50f, 80f, 500000f};
  float damage = 0;

  void Start () {
    anim = GetComponent<Animator>();
    _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
    myHp = 1000f;
  }

  //float _hp = 100;
  void Update () {
  //敵を倒した後の
    _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
    _slider.maxValue = enemyHp[stageId];
    Debug.Log("myHP: "+myHp);
    Debug.Log("EnemyHP: "+enemyHp[stageId]);

    // 自分が生きている間の処理
    if(myHp > 0) {
      if(SendEventScript.actFlg){
        Debug.Log(SendEventScript.act);
        if(SendEventScript.act == "Attack") {
          damage = Damage(myStatus[0], enemyDef[stageId]);
          enemyHp[stageId] -= damage;
          _slider.value = enemyHp[stageId];
          // 敵が生きている間の処理
          if(enemyHp[stageId] > 0) {
            // デバッグ用に自分を無敵にする
            /*
            if(Random.value >= 0.5) {
              damage = Damage(enemyAtk[stageId], myStatus[1]);
              myHp -= damage;
            }
            */
          } else {
            anim.SetBool("die",true);
            Invoke("StageChange", 4.5f);
          }
      }
      SendEventScript.act = null;
      SendEventScript.actFlg = false;
    }
  }else{
    Debug.Log("GameOver");
  }
}

/*
 * params 攻撃力, 相手防御力
 */
float Damage(float atk, float def) {
  return atk * atk / def - def;
}

void StageChange()
{
  if (!locked) {
    stageId++;
    if (stageId > 2) stageId = 2;
  }
  Lock();
}
 
// stageIdが増加しつづけるのを防ぐ
void Lock()
{
  if(locked) {
    locked = false;
    return;
  }
  locked = true;
  }
}
