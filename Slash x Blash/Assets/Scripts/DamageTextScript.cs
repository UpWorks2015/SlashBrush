//using UnityEngine;
//using UnityEngine.UI;
//using System.Collections;
//using System.Collections.Generic;
//
//public class PopupDamageGen : MonoBehaviour {
//
//	public GameObject TargetCanvas;
//
//	public string PopupString;
//
//	public GameObject PopupTextObject;
//
//	public Vector3 PopupPosition;
//
//	public float PopupTextWidth;
//
//	public void Popup()
//	{
//		StartCoroutine (Execute());
//	}
//
//	private IEnumerator Execute()
//	{
//		var pos = this.PopupPosition;
//		var texts = new List<NumberTextScript> ();
//		
//		var root = new GameObject ();
//		var canvasGroup = root.AddComponent<CanvasGroup> ();
//		root.transform.SetParent (this.TargetCanvas.transform);
//		
//		foreach (var s in this.PopupString) {
//			var obj = new GameObject ();
//			obj.transform.position = pos;
//			obj.transform.SetParent (root.transform);
//			
//			// 1文字ずつ生成
//			var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);
//			var textComp = valueText.GetComponent<Text> ();
//			textComp.text = s.ToString ();
//			valueText.transform.SetParent (obj.transform);
//			texts.Add( valueText.GetComponent<NumberTextScript>() );
//			
//			// 0.03秒待つ(適当)
//			yield return new WaitForSeconds (0.03f);
//			
//			// 次の位置
//			pos.x += this.PopupTextWidth;
//		}
//		
//		// 適当に待ち
//		while (!texts.TrueForAll( t => t.IsFinish )) {
//			yield return new WaitForSeconds (0.1f);
//		}
//		
//		// フェードアウト
//		for (int n=9; n>=0; n--) {
//			canvasGroup.alpha = n / 10.0f;
//			yield return new WaitForSeconds (0.01f);
//		}
//		
//		// 破棄
//		Destroy (root);
//		Destroy (gameObject);
//	}
//
//	public bool isFinish;
//
//	// Use this for initialization
//	void Start () {
//	
//	}
//	
//	// Update is called once per frame
//	void Update () {
//	
//	}
//
//	public void OnAnimationFinish()
//	{
//		this.isFinish = true;
//	}
//}
