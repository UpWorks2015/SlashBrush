using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
  private Animator anim;
  public static int stageId = 0;
  Slider _slider;
  string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider" };
  void Start () {
    anim = GetComponent<Animator>();
    _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
  }

  float _hp = 100;
  void Update () {

  }


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
  void StageChage()
  {
    stageId++;
    Debug.Log("StageChage");
  }
}
