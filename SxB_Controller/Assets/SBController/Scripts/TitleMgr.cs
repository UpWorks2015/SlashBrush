using UnityEngine;
using System.Collections;

public class TitleMgr : MonoBehaviour {
	void OnGUI(){
		Util.SetFontSize(32);
		Util.SetFontAlignment(TextAnchor.MiddleCenter);

		float w = 80;
		float h = 32;
		float px = Screen.width / 2 - w / 2;
		float py = Screen.height / 2 - h / 2;

		py += 60;
		if (GUI.Button(new Rect(px, py, w, h), "Start!!")){
			Application.LoadLevel("StageSelect");
		}
	}
}
