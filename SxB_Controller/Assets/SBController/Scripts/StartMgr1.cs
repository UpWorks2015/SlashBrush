using UnityEngine;
using System.Collections;

public class StartMgr1 : MonoBehaviour {
	void OnGUI(){
		Util.SetFontSize(32);
		Util.SetFontAlignment(TextAnchor.MiddleCenter);

		float w = 100;
		float h = 40;
		float px = Screen.width / 2 - w / 2;
		float py = Screen.height / 2 - h / 2;

		py += 60;
		if (GUI.Button(new Rect(px-95, py+10, w, h), "Start!!")){
			Application.LoadLevel("stage");
		}
	}
}
