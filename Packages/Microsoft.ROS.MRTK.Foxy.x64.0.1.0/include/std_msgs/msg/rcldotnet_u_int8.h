// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\UInt8.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL std_msgs__msg__UInt8__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL std_msgs__msg__UInt8__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL std_msgs__msg__UInt8__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL std_msgs__msg__UInt8__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
uint8_t RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL std_msgs__msg__UInt8__read_field_data(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
void std_msgs__msg__UInt8__write_field_data(void *, uint8_t);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_CDECL std_msgs__msg__UInt8__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_UINT8_H
