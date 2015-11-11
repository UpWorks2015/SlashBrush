using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Chat_C : MonoBehaviour {
    // メッセージを管理するリスト
    public static List<string> messages = new List<string>();
    // Chat用のテキスト
    private string currentMessage = string.Empty;



    private void OnGUI()
    {
        // 接続が確立されていた場合の処理
        if ( NetworkViewMgr_C.Connected )
        {
            GUILayout.Space(150);

            GUILayout.BeginHorizontal(GUILayout.Width (250));

            // 入力情報の取得


            if ( GUILayout.Button("atk") )
            {
                // 入力情報が空ではない場合処理します。
                    currentMessage = "atk";
                    string msg = Network.player.guid + ":" + currentMessage;



                    GetComponent<NetworkView>().RPC("chatMessage", RPCMode.All, new object[] { msg } );
                    currentMessage = string.Empty;

            }
            if ( GUILayout.Button("def") )
            {
                // 入力情報が空ではない場合処理します。
                    currentMessage = "def";
                    string msg = Network.player.guid + ":" + currentMessage;



                    GetComponent<NetworkView>().RPC("chatMessage", RPCMode.All, new object[] { msg } );
                    currentMessage = string.Empty;

            }
            if ( GUILayout.Button("sp") )
            {
                // 入力情報が空ではない場合処理します。
                    currentMessage = "sp";
                    string msg = Network.player.guid + ":" + currentMessage;



                    GetComponent<NetworkView>().RPC("chatMessage", RPCMode.All, new object[] { msg } );
                    currentMessage = string.Empty;

            }

            GUILayout.EndHorizontal();

            // 入力されたメッセージを逆順に表示していく。
            for ( int i=messages.Count-1; i>=0; i-- )
            {
                GUILayout.Label(messages[i]);
                //Debug.Log(messages[i].Split(':')[1]);
            }
        }
    }

    private void sendEvent(){
      //Debug.Log(messages[i].Split(':')[1]);
    }

    // 接続されているピアで認識されるRPC関数として指定するために[RPC]を記述する。
    [RPC]
    public void chatMessage(string msg)
    {
        // 引数のメッセージをローカルの配列にセットする。
        messages.Add(msg);
        Debug.Log(msg.Split(':')[1]);
        EventScript.Action(msg.Split(':')[0],msg.Split(':')[1]);
    }
}
