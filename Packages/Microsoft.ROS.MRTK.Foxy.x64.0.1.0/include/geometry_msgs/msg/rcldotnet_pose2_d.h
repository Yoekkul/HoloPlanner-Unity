// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from geometry_msgs:msg\Pose2D.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_H
#define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT __declspec(dllexport)
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_IMPORT __declspec(dllimport)
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_IMPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_IMPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__create_native_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
const void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__get_typesupport();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__create_native_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__destroy_native_message(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
double RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__read_field_x(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void geometry_msgs__msg__Pose2D__write_field_x(void *, double);
RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
double RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__read_field_y(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void geometry_msgs__msg__Pose2D__write_field_y(void *, double);
RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
double RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__read_field_theta(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void geometry_msgs__msg__Pose2D__write_field_theta(void *, double);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_EXPORT
void RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_CDECL geometry_msgs__msg__Pose2D__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_POSE2D_H
