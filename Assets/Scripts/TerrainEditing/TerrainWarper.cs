using System;
using System.Collections;
using System.Collections.Generic;
using MathNet.Numerics.Providers.LinearAlgebra;
using Unity.Robotics.ROSTCPConnector.ROSGeometry;
using UnityEngine;

public class TerrainWarper : MonoBehaviour {

    public MeshFilter terrain;
    public MeshFilter originalTerrain;  //THIS SHOULD BE READONLY

    public float angle = 45;
    public float radius = 1f;

    private Vector3[] _Invertices;
    private Vector3[] _Outvertices;

    public void PerformMeshUpdate() {
        Vector3 offset = originalTerrain.gameObject.transform.position;
        
        terrain.mesh =  originalTerrain.mesh;
        
        
        _Invertices = originalTerrain.sharedMesh.vertices;
        _Outvertices = originalTerrain.sharedMesh.vertices;
        for (int i = 0; i < _Invertices.Length; i++) {
            _Outvertices[i].y = Single.NaN;
        }
        
        for (int i = 0; i < transform.childCount; i++) {
            Transform child = transform.GetChild(i);
            if (child.name.Contains("cone")) {
                ConeWarp(child.position-offset);
            }
        }
        
        terrain.mesh.vertices = _Outvertices;
    }

    private void ConeWarp(Vector3 pos) {
        //TODO set angle for each cone -> Use x rotation
        
        //We have original mesh and dynamic mesh
        float limitedAngle = Mathf.Min(Mathf.Max(angle, 10),89);    //Radius limited between 10 and 89 degrees
        //1. check if position x,z inside radius, if so update their height based on distance to cone
        Vector3 currentPose = pos;
        currentPose.y = 0;
        
        for (int i = 0; i < _Invertices.Length; i++) {
            Vector3 xzVertex = new Vector3(_Invertices[i].x, 0, _Invertices[i].z);
            float d = Vector3.Distance(currentPose, xzVertex); 
            if(d<radius) {
                float height = pos.y - d * Mathf.Tan(Mathf.Deg2Rad*limitedAngle);
                //TODO only rise above/below, do not clip through
                if (_Invertices[i].y <= height ||  Single.IsNaN(_Invertices[i].y)) {
                    _Outvertices[i].y = height;
                }
            }
        }
        
    }
}
