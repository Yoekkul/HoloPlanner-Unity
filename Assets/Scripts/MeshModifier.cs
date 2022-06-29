using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeshModifier : MonoBehaviour
{
    public MeshFilter terrain;

    private List<List<int>> history;
    private List<int> editingEdges; //(tuple int vector3 oldpos)
    private Vector3[] vertices;

    private void Start() {
        editingEdges = new List<int>();
    }

    public void AlterFromPoint(Vector3 center, float height, float angle) {
        vertices = terrain.mesh.vertices;
        
        float radius = Mathf.Abs(height / Mathf.Tan(angle));
        for(int i = 0; i< terrain.mesh.vertexCount; i++) {
            Vector3 pointDist = center - vertices[i];
            pointDist.y = 0;
            if(pointDist.magnitude < radius) {
                Debug.Log(pointDist.magnitude+" "+radius);
                editingEdges.Add(i);
                vertices[i].y = center.y + height*Mathf.Abs(1-1/(radius-pointDist.magnitude));
                //Debug.DrawLine(center, vertices[i], Color.blue, 5f);
            }
        }

        terrain.mesh.vertices = vertices;
        terrain.mesh.RecalculateBounds();
        terrain.mesh.RecalculateNormals();
        //TODO also update collider
    }


}
