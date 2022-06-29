// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from shape_msgs:msg\SolidPrimitive.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_H
#define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
const void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__get_typesupport();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__destroy_native_message(void *);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
uint8_t RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__read_field_type(void *);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void shape_msgs__msg__SolidPrimitive__write_field_type(void *, uint8_t);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__get_field_dimensions_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__getsize_sequence_field_dimensions_message();
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__resize_sequence_field_dimensions_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void shape_msgs__msg__SolidPrimitive__write_field_dimensions(void *, double);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
double RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__read_field_dimensions(void *);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_CDECL shape_msgs__msg__SolidPrimitive__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_SOLIDPRIMITIVE_H