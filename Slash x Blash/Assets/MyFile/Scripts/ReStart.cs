// ﻿using UnityEngine;
// using System.Collections;
//
// public class ReStart : MonoBehaviour {
// 	public void OnGUI(){
// 		Util.SetFontSize(32);
// 		Util.SetFontAlignment(TextAnchor.MiddleCenter);
//
// 		float w = 100;
// 		float h = 40;
// 		float px = Screen.width / 2 - w / 2;
// 		float py = Screen.height / 2 - h / 2;
// 		if(DamageScript.stageId == 3){
// 			if (GUI.Button(new Rect(px, py + 100, w, h), "ReStart!!")){
// 				TitleMgr.tcamId = 0;
// 				TitleMgr.sceneId = 0;
// 				DamageScript.stageId = 0;
// 				Application.LoadLevel("Title");
// 				Debug.Log("ReStart");
// 			}
// 		}
// 	}
// }
