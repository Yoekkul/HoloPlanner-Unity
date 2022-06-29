using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.UI;

public class TerrainEditor : MonoBehaviour, IMixedRealityInputHandler
{
    EditMode editMode = EditMode.CreatePoint;
    public float rangeThreshold = 0.5f;

    public GameObject node;
    private GameObject activeNode;

    private MoveAxisConstraint moveConstraint;

    public AudioSource ping;
    public AudioSource buzz;
    //Editing mode:
    /*  - Create point
     *  - Move point
     *  - Delete point
     *  - Disabled
     *  - Link points (setting linear, spline, ...)
     *  
     */

    // If editing mode create point is enabled on select, shoot ray from hand to mesh, spawn point at mesh position
    //On select shoot two rays up, down, if within threshold add point
    // If finger collides with mesh spawn point there
    // Move point: generate vertex at mesh at point position, edit vertices according to mode


    public MeshCollider terrainCollider;

    public void OnInputDown(InputEventData eventData) {
        
        if (eventData.MixedRealityInputAction.Description != "Select") return;
        
        HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, eventData.Handedness, out MixedRealityPose pose);

        switch (editMode) {
            case EditMode.CreatePoint:
                Debug.DrawRay(pose.Position, Vector3.up* rangeThreshold / 2, Color.green,5f);
                Debug.DrawRay(pose.Position, Vector3.down* rangeThreshold / 2, Color.blue, 5f);

                if (Physics.Raycast(pose.Position + new Vector3(0, rangeThreshold / 2, 0), Vector3.down, out RaycastHit hit, rangeThreshold)) {

                    if(activeNode != null) {
                        activeNode.transform.Find("dimArrows").gameObject.SetActive(false);
                        editMode = EditMode.MovePoint; //If creation was succesful we toggle to move mode
                    }
                   
                    //Debug.Log("blam");

                    activeNode = GameObject.Instantiate(node,hit.point, Quaternion.identity, this.transform);
                    
                    ping.Play();
                } else {
                    buzz.Play();
                }
                break;
            case EditMode.MovePoint:                
                foreach(IMixedRealityPointer ptr in eventData.InputSource.Pointers) {
                    if(ptr.Result!= null) {

                        moveConstraint = ptr.Result.CurrentPointerTarget.transform.parent.parent.GetComponent<MoveAxisConstraint>();
                        //x = 1 y = 2 z = 4
                        if (ptr.Result.CurrentPointerTarget.name == "Y") {
                            moveConstraint.ConstraintOnMovement = (AxisFlags)0x05;
                        }else if (ptr.Result.CurrentPointerTarget.name=="X") {
                            moveConstraint.ConstraintOnMovement = (AxisFlags)0x06;
                        } else {
                            moveConstraint.ConstraintOnMovement = (AxisFlags)0x03;
                        }
                    }
                }
                break;
        }
        
    }

    public void OnInputUp(InputEventData eventData) {
        //this.GetComponent<MeshModifier>().AlterFromPoint(new Vector3(1, 1, 1), 0.5f, 5);
    }


    private void OnEnable() {
        CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputHandler>(this);
    }

    private void OnDisable() {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputHandler>(this);
    }

    public void SetActiveNode(GameObject activeNode) {
        this.activeNode = activeNode;
    }
}

enum EditMode {
    CreatePoint,
    MovePoint,
    DeletePoint,
    LinkPoints,
    Disabled
}
