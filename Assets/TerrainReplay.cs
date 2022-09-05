using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using UnityEngine;

public class TerrainReplay : MonoBehaviour {
    public float timeStep = 0.5f;
    public bool loop = true;

    private FullTerrainHolder _terrainHolder;

    private float _updateTime;

    void Start() {
        TextAsset text = Resources.Load<TextAsset>("terrain");
        _terrainHolder = JsonConvert.DeserializeObject<FullTerrainHolder>(text.text);
        _updateTime = Time.time;

        GenerateMesh(0.1f, (int)_terrainHolder.Width, (int)_terrainHolder.Height);
    }

    private int step = 0;

    void Update() {
        if (_updateTime < Time.time) {
            UpdateMesh(_terrainHolder.data[step], (int)_terrainHolder.Width, (int)_terrainHolder.Height, 0.1f);
            _updateTime = Time.time + timeStep;
            if (step < _terrainHolder.data.Count-1) {
                step++;
            }else if (loop) {
                Debug.Log("Looping");
                step = 0;
            } else {
                step = _terrainHolder.data.Count - 1;
            }
        }
    }

    //FIXME THIS IS A DUPLICATE AND IT SHOULD NOT BE
    private void GenerateMesh(float res, int w, int h) {
        List<int> edges = new List<int>();
        Vector3[] vertices = new Vector3[w * h];

        Mesh m = new Mesh();

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;

                vertices[idx] = new Vector3((i - w / 2) * res, 0, (j - h / 2) * res);

                if (idx + 1 < w * h && idx + h < w * h && j + 1 < h) {
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
        this.GetComponent<MeshFilter>().mesh.Clear();
        this.GetComponent<MeshFilter>().sharedMesh = m;
    }

    void UpdateMesh(float[] heights, int w, int h, float resolution) {
        Vector3[] vertices = this.GetComponent<MeshFilter>().mesh.vertices;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                int idx = i * h + j;
                int invertedIdx = i * h + (h - 1 - j);

                vertices[idx].y = heights[invertedIdx]; //+transform.position.y;
            }
        }

        this.GetComponent<MeshFilter>().sharedMesh.vertices = vertices;
    }
}


[Serializable]
public class FullTerrainHolder {
    public uint Width;
    public uint Height;

    // public List<Vector3> mapPose;

    public List<float[]> data;

    //public List<float> resolution;

    public FullTerrainHolder(uint width, uint height) {
        Width = width;
        Height = height;

        //mapPose = new List<Vector3>();
        data = new List<float[]>();
        // resolution = new List<float>();
    }

    public void AddEntry(float[] currentData, Vector3 currentPose, float currentResolution) {
        data.Add(currentData);
        // mapPose.Add(currentPose);
        //resolution.Add(currentResolution);
    }
}