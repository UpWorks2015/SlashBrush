using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
  private Animator anim;
  public static int stageId = 0;
  Slider _slider;
  public static float _hp;
  public static float _point;
  bool startFlg = true;
  string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider" };
  void Start () {
    _hp = 100;
    anim = GetComponent<Animator>();
    //_slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();

  }

  //float _hp = 100;
  void Update () {
    //敵を倒した後の
    _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();

    if(SendEventScript.actFlg){
      Damage(SendEventScript.act,startFlg);
      SendEventScript.act = null;
      SendEventScript.actFlg = false;
    }
  }

/*
  public void OnMouseDown (){
		_hp -= 20f;
    _slider.value = _hp;
    if(_hp <= 0) {
      anim.SetBool("die",true);
      if(stageId != enemy.Length){
        Invoke("StageChage", 4.5f);
      }
    }
  }
  */
  void Damage(string actType,bool sFlg){
    if(sFlg){
      _hp -= 20f;
      _slider.value = _hp;
      Debug.Log(_hp);
      if(_hp <= 0) {
        anim.SetBool("die",true);
        if(stageId != enemy.Length-1){
          Invoke("StageChange", 4.5f);
        }
      }
    }else{
      Debug.Log("何もしない");
    }
  }

  void StageChange()
  {
    stageId++;
    Debug.Log("StageChage");
    _hp = 100;
    startFlg = true;
  }
}
