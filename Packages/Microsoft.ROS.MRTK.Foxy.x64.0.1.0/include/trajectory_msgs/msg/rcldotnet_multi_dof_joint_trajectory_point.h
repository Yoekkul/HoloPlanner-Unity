// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from trajectory_msgs:msg\MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_H
#define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_IMPORT
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_IMPORT
    #define RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__create_native_message();

RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
const void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_typesupport();

RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__create_native_message();

RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__destroy_native_message(void *);

RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_field_transforms_message(void *, int);
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
int RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__getsize_sequence_field_transforms_message();
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
int RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__resize_sequence_field_transforms_message(void *, int);
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_field_velocities_message(void *, int);
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
int RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__getsize_sequence_field_velocities_message();
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
int RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__resize_sequence_field_velocities_message(void *, int);
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_field_accelerations_message(void *, int);
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
int RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__getsize_sequence_field_accelerations_message();
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
int RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__resize_sequence_field_accelerations_message(void *, int);
RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void * RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__get_field_time_from_start_HANDLE(void *);

RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_EXPORT
void RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_CDECL trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TRAJECTORY_MSGS_TRAJECTORY_MSGS_MSG_MULTIDOFJOINTTRAJECTORYPOINT_H
