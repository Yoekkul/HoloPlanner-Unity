// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from tf2_msgs:msg\TF2Error.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_H
#define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_IMPORT
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_IMPORT
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__create_native_message();

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
const void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__get_typesupport();

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__create_native_message();

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
void RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__destroy_native_message(void *);

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
uint8_t RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__read_field_error(void *);

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
void tf2_msgs__msg__TF2Error__write_field_error(void *, uint8_t);
RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
char * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__read_field_error_string(void *);

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
void tf2_msgs__msg__TF2Error__write_field_error_string(void *, char *);

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_EXPORT
void RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_CDECL tf2_msgs__msg__TF2Error__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TF2ERROR_H
