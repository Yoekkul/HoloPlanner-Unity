// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from lifecycle_msgs:msg\State.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_H
#define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_IMPORT
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_IMPORT
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__create_native_message();

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
const void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__get_typesupport();

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__create_native_message();

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
void RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__destroy_native_message(void *);

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
uint8_t RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__read_field_id(void *);

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
void lifecycle_msgs__msg__State__write_field_id(void *, uint8_t);
RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
char * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__read_field_label(void *);

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
void lifecycle_msgs__msg__State__write_field_label(void *, char *);

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_EXPORT
void RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_CDECL lifecycle_msgs__msg__State__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_STATE_H
