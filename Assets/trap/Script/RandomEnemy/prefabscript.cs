using UnityEngine;
using System.Collections;

public class prefabscript : MonoBehaviour {
	public GameObject Obj_Creat;//要生成的物件
	public float f_Time=10.0f; //生成間隔
	public Transform Tran_CreatPoint;//物件要生成的位置
	public Vector3 V3_Random;//隨機生成位置
	// Use this for initialization
	void Start () {

		//Instantiate(Resources.Load("Zombunny"),new Vector3(2,2,2),Quaternion.identity);
	}
	
	// Update is called once per frame
	void Update () {
		V3_Random=new Vector3(Random.Range(-50f,50f),2f,Random.Range(-50f,50f));
		//XYZ隨機值
		if (f_Time > 0) {
			f_Time -= Time.deltaTime;
		} 
		else{
			Instantiate (Obj_Creat, V3_Random, Quaternion.identity);
			f_Time=10.0f;
		}
	}
}
