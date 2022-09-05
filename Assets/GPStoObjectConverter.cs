using System;
using System.Collections;
using System.Collections.Generic;
using RosMessageTypes.Geometry;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using tf_state = RosMessageTypes.Tf2.TFMessageMsg;
using navSatFix = RosMessageTypes.Sensor.NavSatFixMsg;

using MathNet.Numerics.LinearAlgebra;
using MathNet.Numerics.LinearAlgebra.Double;

public class GPStoObjectConverter : MonoBehaviour {
    private Vector<double> _receiverDelta = null;
    private List<Vector<double>> _receivedCoords = new List<Vector<double>>();
    private Matrix<double> _transformMatrix = null;

    private Vector<double> _gnssLeft = null;
    private Vector<double> _gnssRight = null;
    //private Transform _rightRoot; //TODO ensure that this object is at the position of the right GNSS receiver
    private void Start() {
        ROSConnection.GetOrCreateInstance().Subscribe<tf_state>("tf_static", UpdatedTFState);
        ROSConnection.GetOrCreateInstance().Subscribe<navSatFix>("m545_gnss_right", UpdateGNSSright);
        ROSConnection.GetOrCreateInstance().Subscribe<navSatFix>("m545_gnss_left", UpdateGNSSLeft);
    }

    private void UpdateGNSSLeft(navSatFix satFix) {
        _gnssLeft = DenseVector.OfArray(new double[] {
            satFix.latitude,
            satFix.longitude,
            satFix.altitude
        });
        
        UpdateGPSPosition();
    }
    private void UpdateGNSSright(navSatFix satFix) {
        _gnssRight = DenseVector.OfArray(new double[] {
            satFix.latitude,
            satFix.longitude,
            satFix.altitude
        });
        
        UpdateGPSPosition();
    }
    private void UpdateGPSPosition() {
        if (_gnssLeft == null)
            return;
        _receivedCoords.Add(_gnssLeft - _gnssRight);
        _gnssLeft = null;
        
        
        if (_receivedCoords.Count > 32) {
            _receivedCoords.RemoveAt(0);
        }

        if (_receivedCoords.Count == 32 && _transformMatrix == null && _receiverDelta != null) {
            Matrix<double> A = DenseMatrix.Create(32,_receivedCoords[0].Count,0);
            Matrix<double> b = DenseMatrix.Create(32,_receivedCoords[0].Count,0);
            for (int i = 0; i < 32; i++) {
                A.SetRow(i, _receivedCoords[i]);
                b.SetRow(i,_receiverDelta);
            }
            Debug.Log(A);
            _transformMatrix = (A.Transpose() * A).Inverse() * A.Transpose() * b;
            
            Debug.Log("Transform matrix created: "+_transformMatrix);
            
        }
    }
    private void UpdatedTFState(tf_state state) {
        if (_receiverDelta != null)
            return;
        
        Vector<double> lp = null;
        Vector<double> rp = null;
        foreach (var transform in state.transforms) {
            if (transform.child_frame_id == "GNSS_L") {
                lp = DenseVector.OfArray(new double[] {
                    transform.transform.translation.x,
                    transform.transform.translation.y,
                    transform.transform.translation.z
                });
            }else if (transform.child_frame_id == "GNSS_R") {
                rp = DenseVector.OfArray(new double[] {
                    transform.transform.translation.x, 
                    transform.transform.translation.y,
                    transform.transform.translation.z
                });
            }
        }

        
        if (lp == null || rp == null) {
            Debug.LogError("LP or RP have not been received");
        }
        else {
            _receiverDelta = lp - rp;
            ROSConnection.GetOrCreateInstance().Unsubscribe("/tf");
            ROSConnection.GetOrCreateInstance().Unsubscribe("/tf_static");
            Debug.Log("Succesfully unsubscribed");
        }
    }
    //1. receive 30 gps messages
    //2. calculate transformation matrix
    //3. Print Ready!

    //4. public Vector3(transform target)  -> Position in GNSS coords (if not ready throw warning, retunr null)
    //5. Evtl transformation from GNSS to LVN95
    public Vector3 PositionToGNSS(Transform target) {
        if (_transformMatrix == null) {
            return Vector3.zero;
        }
        Vector3 rootTargetVector = target.position - this.transform.position;
        Vector<double> sensorPlayerVector = DenseVector.OfArray(new double[]{rootTargetVector.x,rootTargetVector.y,rootTargetVector.z}) * _transformMatrix;
        sensorPlayerVector = sensorPlayerVector + _gnssRight;
        return new Vector3((float)sensorPlayerVector[0], (float)sensorPlayerVector[1],(float) sensorPlayerVector[2]);
    }
}
