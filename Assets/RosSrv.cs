using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using RosMessageTypes.Mediator;
using GridMap = RosMessageTypes.GridMap.GridMapMsg;
using Unity.Robotics.ROSTCPConnector;
using Unity.Jobs;

public class RosSrv : MonoBehaviour
{
    ROSConnection ros;
    public string serviceName = "scale_grid_map";
    float awaitingResponseUntilTimestamp = -1;

    public GameObject node;
    public Transform root;



    void Start(){
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterRosService<GetScaledGridMapRequest, GetScaledGridMapResponse>(serviceName);
    }

    float res = 0.1f;
    void Update(){

        if (Input.GetKeyDown("w"))
            res += 0.01f;
        if (Input.GetKeyDown("s"))
            res -= 0.01f;

        if (Time.time > awaitingResponseUntilTimestamp) {
            awaitingResponseUntilTimestamp = Time.time + 5f; // don't send again for 1 second, or until we receive a response
            //float res = 0.05f + 0.04f * (float)Mathf.Sin(0.1f*Time.time);
            //res = 0.01f;
            GetScaledGridMapRequest positionServiceRequest = new GetScaledGridMapRequest(res);
            ros.SendServiceMessage<GetScaledGridMapResponse>(serviceName, positionServiceRequest, Callback_Destination);
        }
    }


    void GenerateMesh(float res, int w, int h) {

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
        node.GetComponent<MeshFilter>().mesh.Clear();
        node.GetComponent<MeshFilter>().sharedMesh = m;

        
    }

    void UpdateMesh(float[] heights, int w, int h, float resolution) {
        Vector3[] vertices = node.GetComponent<MeshFilter>().mesh.vertices;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;
                int invertedIdx = i * h + (h - 1 - j);

                vertices[idx].y = heights[invertedIdx]+root.position.y; //15*resolution*
            }
        }
        node.GetComponent<MeshFilter>().sharedMesh.vertices = vertices;
    }


    int oldNodeCount = 0;
    void Callback_Destination(GetScaledGridMapResponse response) {
        //destination = new Vector3(response.output.pos_x, response.output.pos_y, response.output.pos_z);
        //Debug.Log("New Destination: " + response.map.info);
        double resolution = response.map.info.resolution;
        //Debug.Log("Received map shaped "+ response.map.info.length_x/resolution + ":"+ response.map.info.length_y/resolution+ " res: "+ resolution);

        int w = (int)(response.map.info.length_x / resolution);
        int h = (int)(response.map.info.length_y / resolution);
        if(response.map.data[0].data.Length != oldNodeCount) {
            oldNodeCount = response.map.data[0].data.Length;

            GenerateMesh((float)resolution, h, w);
            
        }

        UpdateMesh(response.map.data[0].data, h, w, (float)resolution);


        awaitingResponseUntilTimestamp = -1;
    }
}
