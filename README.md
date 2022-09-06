**This is the client part of a larger project. The remaining documentation can be found here: https://github.com/Yoekkul/Docs-MR-remote-for-HEAP**

# HoloPlanner Unity client
The project is located within the `HoloLight` Unity scene (the other scenes are kept as personal reminder of the path taken to reach the final version).

The objects within the scene are setup with the following hierarchy:
* MixedRealityToolkit: Used to setup [Microsofts MRTK](https://docs.microsoft.com/en-us/windows/mixed-reality/mrtk-unity/mrtk2/?view=mrtkunity-2022-05). This handles the MR headset
* 02_ROSConnections: Sends and receives messages from ROS
* 03_WLT: Aligns the virtual and physical scene throught the use of QR codes on the excavator
* 04_Models: Holds the models for the excavator and the terrain
* 05_PoseMarkers: Contains two markers, which serve as target positions when moving the excavator showel via Inverse Kinematics
* 07_HandMenu: The menu appears next to the raised hand (palm towards the user). It allows setting the Pose Markers, Toggling the visibility of the cab and Setting mesh-editing nodes.
* 99_InstantiatedPrefabs: This contains prefabs which have values already instantiated. (Used to set the markers for terrasin editing)
