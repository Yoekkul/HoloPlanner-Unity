//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;
using RosMessageTypes.Std;

namespace RosMessageTypes.M545
{
    [Serializable]
    public class M545StateMsg : Message
    {
        public const string k_RosMessageName = "m545_msgs/M545State";
        public override string RosMessageName => k_RosMessageName;

        //  M545 state containing minimal set of generalized coordinates and velocites
        public HeaderMsg header;
        //  State status (negative status describes errors)
        public const sbyte STATE_ERROR_SENSOR = -3;
        public const sbyte STATE_ERROR_ESTIMATOR = -2;
        public const sbyte STATE_ERROR_UNKNOWN = -1;
        public const sbyte STATUS_INITIALIZING = 0;
        public const sbyte STATE_OK = 1;
        public sbyte status;
        //  Pose containing:
        //  WorldToChassisInWorldFrame 	W_r_WB
        //  OrientationChassisToWorld		q_WB
        public Geometry.PoseMsg chassis_pose;
        //  Twist containing:
        //  LinearVelocityChassisInChassisFrame 	B_v_B
        //  AngularVelocityChassisInChassisFrame  B_w_B
        public Geometry.TwistMsg chassis_twist;
        //  Joint positions, velocities and torques
        public Sensor.JointStateMsg joints;
        //  Additional frames
        public Geometry.TransformStampedMsg transform_map_to_odom;
        public Geometry.WrenchMsg endeffector_wrench;

        public M545StateMsg()
        {
            this.header = new HeaderMsg();
            this.status = 0;
            this.chassis_pose = new Geometry.PoseMsg();
            this.chassis_twist = new Geometry.TwistMsg();
            this.joints = new Sensor.JointStateMsg();
            this.transform_map_to_odom = new Geometry.TransformStampedMsg();
            this.endeffector_wrench = new Geometry.WrenchMsg();
        }

        public M545StateMsg(HeaderMsg header, sbyte status, Geometry.PoseMsg chassis_pose, Geometry.TwistMsg chassis_twist, Sensor.JointStateMsg joints, Geometry.TransformStampedMsg transform_map_to_odom, Geometry.WrenchMsg endeffector_wrench)
        {
            this.header = header;
            this.status = status;
            this.chassis_pose = chassis_pose;
            this.chassis_twist = chassis_twist;
            this.joints = joints;
            this.transform_map_to_odom = transform_map_to_odom;
            this.endeffector_wrench = endeffector_wrench;
        }

        public static M545StateMsg Deserialize(MessageDeserializer deserializer) => new M545StateMsg(deserializer);

        private M545StateMsg(MessageDeserializer deserializer)
        {
            this.header = HeaderMsg.Deserialize(deserializer);
            deserializer.Read(out this.status);
            this.chassis_pose = Geometry.PoseMsg.Deserialize(deserializer);
            this.chassis_twist = Geometry.TwistMsg.Deserialize(deserializer);
            this.joints = Sensor.JointStateMsg.Deserialize(deserializer);
            this.transform_map_to_odom = Geometry.TransformStampedMsg.Deserialize(deserializer);
            this.endeffector_wrench = Geometry.WrenchMsg.Deserialize(deserializer);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.header);
            serializer.Write(this.status);
            serializer.Write(this.chassis_pose);
            serializer.Write(this.chassis_twist);
            serializer.Write(this.joints);
            serializer.Write(this.transform_map_to_odom);
            serializer.Write(this.endeffector_wrench);
        }

        public override string ToString()
        {
            return "M545StateMsg: " +
            "\nheader: " + header.ToString() +
            "\nstatus: " + status.ToString() +
            "\nchassis_pose: " + chassis_pose.ToString() +
            "\nchassis_twist: " + chassis_twist.ToString() +
            "\njoints: " + joints.ToString() +
            "\ntransform_map_to_odom: " + transform_map_to_odom.ToString() +
            "\nendeffector_wrench: " + endeffector_wrench.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize);
        }
    }
}
