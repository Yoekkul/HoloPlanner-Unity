// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from nav_msgs:msg\Path.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_H
#define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT __declspec(dllexport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_IMPORT __declspec(dllimport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
const void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__get_typesupport();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__destroy_native_message(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__get_field_header_HANDLE(void *);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__get_field_poses_message(void *, int);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
int RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__getsize_sequence_field_poses_message();
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
int RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__resize_sequence_field_poses_message(void *, int);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_CDECL nav_msgs__msg__Path__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_PATH_H
