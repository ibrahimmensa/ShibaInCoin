using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Object_Movement : MonoBehaviour
{
    public GameObject Snake;
    public Transform Start_point;
    public Transform End_point;
    public float speed;

    bool started;
    private void Start()
    {
        Start_point.position = Snake.transform.position;
    }
    // Update is called once per frame
    void Update()
    {
        if(Vector2.Distance(Snake.transform.position,End_point.position) < 0.01f)
        {
            if(!started)
            {
                Snake.transform.rotation = End_point.rotation;
                started = true;
            }
            else
            {
                Snake.transform.rotation = Start_point.rotation;
                started=false;
            }
            End_point.position = Start_point.position;
            Start_point.position = Snake.transform.position;
        }
        Snake.transform.position =
            Vector2.MoveTowards(Snake.transform.position, End_point.position, speed);
    }
}
