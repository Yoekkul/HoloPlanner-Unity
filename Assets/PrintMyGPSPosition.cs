using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrintMyGPSPosition : MonoBehaviour {
    public GPStoObjectConverter converter;

    // Update is called once per frame
    void Update()
    {
        Vector3 res = converter.PositionToGNSS((this.transform));
        if (res != Vector3.zero) {
            Debug.Log(res);
        }
    }
}
