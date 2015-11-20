using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class EventScript : MonoBehaviour {


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	static public void Action(string player,string actType){
		if(actType=="atk"){
			Debug.Log(player + ":Attack");
		}
		else if(actType=="def"){
			Debug.Log(player + ":Deffence");
		}
		else if(actType=="sp"){
			Debug.Log(player+":Magic");
		}

	}

}
