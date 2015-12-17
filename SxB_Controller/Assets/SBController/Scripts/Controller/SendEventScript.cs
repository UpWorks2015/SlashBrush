using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SendEventScript : MonoBehaviour {
	// メッセージを管理するリスト
	public static List<string> eventList = new List<string>();
	// Chat用のテキスト
	private string currentMessage = string.Empty;
	public static string act;
	public static bool actFlg = false;
	private bool isAvailable = true;
	
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		// 接続が確立されていた場合の処理
		if ( NetworkViewMgr1.Connected )
		{
			if ( ButtonScript.AtkFlg == true )
			{
				// 入力情報が空ではない場合処理します。
				currentMessage = "atk";
				string msg = Network.player.guid + ":" + currentMessage;
				
				
				
				GetComponent<NetworkView>().RPC("chatMessage", RPCMode.All, new object[] { msg } );
				currentMessage = string.Empty;
				ButtonScript.AtkFlg = false;
				
			}
			if ( ButtonScript.DefFlg == true )
			{
				// 入力情報が空ではない場合処理します。
				currentMessage = "def";
				string msg = Network.player.guid + ":" + currentMessage;
				
				
				
				GetComponent<NetworkView>().RPC("chatMessage", RPCMode.All, new object[] { msg } );
				currentMessage = string.Empty;
				ButtonScript.DefFlg = false;
				
			}
			if ( ButtonScript.SpFlg == true )
			{
				// 入力情報が空ではない場合処理します。
				currentMessage = "sp";
				string msg = Network.player.guid + ":" + currentMessage;
				
				
				
				GetComponent<NetworkView>().RPC("chatMessage", RPCMode.All, new object[] { msg } );
				currentMessage = string.Empty;
				ButtonScript.SpFlg = false;
				
			}
			
		}
	}
	[RPC]
	public void chatMessage(string msg)
	{
		// 引数のメッセージをローカルの配列にセットする。
		eventList.Add(msg);
		Debug.Log(msg.Split(':')[1]);
		SendAction(msg.Split(':')[0],msg.Split(':')[1]);
	}
	
	public void SendAction(string player,string actType){
		if(isAvailable) {
			if(actType=="atk"){
				Debug.Log(player + ":Attack");
				act = "Attack";
				actFlg = true;
			}
			else if(actType=="def"){
				Debug.Log(player + ":Defence");
				act = "Defence";
				actFlg = true;
			}
			else if(actType=="sp"){
				Debug.Log(player+":Magic");
				act = "Magic";
				actFlg = true;
			}
			StartCoroutine(ToggleAvailable());
		}
	}
	
	IEnumerator ToggleAvailable() {
		isAvailable = false;
		yield return new WaitForSeconds(3.0f);
		isAvailable = true;
	}
}