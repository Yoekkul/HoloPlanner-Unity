using System.Collections;
using System.Collections.Generic;
using RosMessageTypes.Mediator;
using UnityEngine;

public class GridMapUpdater : MonoBehaviour
{
    
    public GameObject TerrainMeshHolder; //node
    public Transform TerrainMeshOffset;  //root


    private int oldNodeCount = 0;
    public void UpdateGridMap(GetScaledGridMapResponse response) {
        if(response.map.data.Length == 0) {
            // We got an empty map
            return;
        }
        double resolution = response.map.info.resolution;

        int w = (int)(response.map.info.length_x / resolution);
        int h = (int)(response.map.info.length_y / resolution);

        if(response.map.data[0].data.Length != oldNodeCount) {
            oldNodeCount = response.map.data[0].data.Length;

            GenerateMesh((float)resolution, h, w);

        }

        UpdateMesh(response.map.data[0].data, h, w, (float)resolution);

        
        Vector3 mapPose = new Vector3(-(float)response.map.info.pose.position.y * TerrainMeshOffset.localScale.x, (float)response.map.info.pose.position.z * TerrainMeshOffset.localScale.y, (float)response.map.info.pose.position.x* TerrainMeshOffset.localScale.z);

        //Only center the mesh when we get an updated version
        TerrainMeshHolder.transform.position = mapPose;
    }
    private void GenerateMesh(float res, int w, int h) {

        List<int> edges = new List<int>();
        Vector3[] vertices = new Vector3[w*h];

        Mesh m = new Mesh();

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;

                vertices[idx] = new Vector3((i-w/2)*res, 0, (j-h/2)*res);

                if (idx + 1 < w * h && idx + h < w * h && j+1<h) {
                    edges.Add(idx);
                    edges.Add(idx + 1);
                    edges.Add(idx + h);
                }
                if (idx + 1 < w * h && idx + h + 1 < w * h && j + 1 < h) {
                    edges.Add(idx + h);
                    edges.Add(idx + 1);
                    edges.Add(idx + h + 1);
                }
            }
        }
        m.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32; // Removes limit of ~32000 edges
        m.vertices = vertices;
        m.triangles = edges.ToArray();
        m.RecalculateNormals();
        TerrainMeshHolder.GetComponent<MeshFilter>().mesh.Clear();
        TerrainMeshHolder.GetComponent<MeshFilter>().sharedMesh = m;

        
    }
    
    private void UpdateMesh(float[] heights, int w, int h, float resolution) {
        Vector3[] vertices = TerrainMeshHolder.GetComponent<MeshFilter>().mesh.vertices;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;
                int invertedIdx = i * h + (h - 1 - j);

                vertices[idx].y = heights[invertedIdx]+TerrainMeshOffset.position.y; //15*resolution*
            }
        }
        TerrainMeshHolder.GetComponent<MeshFilter>().sharedMesh.vertices = vertices;
    }
}
