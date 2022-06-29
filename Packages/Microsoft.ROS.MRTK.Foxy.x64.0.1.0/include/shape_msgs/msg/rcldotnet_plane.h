// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from shape_msgs:msg\Plane.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_H
#define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
const void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__get_typesupport();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__destroy_native_message(void *);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__get_field_coef_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__getsize_array_field_coef_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
void shape_msgs__msg__Plane__write_field_coef(void *, double);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
double RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__read_field_coef(void *);


RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_CDECL shape_msgs__msg__Plane__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_PLANE_H
