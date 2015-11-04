using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SoloChat : MonoBehaviour {
    // メッセージを管理するリスト
    private List<string> messages = new List<string>();
    // Chat用のテキスト
    private string currentMessage = string.Empty;

    private void OnGUI()
    {
        GUILayout.Space(10);
        GUILayout.BeginHorizontal(GUILayout.Width (250));

        // 入力情報取得
        currentMessage = GUILayout.TextField(currentMessage);

        // Sendボタン
        if ( GUILayout.Button("Send") )
        {
            // 入力が空ではない場合処理
            if ( !string.IsNullOrEmpty(currentMessage.Trim ()) )
            {
                Debug.Log(currentMessage);
                messages.Add(currentMessage);

                // 送信後は、入力値を空
                currentMessage = string.Empty;
            }
        }

        GUILayout.EndHorizontal();

        // Chat欄の生成
        createMessage (messages);
    }

    private void createMessage(List<string> messages){
        // 入力されたメッセージを逆順に表示
        for ( int i=messages.Count-1; i>=0; i-- )
        {
            GUILayout.Label(messages[i]);
        }
    }
}
