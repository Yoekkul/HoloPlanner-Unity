// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from rosgraph_msgs:msg\Clock.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_H
#define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT __declspec(dllexport)
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_IMPORT __declspec(dllimport)
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_IMPORT
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_IMPORT
    #define RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
void * RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL rosgraph_msgs__msg__Clock__create_native_message();

RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
const void * RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL rosgraph_msgs__msg__Clock__get_typesupport();

RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
void * RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL rosgraph_msgs__msg__Clock__create_native_message();

RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
void RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL rosgraph_msgs__msg__Clock__destroy_native_message(void *);

RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
void * RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL rosgraph_msgs__msg__Clock__get_field_clock_HANDLE(void *);

RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_EXPORT
void RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_CDECL rosgraph_msgs__msg__Clock__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_ROSGRAPH_MSGS_ROSGRAPH_MSGS_MSG_CLOCK_H
