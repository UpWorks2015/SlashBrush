using UnityEngine;
using System.Collections;

public class ButtonScript : MonoBehaviour {

	public static bool AtkFlg = false;
	public static bool DefFlg = false;
	public static bool SpFlg = false;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	public void Atk() {
		AtkFlg = true;
	}

	public void Def() {
		DefFlg = true;
	}

	public void Sp() {
		SpFlg = true;
	}
}
