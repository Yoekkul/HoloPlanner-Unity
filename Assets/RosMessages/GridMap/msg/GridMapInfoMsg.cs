//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;
using RosMessageTypes.Std;

namespace RosMessageTypes.GridMap
{
    [Serializable]
    public class GridMapInfoMsg : Message
    {
        public const string k_RosMessageName = "grid_map_msgs/GridMapInfo";
        public override string RosMessageName => k_RosMessageName;

        //  Header (time and frame)
        public HeaderMsg header;
        //  Resolution of the grid [m/cell].
        public double resolution;
        //  Length in x-direction [m].
        public double length_x;
        //  Length in y-direction [m].
        public double length_y;
        //  Pose of the grid map center in the frame defined in `header` [m].
        public Geometry.PoseMsg pose;

        public GridMapInfoMsg()
        {
            this.header = new HeaderMsg();
            this.resolution = 0.0;
            this.length_x = 0.0;
            this.length_y = 0.0;
            this.pose = new Geometry.PoseMsg();
        }

        public GridMapInfoMsg(HeaderMsg header, double resolution, double length_x, double length_y, Geometry.PoseMsg pose)
        {
            this.header = header;
            this.resolution = resolution;
            this.length_x = length_x;
            this.length_y = length_y;
            this.pose = pose;
        }

        public static GridMapInfoMsg Deserialize(MessageDeserializer deserializer) => new GridMapInfoMsg(deserializer);

        private GridMapInfoMsg(MessageDeserializer deserializer)
        {
            this.header = HeaderMsg.Deserialize(deserializer);
            deserializer.Read(out this.resolution);
            deserializer.Read(out this.length_x);
            deserializer.Read(out this.length_y);
            this.pose = Geometry.PoseMsg.Deserialize(deserializer);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.header);
            serializer.Write(this.resolution);
            serializer.Write(this.length_x);
            serializer.Write(this.length_y);
            serializer.Write(this.pose);
        }

        public override string ToString()
        {
            return "GridMapInfoMsg: " +
            "\nheader: " + header.ToString() +
            "\nresolution: " + resolution.ToString() +
            "\nlength_x: " + length_x.ToString() +
            "\nlength_y: " + length_y.ToString() +
            "\npose: " + pose.ToString();
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
