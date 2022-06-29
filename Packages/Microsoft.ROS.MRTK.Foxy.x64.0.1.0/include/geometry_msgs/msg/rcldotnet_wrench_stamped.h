// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from geometry_msgs:msg\WrenchStamped.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_H
#define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT __declspec(dllexport)
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_IMPORT __declspec(dllimport)
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_IMPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_IMPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__create_native_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
const void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__get_typesupport();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__create_native_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
void RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__destroy_native_message(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__get_field_header_HANDLE(void *);
RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__get_field_wrench_HANDLE(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_EXPORT
void RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_CDECL geometry_msgs__msg__WrenchStamped__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_WRENCHSTAMPED_H