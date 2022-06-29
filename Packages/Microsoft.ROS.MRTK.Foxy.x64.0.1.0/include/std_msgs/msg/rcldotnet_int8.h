// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\Int8.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL std_msgs__msg__Int8__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL std_msgs__msg__Int8__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL std_msgs__msg__Int8__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL std_msgs__msg__Int8__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
int8_t RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL std_msgs__msg__Int8__read_field_data(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
void std_msgs__msg__Int8__write_field_data(void *, int8_t);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_CDECL std_msgs__msg__Int8__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_INT8_H
