// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\Header.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__get_field_stamp_HANDLE(void *);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
char * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__read_field_frame_id(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
void std_msgs__msg__Header__write_field_frame_id(void *, char *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_CDECL std_msgs__msg__Header__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_HEADER_H
