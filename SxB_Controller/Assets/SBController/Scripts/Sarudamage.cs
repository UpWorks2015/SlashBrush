using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Sarudamage: MonoBehaviour {
  private Animator anim;
  Slider _Saruslider;
  void Start () {
    anim = GetComponent<Animator>();
    _Saruslider = GameObject.Find("SaruSlider").GetComponent<Slider>();
  }

  float _Saruhp = 100;
  void Update () {
  }
    

  public void OnMouseDown(){
		_Saruhp -= 20f;
    _Saruslider.value = _Saruhp;
    if(_Saruhp <= 0) {
      Debug.Log("Clear1");
    }
	}
}
