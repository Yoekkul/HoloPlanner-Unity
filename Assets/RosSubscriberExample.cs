using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosColor = RosMessageTypes.UnityRoboticsDemo.UnityColorMsg;
using GridMap = RosMessageTypes.GridMap.GridMapMsg;
using System.Collections.Generic;

public class RosSubscriberExample : MonoBehaviour {
    public GameObject cube;
    List<GameObject> cells = new List<GameObject>();
    float[] points;

    


    int w = 67;
    int h = 40;
    int elements;

    void Start() {
        elements = w * h;

        List<int> edges = new List<int>();
        Vector3[] vertices = new Vector3[elements];

        Mesh m = new Mesh();
        points = new float[elements];

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;
                vertices[idx] = new Vector3(i, 0, j);
                points[idx] = 0;

                if (idx + 1 < elements && idx + h < elements) {
                    edges.Add(idx);
                    edges.Add(idx+1);
                    edges.Add(idx+h);
                }
                if (idx + 1 < elements && idx + h+1 < elements) {
                    edges.Add(idx+h);
                    edges.Add(idx + 1);
                    edges.Add(idx + h+1);
                }
            }
        }
        m.vertices = vertices;
        m.triangles = edges.ToArray();
        m.RecalculateNormals();
        cube.GetComponent<MeshFilter>().mesh = m;

        ROSConnection.GetOrCreateInstance().Subscribe<RosColor>("color", ColorChange);
        ROSConnection.GetOrCreateInstance().Subscribe<GridMap>("grid_map_simple_demo/grid_map",GridMessage);
        }

    void GridMessage(GridMap map) {
        Vector3[] vertices = cube.GetComponent<MeshFilter>().mesh.vertices;
        var entry = map.data[0];
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;
                int invertedIdx = i * h + (h-1-j);

                vertices[idx].y = 15 * entry.data[invertedIdx];
            }
        }
        /*
        for (int i = 0; i < elements; i++) {
            vertices[i].y = 15*entry.data[i];
        }*/
        cube.GetComponent<MeshFilter>().sharedMesh.vertices = vertices;

    }
    void ColorChange(RosColor colorMessage) {
        cube.GetComponent<Renderer>().material.color = new Color32((byte)colorMessage.r, (byte)colorMessage.g, (byte)colorMessage.b, (byte)colorMessage.a);
    }
}
