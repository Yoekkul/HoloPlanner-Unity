// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\String.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL std_msgs__msg__String__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL std_msgs__msg__String__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL std_msgs__msg__String__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL std_msgs__msg__String__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
char * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL std_msgs__msg__String__read_field_data(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
void std_msgs__msg__String__write_field_data(void *, char *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_CDECL std_msgs__msg__String__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_STRING_H
