using UnityEngine;
using System.Collections;
using System.Net;
using System.Linq;

public class NetworkViewMgr_C : MonoBehaviour {

    static public string WebUrl { get { return webUrl; } }

    public          string  connectionIP;
    public          int     portNumber      = 8632;
    public static   bool    Connected       { get{ return connected; } }

    private static  bool    connected       = false;
            static  string  webUrl;
						static bool client = false;


    void Start () {
      var ip = GetIP();
  		webUrl = "http://" + ip + ":" + portNumber;
      Debug.Log(webUrl);
			connectionIP = ip;
    }

    //ipアドレスの取得
    string GetIP() {
  		var hostName = System.Net.Dns.GetHostName ();
  		var ipEntry = System.Net.Dns.GetHostEntry(hostName);
  		var ipList = ipEntry.AddressList;
  		foreach (var ip in ipList) {
  			Debug.Log ("IP=" + ip.ToString());
  		}
  		return ipList.Last().ToString();
  	}

		void Update () {
			if ( client==false )
			{
					//Network.Connect(connectionIP, portNumber);
					Network.Connect(connectionIP, portNumber);
					client = true;

			}
		}


    private void OnGUI()
    {
        // 接続済み
        if ( connected )
        {
            //GUILayout.Label("Connections: " + Network.connections.Length.ToString());
            // 接続を切断する場合
            if ( Input.GetKeyDown(KeyCode.Q) )
            {
                Network.Disconnect();
            }
        }
        else
        {
            // 画面の入力情報を取得する。
            connectionIP = GUILayout.TextField(GetIP());
            int.TryParse(GUILayout.TextField(portNumber.ToString()), out portNumber);

            // Clientになる場合
            if (  Input.GetMouseButtonDown(0) )
            {
                //Network.Connect(connectionIP, portNumber);
                Network.Connect(GetIP(), portNumber);
            }

            // Serverになる場合
            if (  Input.GetKeyDown(KeyCode.S) )
            {
                //InitializeServer(通信人数,port番号)
                Network.InitializeServer(4, portNumber);
            }
        }
    }

		//サーバーが初期化されたとき、サーバー側で呼び出されます。
    void OnServerInitialized()
    {
        Debug.Log("Server initialized and ready");
        connected = true;
    }

    //サーバーに接続したとき、クライアント側で呼び出されます。
    void OnConnectedToServer()
    {
        Debug.Log("Connected to server");
        connected = true;
    }

    // プレイヤーが接続されたとき、サーバー側で呼び出されます。
    void OnPlayerConnected(NetworkPlayer player)
    {
        Debug.Log("Connected from " + player.ipAddress + ":" + player.port);
        connected = true;
    }

    //プレイヤーが切断されたとき、サーバー側で呼び出されます。
    void OnPlayerDisconnected(NetworkPlayer player)
    {
        Debug.Log("Clean up after player " + player);
        Network.RemoveRPCs(player);
        Network.DestroyPlayerObjects(player);
    }

		//サーバーから切断したとき、クライアント側で呼び出されます。
    void OnDisconnectedFromServer(NetworkDisconnection info) {
        connected = false;
        if (Network.isServer)
        {
            Debug.Log("Local server connection disconnected");
        }
        else if (info == NetworkDisconnection.LostConnection)
        {
            Debug.Log("Lost connection to the server");
        }
        else
        {
            Debug.Log("Successfully diconnected from the server");
        }
    }

    //サーバーの接続に失敗したとき、クライアント側で呼び出されます。
    void OnFailedToConnect(NetworkConnectionError error)
    {
        Debug.Log("Could not connect to server: " + error);
    }
	}
