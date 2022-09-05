using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.WorldLocking.Core;
using UnityEngine;

public class PinMover : SpacePin {
    public Vector3 offset;

    public Transform movementRoot;
    void Update() {
        this.transform.position = movementRoot.position + offset;
        //gameObject.GetComponent<SpacePinOrientable>().Reset();//SetSpongyPosition(this.transform.position);
        gameObject.GetComponent<SpacePinOrientable>().SetSpongyPose(ExtractModelPose());

    }
}
