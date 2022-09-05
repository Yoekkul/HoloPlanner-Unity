using System;using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcedutalGeometry : MonoBehaviour {
    public Shape activeShape;

    public float angle = 45;

    private Mesh m;
    // Start is called before the first frame update
    void Start() {
        m = GetComponent<MeshFilter>().mesh;
        //m.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; // Removes limit of ~32000 edges
    }

    // Update is called once per frame
    void Update() {
        switch (activeShape) {
            case Shape.Cone:
                UpdateCone();
                break;
            case Shape.Line:
                UpdateLine();
                break;
        }
    }

    void UpdateLine() {
        List<int> edges = new List<int>();
        List<Vector3> vertices = new List<Vector3>();

        int childCount = transform.childCount;
        
        float limitedAngle = Mathf.Min(Mathf.Max(angle, 10),89);    //Radius limited between 10 and 89 degrees
        Vector3 radius = 1.0f/Mathf.Tan(Mathf.Deg2Rad*limitedAngle)* Vector3.forward;
        
        //transform.GetChild(0).transform;
        //float radius = 0.5f;
        Vector3 currentPos;
        int vertOffset = 0;
        for (int i = 0; i < childCount-1; i++) {
            currentPos = transform.GetChild(i).transform.position;
            
            //1. setup triangle
            //Vector3 offset = transform.GetChild(i).rotation*Vector3.forward;
            vertices.Add(currentPos);
            Vector3 a = GetContactWithTerrain(currentPos, Vector3.down + transform.GetChild(i).rotation * radius);
            Vector3 b = GetContactWithTerrain(currentPos, Vector3.down - transform.GetChild(i).rotation * radius);
            vertices.Add(a);
            vertices.Add(b);
            //2. create connection to next triangle -> subdivide in pieces [except in last]
            
            edges.Add(vertOffset);
            edges.Add(vertOffset+1);
            edges.Add(vertOffset+3);
            
            edges.Add(vertOffset+3);
            edges.Add(vertOffset+1);
            edges.Add(vertOffset+4);
            
            edges.Add(vertOffset+5);
            edges.Add(vertOffset+2);
            edges.Add(vertOffset+3);
            
            edges.Add(vertOffset+2);
            edges.Add(vertOffset+0);
            edges.Add(vertOffset+3);
            
            
            vertOffset += 3;


            //Vector3 offset = new Vector3(((lastPos + nextPos)).x, 0,((lastPos + nextPos)).z).normalized;
            

        }
        currentPos = transform.GetChild(childCount-1).transform.position;
        Vector3 loffset = transform.GetChild(childCount-1).rotation*Vector3.forward;
        vertices.Add(currentPos);
        vertices.Add(currentPos+Vector3.down+transform.GetChild(childCount-1).rotation*radius);
        vertices.Add(currentPos+Vector3.down-transform.GetChild(childCount-1).rotation*radius);
        
        m.Clear();
        m.vertices = vertices.ToArray();
        m.triangles = edges.ToArray();
        m.RecalculateNormals();
    }

    void UpdateCone() {
        float maxHeight = 1;
        int resolution = 400;
        
        //1. Shoot ray to see if we go up or down
        
        
        List<int> edges = new List<int>();
        Vector3[] vertices = new Vector3[resolution+2];

        vertices[0] = transform.position;//tip of the cone
        vertices[1] = vertices[0] + (isTerrainAbove(vertices[0])? maxHeight*Vector3.up : maxHeight*Vector3.down);


        float limitedAngle = Mathf.Min(Mathf.Max(angle, 10),89);    //Radius limited between 10 and 89 degrees
        Vector3 radius = maxHeight/Mathf.Tan(Mathf.Deg2Rad*limitedAngle)* Vector3.forward;
        for (int i = 2; i < resolution; i++) {
            vertices[i] = vertices[1] + Quaternion.Euler(0,365.0f*(i-2)/(resolution),0) * radius;
            edges.Add(0);
            edges.Add(i);
            edges.Add(i+1);
            
        }
        m.Clear();
        m.vertices = vertices;
        m.triangles = edges.ToArray();
        m.RecalculateNormals();
    }

    Vector3 GetContactWithTerrain(Vector3 position, Vector3 rayDirection) {
        int layerMask = 1 << 10;
        if (Physics.Raycast(position, rayDirection, out RaycastHit hit, Mathf.Infinity, layerMask)) {
            Debug.DrawRay(position, rayDirection * hit.distance, Color.yellow);
            return hit.point;
        }else if (Physics.Raycast(position, -rayDirection, out hit, Mathf.Infinity, layerMask)) {
            Debug.DrawRay(position, -rayDirection * hit.distance, Color.yellow);
            return hit.point;
        }
        Debug.LogError("Point not found!");
        Debug.DrawRay(position, rayDirection * 1000, Color.red);
        Debug.DrawRay(position, -rayDirection * 1000, Color.red);
        return position;
    }

    bool isTerrainAbove(Vector3 position) {
        int layerMask = 1 << 10;
        
        if (Physics.Raycast(position, transform.TransformDirection(Vector3.up), out RaycastHit hit, Mathf.Infinity, layerMask))
        {
            Debug.DrawRay(position, transform.TransformDirection(Vector3.up) * hit.distance, Color.yellow);
            return true;
        }
        else
        {
            Debug.DrawRay(position, transform.TransformDirection(Vector3.down) * 1000, Color.white);
            return false;
        }
    }
}
public enum Shape {
 Cone,
 Line,
 Spline
};

