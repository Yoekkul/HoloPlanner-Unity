// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\ColorRGBA.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
float RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__read_field_r(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void std_msgs__msg__ColorRGBA__write_field_r(void *, float);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
float RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__read_field_g(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void std_msgs__msg__ColorRGBA__write_field_g(void *, float);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
float RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__read_field_b(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void std_msgs__msg__ColorRGBA__write_field_b(void *, float);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
float RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__read_field_a(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void std_msgs__msg__ColorRGBA__write_field_a(void *, float);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_CDECL std_msgs__msg__ColorRGBA__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_COLORRGBA_H
