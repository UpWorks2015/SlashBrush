using UnityEngine;
using System.Collections;

public class Cameraswitch : MonoBehaviour {
  public Camera main_camera;
  public Camera sub_camera;
  public Camera subsub_camera;
  public Camera title_camera;
  bool titleFlg;

  // Use this for initialization
  void Start () {
    title_camera.enabled = true;
    main_camera.enabled = false;
    sub_camera.enabled = false;
    subsub_camera.enabled = false;
  }

  // Update is called once per frame
  void Update () {
    if(titleFlg){
      if (DamageScript.stageId == 0) {
        title_camera.enabled = false;
        main_camera.enabled = true;
        sub_camera.enabled = false;
        subsub_camera.enabled = false;
      } else if (DamageScript.stageId == 1) {
        title_camera.enabled = false;
        main_camera.enabled = false;
        sub_camera.enabled = true;
        subsub_camera.enabled = false;
      } else if (DamageScript.stageId == 2) {
        title_camera.enabled = false;
        main_camera.enabled = false;
        sub_camera.enabled = false;
        subsub_camera.enabled = true;
      }
    }
  }

  public void OnMouseDown(){
    titleFlg = true;
    Debug.Log("Click");
  }
}
