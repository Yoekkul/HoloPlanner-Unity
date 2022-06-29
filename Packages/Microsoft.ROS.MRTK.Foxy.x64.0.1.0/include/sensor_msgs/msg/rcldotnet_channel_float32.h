// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from sensor_msgs:msg\ChannelFloat32.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_H
#define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
const void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__get_typesupport();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__destroy_native_message(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
char * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__read_field_name(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void sensor_msgs__msg__ChannelFloat32__write_field_name(void *, char *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__get_field_values_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__getsize_sequence_field_values_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__resize_sequence_field_values_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void sensor_msgs__msg__ChannelFloat32__write_field_values(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__read_field_values(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_CDECL sensor_msgs__msg__ChannelFloat32__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CHANNELFLOAT32_H