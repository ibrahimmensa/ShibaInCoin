using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawLine : MonoBehaviour
{
    public GameObject linePrefab;
    public GameObject currentLine;

    public LineRenderer lineRenderer;
    public EdgeCollider2D EdgeCollider2D;
    public List<Vector2> fingerPositions;

    //myCode
    public GameObject Ball;
    public Transform WayPointParent;
    public GameObject Obj;
    public bool create;
    public bool Move;
    public bool lineCreated;
    public bool startDraw;

    // Start is called before the first frame update
    void Start()
    {
        Invoke(nameof(lateStart), 1);
    }
    void lateStart()
    {
        Ball = GamePlayManager.instance.Player;
    }
    // Update is called once per frame
    void Update()
    {
        if(!lineCreated)
        {
            if (Input.GetMouseButtonDown(0))
            {
                Vector2 RC_Pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit = Physics2D.Raycast(RC_Pos, Vector2.zero);
                if(hit)
                {
                    if (hit.transform.gameObject.CompareTag("Player"))
                    {
                        CreateLine();
                    }
                }
            }
            if (Input.GetMouseButton(0) && startDraw)
            {
                Vector2 tempFingerPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                if (Vector2.Distance(tempFingerPos, fingerPositions[fingerPositions.Count - 1]) > 0.1f)
                {
                    UpdateLine(tempFingerPos);
                }
            }
            else
            {
                if (startDraw)
                {
                    lineCreated = true;
                    GenerateWayPoints();
                }
            }
        }
        if(Move)
        {
            MoveCharacter();
        }
    }
    void CreateLine()
    {
        startDraw = true;
        currentLine = Instantiate(linePrefab , Vector3.zero,Quaternion.identity);
        lineRenderer = currentLine.GetComponent<LineRenderer>();
        EdgeCollider2D = currentLine.GetComponent<EdgeCollider2D>();
        fingerPositions.Clear();
        fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
        fingerPositions.Add(Camera.main.ScreenToWorldPoint(Input.mousePosition));
        lineRenderer.SetPosition(0, fingerPositions[0]);
        lineRenderer.SetPosition(1, fingerPositions[1]);
        EdgeCollider2D.points = fingerPositions.ToArray();
    }
    void UpdateLine(Vector2 newFingerPos)
    {
        fingerPositions.Add(newFingerPos);
        lineRenderer.positionCount++;
        lineRenderer.SetPosition(lineRenderer.positionCount -1, newFingerPos);
        EdgeCollider2D.points = fingerPositions.ToArray();
    }
    public void GenerateWayPoints()
    {
        foreach(Vector2 WayPoint in fingerPositions)
        {
            Instantiate(Obj, new Vector2(WayPoint.x, WayPoint.y), Quaternion.identity, WayPointParent);
            //Obj.transform.SetParent(,false);
        }
        create = false;
        Move = true;
    }
    int i = 0;
    public void MoveCharacter()
    {
        if (Vector2.Distance(Ball.transform.localPosition, WayPointParent.transform.GetChild(i).transform.localPosition)<0.1)
        {
            if (i < WayPointParent.transform.childCount -1)
            {
                i++;
            }
            else
            {
                Ball.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                currentLine.GetComponent<EdgeCollider2D>().enabled = false;
                Move = false;
                return;
            }
        }
        Ball.transform.localPosition = Vector2.MoveTowards(Ball.transform.position,
                WayPointParent.transform.GetChild(i).transform.localPosition, 0.05f);
    }
}
