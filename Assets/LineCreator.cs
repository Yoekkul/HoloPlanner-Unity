using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;

public class LineCreator : MonoBehaviour, IMixedRealityInputHandler
{
    public GameObject singleLine;
    public GameObject node;

    private bool isEditMode = true;
    private TubeRenderer _tube = null;
    void Start(){
        
    }

    void Update(){
        
    }

    private void OnEnable() {
        CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputHandler>(this);
    }

    private void OnDisable() {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputHandler>(this);
    }

    public void OnInputUp(InputEventData eventData) {
        
    }

    public void OnInputDown(InputEventData eventData) {
        if (eventData.MixedRealityInputAction.Description == "Select") {
            if (isEditMode) {
                if (_tube == null) {
                    _tube = GameObject.Instantiate(singleLine, this.transform).GetComponent<TubeRenderer>();
                }

                List<Vector3> positions = _tube.GetPositions().ToList();
                positions.Add(eventData.InputSource.Pointers[0].Position);
                
                // Shoot a ray from new position to grid_map (what to do when we are outside grid_map?) 
                //Re-select the ray when clicking on it or one of its nodes
                
                
                _tube.SetPositions(positions.ToArray());

            }
        }
    }
}
