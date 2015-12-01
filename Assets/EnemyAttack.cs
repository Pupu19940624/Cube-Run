using UnityEngine;
using System.Collections;

public class EnemyAttack : MonoBehaviour
{
    public float timeBetweenAttacks = 0.5f;
	Animator playerAnim;
    GameObject player;
    bool playerInRange;
    float timer;
	bool isDead;

    void Awake ()
    {
        player = GameObject.FindGameObjectWithTag ("Player");
		playerAnim = player.GetComponent<Animator> ();
    }


    void OnTriggerEnter (Collider other)
    {
        if(other.gameObject.name == "Player")
        {
            // playerInRange = true;
            CharacterMovement.GameOver();
        }
    }


    void OnTriggerExit (Collider other)
    {
        if(other.gameObject == player)
        {
            playerInRange = false;
        }
    }


    void Update ()
    {
        //timer += Time.deltaTime;

        // if(/*timer >= timeBetweenAttacks && */playerInRange)
        // {
        //     gotyou ();
        // }
    }


    void gotyou ()
    {
        timer = 0f;
		isDead = true;
		//playerInRange = false;
        Debug.Log("dddd");

        CharacterMovement.GameOver();
    }
}
