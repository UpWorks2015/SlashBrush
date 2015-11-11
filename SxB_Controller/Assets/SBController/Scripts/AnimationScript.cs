using UnityEngine;
using System.Collections;

public class AnimationScript : MonoBehaviour {
	Animator animator;


	// Use this for initialization
	void Start () {
		//_anim = GetComponent<Animator>();
		animator = GetComponent (typeof(Animator)) as Animator;
	}

	void Update () {

	}

	void OnGUI () {
		if (GUI.Button(new Rect(10, 10, 80, 40), "to die")) {
			animator.SetBool("die",true);
			Debug.Log("Die");
		}
	}
}
