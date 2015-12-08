using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DamageScript: MonoBehaviour {
    private Animator anim;
    public static int stageId = 0;
    //public static int  targetEnemy = 0;
    // public GameObject hitEffect;
    // public GameObject hitEffect2;
    // public GameObject hitEffect3;
    // public AudioClip  hitsound;
    // public AudioClip  hitsound2;
    // public AudioClip  hitsound3;
    // public AudioSource speaker;
    // public AudioSource speaker2;
    // public AudioSource speaker3;

    // GameObject AtkParticle;
    // GameObject AtkParticle2;
    // GameObject Atkparticle3;
    // float randomPosX;
    // float randomPosY;

    Slider _slider;
    string[] enemy = new string[] { "InuSlider", "SaruSlider", "KijiSlider" };

    void Start () {
        anim = GetComponent<Animator>();
        _slider = GameObject.Find(enemy[stageId]).GetComponent<Slider>();
    }

    float _hp = 100;
    void Update () {
        _slider.value = _hp;
        // randomPosX = Random.Range(-1.5f,1.5f);
        // randomPosY = Random.Range(-1.5f,1.5f);
    }

  //public void OnMouseDown (){
		//_hp -= 20f;
		//AtkParticle = Instantiate (hitEffect, new Vector3( transform.position.x+randomPosX,transform.position.y+randomPosY, transform.position.z+1),Quaternion.identity) as GameObject;
		//Invoke ("ParticleDestroy", 0.3f);
		//speaker.PlayOneShot(hitsound);
		// エフェクト発生
		//AtkParticle2 = Instantiate (hitEffect2, new Vector3( transform.position.x+randomPosX,transform.position.y+randomPosY, transform.position.z+1),Quaternion.identity) as GameObject;
		//Invoke ("ParticleDestroy", 0.1f);
		//speaker2.PlayOneShot(hitsound2);
		// エフェクト発生 2
	//}
	public void OnMouseDown (){
        // Atkparticle3 = Instantiate (hitEffect3, new Vector3( transform.position.x,transform.position.y,transform.position.z+2),Quaternion.identity) as GameObject;
        // Invoke ("ParticleDestroy", 0.01f);
        // speaker3.PlayOneShot(hitsound3);
        //エフェクト発生 3
        _hp -= 20;
        _slider.value = _hp;
        Debug.Log("hit");
        if (_hp <= 0) {
            anim.SetBool ("die", true);
            if (stageId != enemy.Length) {
                Invoke ("StageChage", 4.5f);
            }
        }
    }

    void StageChage()
    {
        stageId++;
        Debug.Log("StageChage");
    }

  //   void ParticleDestroy()
	// {
        // Destroy (AtkParticle);
  //   }
}
