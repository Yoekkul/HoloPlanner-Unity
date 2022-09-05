using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using RosState = RosMessageTypes.M545.M545StateMsg;
public class ROSPose : MonoBehaviour {
    public Transform root;
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

        ArticulationBody m545;

        public delegate void PositionReceived(int nUpdates);

        public static event PositionReceived OnLocked;


        private void Start()
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
            //-----------

            //ROSConnection.GetOrCreateInstance().Subscribe<RosState>("m545_state", UpdateState);



            Debug.Log("Bodies ready");
        }

        /*private void Update()
        {
            if (!ROSConnection.GetOrCreateInstance().HasSubscriber("m545_state"))
            {
                Debug.Log("Had to create instance");

                ROSConnection.GetOrCreateInstance().Subscribe<RosState>("m545_state", UpdateState);
            }
        }*/

        private int nPositions = 20;

        public void UpdateState(RosState state)
        {

            //------------ Chassis orientation -------------------
            //ArticulationDrive chassis_x = chassis.xDrive;
            // ArticulationDrive chassis_y = chassis.yDrive;
            //ArticulationDrive chassis_z = chassis.zDrive;

            //chassis_x.target = -Mathf.Rad2Deg * (float)state.chassis_pose.orientation.z+amplitude; // Warning x, z up-front inverted
            //chassis_y.target = Mathf.Rad2Deg * (float)state.chassis_pose.orientation.y;   
            //chassis_z.target = Mathf.Rad2Deg * (float)state.chassis_pose.orientation.x;

            //chassis.xDrive = chassis_x;
            //chassis.yDrive = chassis_y;
            //chassis.zDrive = chassis_z;

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
        }

    }

