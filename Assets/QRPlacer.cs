using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Microsoft.MixedReality.WorldLocking.Samples.Advanced.QRSpacePins;
using UnityEngine;

public class QRPlacer : MonoBehaviour
{

    public GameObject WLT_Toggle;
    public Transform[] QR_locations;

    public QRSpacePinGroup pinsHolder;

    public void ResetQRLocations() {
        WLT_Toggle.SetActive(false);
        pinsHolder.VirtualMarkers = QR_locations.ToList();
        WLT_Toggle.SetActive(true);
    }

    public void StopReceivingQRCodes() {
        
    }
    
    private void OnExcavatorPositionCreated(int updates) {
        //reset pins with button ????
        
        Debug.Log("Locked after "+updates+" positions received");
        
        
        pinsHolder.VirtualMarkers = QR_locations.ToList();
        
        WLT_Toggle.SetActive(true);
    }


    private void OnEnable() {
        MMPoseUpdater.OnLocked += OnExcavatorPositionCreated;
    }
    
    private void OnDisable() {
        MMPoseUpdater.OnLocked -= OnExcavatorPositionCreated;
    }
}
