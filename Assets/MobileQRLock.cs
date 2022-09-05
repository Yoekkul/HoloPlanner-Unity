using System;
using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.QR;
using Microsoft.MixedReality.WorldLocking.Core;
using Microsoft.MixedReality.WorldLocking.Samples.Advanced.QRSpacePins;
using UnityEngine;

using Microsoft.MixedReality.WorldLocking.Core;
using Microsoft.MixedReality.WorldLocking.Examples;

public class MobileQRLock : SpacePinOrientable {
    
    private QRCodeMiniManager miniManager;
    private QRSpatialCoord coord;
    void Start() {
        CheckComponents();
    }

    public void Update() {
        //FIXME This is only for debug
    }

    private void OnEnable() {
        CheckComponents();
        
        SetUpCallbacks();
    }
    private void OnDisable()
    {
        TearDownCallbacks();
    }

    private void CheckComponents()
    {
        if (miniManager == null)
        {
            miniManager = GetComponent<QRCodeMiniManager>();
        }
        coord = new QRSpatialCoord();
        //TODO check reason for orienter
    }
    
    private void SetUpCallbacks()
    {
        Debug.Assert(miniManager != null, "Expected required component QRCodeMiniManager");

        //miniManager.OnQRAdded += OnQRCodeAdded;
        miniManager.OnQRUpdated += OnQRCodeUpdated;
        //miniManager.OnQRRemoved += OnQRCodeRemoved;
        //miniManager.OnQREnumerated += OnQRCodeEnumerated;
        //SimpleConsole.AddLine(trace, "Callbacks SetUp");
    }
    
    private void TearDownCallbacks()
    {
       // miniManager.OnQRAdded -= OnQRCodeAdded;
        miniManager.OnQRUpdated -= OnQRCodeUpdated;
        //miniManager.OnQRRemoved -= OnQRCodeRemoved;
        //miniManager.OnQREnumerated -= OnQRCodeEnumerated;
        miniManager = null;
        //SimpleConsole.AddLine(trace, "Callbacks torn down");
    }
    
    
    /// <summary>
    /// Process a newly updated QR code.
    /// </summary>
    /// <param name="qrCode">The qr code to process.</param>
    private void OnQRCodeUpdated(QRCode qrCode) {
        
        if (qrCode.Data.Contains("4")) {
            coord.SpatialNodeId = qrCode.SpatialGraphNodeId;
            SetSpongyPose(coord.CurrentPose);
        }
    }
}
