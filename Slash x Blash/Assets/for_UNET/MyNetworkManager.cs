using UnityEngine;
using UnityEngine.Networking;
/*
public class MyNetworkManager : MonoBehaviour {

    public bool isAtStartup = true;
		public bool isClientStartup = false;



    NetworkClient myClient;
		NetWorkConnection connection;
		NerWorkBehaviour behaviour;

    void Update ()
    {
        if (isAtStartup)
        {
            if (Input.GetKeyDown(KeyCode.S))
            {
                SetupServer();
            }

            if (Input.GetKeyDown(KeyCode.C))
            {
                SetupClient();
								Debug.Log(myClient.serverIp);
            }

            if (Input.GetKeyDown(KeyCode.B))
            {
                SetupServer();
                //SetupLocalClient();
								SetupClient();
								Debug.Log(myClient.serverIp);
            }
        }
				if (isClientStartup)
				{
					if (Input.GetKeyDown(KeyCode.E))
					{
							CloseClient();
							Debug.Log("Client Exit");
					}
					if (Input.GetKeyDown(KeyCode.M))
					{
							SendMessage("Hello");
							Debug.Log("Send Message");
					}
				}
    }

    void OnGUI()
    {
        if (isAtStartup)
        {
            GUI.Label(new Rect(2, 10, 150, 100), "Press S for server");
            GUI.Label(new Rect(2, 30, 150, 100), "Press B for both");
            GUI.Label(new Rect(2, 50, 150, 100), "Press C for client");
        }

				if (isClientStartup)
				{
					GUI.Label(new Rect(2, 10, 150, 100), "Connect");
					GUI.Label(new Rect(2, 30, 150, 100), "Press E for exit");
					GUI.Label(new Rect(2, 50, 150, 100), "Press M for message");
				}
    }

		// Create a server and listen on a port
    public void SetupServer()
    {
        NetworkServer.Listen(12345);
        isAtStartup = false;
				Debug.Log("SetupServer");

    }

    // Create a client and connect to the server port
    public void SetupClient()
    {
        myClient = new NetworkClient();
        myClient.RegisterHandler(MsgType.Connect, OnConnected);
        myClient.Connect("127.0.0.1",12345);
        isAtStartup = false;
				isClientStartup = true;
    }

    // Create a local client and connect to the local server
    public void SetupLocalClient()
    {
        myClient = ClientScene.ConnectLocalServer();
        myClient.RegisterHandler(MsgType.Connect, OnConnected);
        isAtStartup = false;
    }

		// client function
    public void OnConnected(NetworkMessage netMsg)
    {
        Debug.Log("Connected to server");
    }

		public void CloseClient()
    {
        myClient.Disconnect();
        isAtStartup = true;
				isClientStartup = false;
    }

		public void SendMessage(string Message)
	{
		var msg = new NetworkSystem.StringMessage(Message);
		NetworkServer.SendToAll(MsgType.Command, msg);
	}

}
*/
