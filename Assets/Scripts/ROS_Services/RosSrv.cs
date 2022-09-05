using UnityEngine;

using RosMessageTypes.Mediator;
using GridMap = RosMessageTypes.GridMap.GridMapMsg;
using Unity.Robotics.ROSTCPConnector;

public class RosSrv : MonoBehaviour
{
    ROSConnection ros;
    public string serviceName = "scale_grid_map";
    private float gridExpirationTime = -1;
    private float poseExpirationTime = -1;

    private MMPoseUpdater poseHandler;
    private GridMapUpdater gridMapHandler;

    private void Start(){
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterRosService<GetScaledGridMapRequest, GetScaledGridMapResponse>(serviceName);
        //ros.RegisterRosService<GetStateServedRequest, GetStateServedResponse>("m545_state_srv");

        gridMapHandler = this.GetComponent<GridMapUpdater>();
        //poseHandler = this.GetComponent<MMPoseUpdater>();
    }
    void SetGridMapCallback(GetScaledGridMapResponse response) {
        gridMapHandler.UpdateGridMap(response);
        gridExpirationTime = -1;
    }

    /*void SetPoseCallBack(GetStateServedResponse response) {
        poseHandler.UpdateState(response.state);
        poseExpirationTime = -1;
    }*/

    float res = 0.1f;
    void Update(){

        if (Time.time > gridExpirationTime) {
            gridExpirationTime = Time.time + 5f; // don't send again for 5 seconds, or until we receive a response
            
            GetScaledGridMapRequest positionServiceRequest = new GetScaledGridMapRequest(res);
            ros.SendServiceMessage<GetScaledGridMapResponse>(serviceName, positionServiceRequest, SetGridMapCallback);
            
        }

        /*if (Time.time > poseExpirationTime) {
            poseExpirationTime = Time.time + 5f;
            ros.SendServiceMessage<GetStateServedResponse>("m545_state_srv", new GetStateServedRequest(),SetPoseCallBack);
        }*/
    }

}
