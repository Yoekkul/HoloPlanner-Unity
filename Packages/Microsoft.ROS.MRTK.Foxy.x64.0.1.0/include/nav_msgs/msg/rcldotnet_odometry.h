// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from nav_msgs:msg\Odometry.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_H
#define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT __declspec(dllexport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_IMPORT __declspec(dllimport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
const void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__get_typesupport();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__destroy_native_message(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__get_field_header_HANDLE(void *);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
char * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__read_field_child_frame_id(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void nav_msgs__msg__Odometry__write_field_child_frame_id(void *, char *);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__get_field_pose_HANDLE(void *);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__get_field_twist_HANDLE(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_CDECL nav_msgs__msg__Odometry__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_ODOMETRY_H
