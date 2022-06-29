// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\UInt64.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL std_msgs__msg__UInt64__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL std_msgs__msg__UInt64__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL std_msgs__msg__UInt64__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL std_msgs__msg__UInt64__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
uint64_t RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL std_msgs__msg__UInt64__read_field_data(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
void std_msgs__msg__UInt64__write_field_data(void *, uint64_t);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_CDECL std_msgs__msg__UInt64__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT64_H
