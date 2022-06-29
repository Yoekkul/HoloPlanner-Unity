// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\MultiArrayDimension.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
char * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__read_field_label(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void std_msgs__msg__MultiArrayDimension__write_field_label(void *, char *);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
uint32_t RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__read_field_size(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void std_msgs__msg__MultiArrayDimension__write_field_size(void *, uint32_t);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
uint32_t RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__read_field_stride(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void std_msgs__msg__MultiArrayDimension__write_field_stride(void *, uint32_t);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_CDECL std_msgs__msg__MultiArrayDimension__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_MULTIARRAYDIMENSION_H
