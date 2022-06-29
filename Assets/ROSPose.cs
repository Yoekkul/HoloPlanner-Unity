using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;

using RosState = RosMessageTypes.M545.M545StateMsg;

public class ROSPose : MonoBehaviour {

    public float amplitude = 10;
    /*
    LF_HAA = 0
    LF_HFE = 1
    LF_STEER = 2
    LF_WHEEL = 3

    RF_HAA = 4
    RF_HFE = 5
    RF_STEER = 6
    RF_WHEEL = 7

    LH_HFE = 8
    LH_HAA = 9
    LH_STEER = 10
    LH_WHEEL = 11
    LH_CLAW = 12

    RH_HFE = 13
    RH_HAA = 14
    RH_STEER = 15
    RH_WHEEL = 16
    RH_CLAW = 17
    --------------------
    - TURN = 18
    - BOOM = 19
    - DIPPER = 20
    - TELE = 21

    EE = 22 (pitch, roll, jaw)
    
     */

    ArticulationBody[] bodies;

    ArticulationBody chassis;

    private void Start() {
        chassis = GameObject.Find("BASE").GetComponent<ArticulationBody>();


        bodies = new ArticulationBody[]{
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

        ROSConnection.GetOrCreateInstance().Subscribe<RosState>("m545_state", UpdateState);
        Debug.Log("Bodies ready");


        //ArticulationDrive currentDrive = bodies[0].xDrive;
        //currentDrive.target = 20;
        //bodies[0].xDrive = currentDrive;
    }

    void UpdateState(RosState state) {

        //------------ Chassis orientation -------------------
        ArticulationDrive chassis_x = chassis.xDrive;
        ArticulationDrive chassis_y = chassis.yDrive;
        ArticulationDrive chassis_z = chassis.zDrive;

        chassis_x.target = amplitude*(float)state.chassis_pose.orientation.z; // Warning x, z up-front inverted
        chassis_y.target = amplitude*(float)state.chassis_pose.orientation.y;   
        chassis_z.target = amplitude*(float)state.chassis_pose.orientation.x;

        chassis.xDrive = chassis_x;
        chassis.yDrive = chassis_y;
        chassis.zDrive = chassis_z;




        //------------  Actuators positon

        for (int i = 0; i < bodies.Length; i++) {
            ArticulationDrive currentDrive = bodies[i].xDrive;
            currentDrive.target = amplitude*(float)state.joints.position[i];
            bodies[i].xDrive = currentDrive;
        }
    }

}
