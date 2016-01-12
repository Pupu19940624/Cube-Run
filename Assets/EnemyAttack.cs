using UnityEngine;
using System.Collections;

public class EnemyAttack : MonoBehaviour
{
	Animator playerAnim;
    GameObject player;

    void Awake ()
    {
        player = GameObject.FindGameObjectWithTag ("Player");
		playerAnim = player.GetComponent<Animator> ();
    }


    void OnTriggerEnter (Collider other)
    {
        if(other.gameObject.name == "Player")
        {
            CharacterMovement.GameOver();
        }
    }

    void OnCollisionEnter (Collision other) 
    {
        if(other.gameObject.name == "Player")
        {
            CharacterMovement.GameOver();
        }
    }


    void OnTriggerExit (Collider other)
    {
    }


    void Update ()
    {
    }

}
