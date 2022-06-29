// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from geometry_msgs:msg\TwistWithCovariance.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_H
#define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_IMPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_IMPORT
    #define RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__create_native_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
const void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__get_typesupport();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__create_native_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__destroy_native_message(void *);

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__get_field_twist_HANDLE(void *);
RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void * RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__get_field_covariance_message(void *, int);
RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
int RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__getsize_array_field_covariance_message();

RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void geometry_msgs__msg__TwistWithCovariance__write_field_covariance(void *, double);
RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
double RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__read_field_covariance(void *);


RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_EXPORT
void RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_CDECL geometry_msgs__msg__TwistWithCovariance__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_GEOMETRY_MSGS_GEOMETRY_MSGS_MSG_TWISTWITHCOVARIANCE_H
