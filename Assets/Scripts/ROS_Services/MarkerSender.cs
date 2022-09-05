using System;
using System.Collections;
using System.Collections.Generic;
using RosMessageTypes.Geometry;
using RosMessageTypes.Std;
using UnityEngine;
using RosMessageTypes.Visualization;
using Unity.Robotics.ROSTCPConnector;
using Unity.Robotics.ROSTCPConnector.ROSGeometry;
using Visualization_MarkerMsg = RosMessageTypes.Visualization.MarkerMsg;

public class MarkerSender : MonoBehaviour {
    private string topicName = "visualization_marker";
    private ROSConnection ros;

    public Transform excavator;
    public float radiusToExcavator = 4f;
    public float radiusToMarker = 2f;

    public Transform markerSpawnOffset;


    private void Start() {
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<Visualization_MarkerMsg>(topicName);
    }

    public void SpawnAndActivateMarker(Transform selectedMarker) {
        selectedMarker.transform.position = markerSpawnOffset.position;
        selectedMarker.gameObject.SetActive(true);
    }

    public void VerifyAndSubmitMarker(Transform selectedMarker) {
        if(!selectedMarker.gameObject.activeSelf)
            return;

        Vector3 userPosition = Camera.main.transform.position;

        if (
            Vector3.Distance(userPosition, excavator.position) > radiusToExcavator &&
            Vector3.Distance(userPosition,selectedMarker.position) > radiusToExcavator) {

            Vector3 pose = selectedMarker.position;
            //TODO check that the coords of the marker are correctly arranged
            // [machine] -> [Unity]  y, z, x

            MarkerMsg msg = new MarkerMsg();
            msg.pose = new PoseMsg(new PointMsg(pose.z, pose.x, pose.y), new QuaternionMsg(0, 0, 0, 1));
            
            ros.Publish(topicName, msg);


        }
        else {
            // Play error sound and do not send marker. The user is too close to either the marker or the excavator
        }
    }
}
