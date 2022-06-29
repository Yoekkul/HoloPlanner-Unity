//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Mediator
{
    [Serializable]
    public class GetScaledGridMapRequest : Message
    {
        public const string k_RosMessageName = "mediator/GetScaledGridMap";
        public override string RosMessageName => k_RosMessageName;

        //  Resolution in [meters/cell]     -> ex:  0.0345919
        public double resolution;

        public GetScaledGridMapRequest()
        {
            this.resolution = 0.0;
        }

        public GetScaledGridMapRequest(double resolution)
        {
            this.resolution = resolution;
        }

        public static GetScaledGridMapRequest Deserialize(MessageDeserializer deserializer) => new GetScaledGridMapRequest(deserializer);

        private GetScaledGridMapRequest(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.resolution);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.resolution);
        }

        public override string ToString()
        {
            return "GetScaledGridMapRequest: " +
            "\nresolution: " + resolution.ToString();
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
