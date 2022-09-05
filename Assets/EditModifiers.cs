using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(TerrainWarper))]
public class EditModifiers : MonoBehaviour {
    private Transform _terrainWarperRoot;
    public GameObject cone;

    private bool _deletemode = false;
    
    // Start is called before the first frame update
    void Start() {
        _terrainWarperRoot = this.transform;
    }

    public void AddCone(Transform callerPosition) {
        GameObject.Instantiate(cone, callerPosition.position, Quaternion.identity, _terrainWarperRoot);
    }

    public void SetDeleteMode(bool mode) {
        _deletemode = mode;
    }

    public void RemoveIfDeleteMode(GameObject objectToDelete) {
        if (_deletemode) {
            Destroy(objectToDelete,2f);    
        }
    }
    
    
}
