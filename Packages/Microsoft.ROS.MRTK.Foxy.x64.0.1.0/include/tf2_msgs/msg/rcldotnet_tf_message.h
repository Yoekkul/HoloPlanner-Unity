// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from tf2_msgs:msg\TFMessage.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_H
#define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_IMPORT
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_IMPORT
    #define RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__create_native_message();

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
const void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__get_typesupport();

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__create_native_message();

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
void RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__destroy_native_message(void *);

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
void * RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__get_field_transforms_message(void *, int);
RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
int RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__getsize_sequence_field_transforms_message();
RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
int RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__resize_sequence_field_transforms_message(void *, int);

RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_EXPORT
void RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_CDECL tf2_msgs__msg__TFMessage__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TF2_MSGS_TF2_MSGS_MSG_TFMESSAGE_H
