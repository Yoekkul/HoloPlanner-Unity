using System;
using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.Utilities;
using RosMessageTypes.Mediator;
using Unity.Robotics.ROSTCPConnector;
using UnityEngine;
using RosState = RosMessageTypes.M545.M545StateMsg;

public class MMPoseUpdater : MonoBehaviour
{
    ArticulationBody[] bodies;
    ArticulationBody chassis;
    ArticulationBody m545;
    
    public delegate void PositionReceived(int nUpdates);
    public static event PositionReceived OnLocked;
    
    void Start()
    {
        m545 = GameObject.Find("M545").GetComponent<ArticulationBody>();
        chassis = GameObject.Find("BASE").GetComponent<ArticulationBody>();


        bodies = new ArticulationBody[]
        {
            GameObject.Find("LF_SWIVEL").GetComponent<ArticulationBody>(),
            GameObject.Find("LF_BEAM").GetComponent<ArticulationBody>(),
            GameObject.Find("LF_KNUCKLE").GetComponent<ArticulationBody>(),
            GameObject.Find("LF_WHEEL").GetComponent<ArticulationBody>(),

            GameObject.Find("RF_SWIVEL").GetComponent<ArticulationBody>(),
            GameObject.Find("RF_BEAM").GetComponent<ArticulationBody>(),
            GameObject.Find("RF_KNUCKLE").GetComponent<ArticulationBody>(),
            GameObject.Find("RF_WHEEL").GetComponent<ArticulationBody>(),

            GameObject.Find("LH_ROTATOR").GetComponent<ArticulationBody>(),
            GameObject.Find("LH_BEAM").GetComponent<ArticulationBody>(),
            GameObject.Find("LH_KNUCKLE").GetComponent<ArticulationBody>(),
            GameObject.Find("LH_WHEEL").GetComponent<ArticulationBody>(),
            GameObject.Find("LH_OUTRIGGER").GetComponent<ArticulationBody>(),

            GameObject.Find("RH_ROTATOR").GetComponent<ArticulationBody>(),
            GameObject.Find("RH_BEAM").GetComponent<ArticulationBody>(),
            GameObject.Find("RH_KNUCKLE").GetComponent<ArticulationBody>(),
            GameObject.Find("RH_WHEEL").GetComponent<ArticulationBody>(),
            GameObject.Find("RH_OUTRIGGER").GetComponent<ArticulationBody>(),

            GameObject.Find("CABIN").GetComponent<ArticulationBody>(),
            GameObject.Find("BOOM").GetComponent<ArticulationBody>(),
            GameObject.Find("DIPPER").GetComponent<ArticulationBody>(),
            GameObject.Find("TELE").GetComponent<ArticulationBody>(),

            GameObject.Find("ROTO_BASE").GetComponent<ArticulationBody>(),
            GameObject.Find("ROTO").GetComponent<ArticulationBody>(),
            GameObject.Find("ENDEFFECTOR").GetComponent<ArticulationBody>(),
        };


        //--------------- Setting up Joints
        ArticulationBody[] articulationChain = GameObject.Find("M545").GetComponentsInChildren<ArticulationBody>();
        int defDyanmicVal = 10;
        foreach (ArticulationBody joint in articulationChain)
        {
            joint.jointFriction = defDyanmicVal;
            joint.angularDamping = defDyanmicVal;
            ArticulationDrive currentDrive = joint.xDrive;
            currentDrive.stiffness = 100000;
            currentDrive.forceLimit = 10000;
            currentDrive.damping = 10000;
            joint.xDrive = currentDrive;
        }
        
        //------------------- Seting up ROS srv
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterRosService<GetStateServedRequest, GetStateServedResponse>("m545_state_srv");
    }

    private ROSConnection ros;
    float poseExpirationTime = -1;

    private void Update() {
        if (Time.time > poseExpirationTime) {
            poseExpirationTime = Time.time + 5f;
            ros.SendServiceMessage<GetStateServedResponse>("m545_state_srv", new GetStateServedRequest(),UpdateState);
            
        }
    }


    private int nPositions = 20;
    
    public void UpdateState(GetStateServedResponse response) {
        RosState state = response.state;
        Vector3 newPose = new Vector3(-(float)state.chassis_pose.position.y, (float)state.chassis_pose.position.z,
            (float)state.chassis_pose.position.x);

        float scale = 0.1f;



        //newPose = newPose;//  * scale;

         //newPose += root.parent.position;

         if (nPositions > 0) {
             nPositions--;
         } else if (nPositions == 0) {
             if (OnLocked != null) OnLocked(20);

             nPositions = -1;
         }

        //newPose = newPose.x * xh + newPose.y * yh + newPose.z * zh;

        Quaternion newRotation = new Quaternion(
            (float)state.chassis_pose.orientation.y,
            -(float)state.chassis_pose.orientation.z,
            (float)state.chassis_pose.orientation.x,
            (float)state.chassis_pose.orientation.w);

        m545.TeleportRoot(newPose, newRotation);

        //------------  Actuators positions

        for (int i = 0; i < bodies.Length; i++)
        {
            ArticulationDrive currentDrive = bodies[i].xDrive;
            if (i != 21)
                currentDrive.target = Mathf.Rad2Deg * (float)state.joints.position[i];
            else
                currentDrive.target = (float)state.joints.position[i];
                //currentDrive.target = (float)state.joints.position[i]*scale;
            bodies[i].xDrive = currentDrive;
        }
        
        poseExpirationTime = -1;
    }
}
