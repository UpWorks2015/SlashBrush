using UnityEngine;
using System.Collections;

public class DebugManager : MonoBehaviour {
	public static string debugAct;
	public static bool debugActflg = false;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
#if DEBUG_MODE
		Debug.Log("It is DEBUG_MODE now!");
		if(Input.GetKeyDown("a"))
		{
			debugAct = "Attack";
			debugActflg = true;
		}
		else if(Input.GetKeyDown("s"))
		{
			debugAct = "Magic";
			debugActflg = true;
		}
		else if(Input.GetKeyDown("d"))
		{
			debugAct = "Defence";
			debugActflg = true;
		}
#endif
	
	}
}
