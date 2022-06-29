// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from std_msgs:msg\Float64MultiArray.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_H
#define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT __declspec(dllexport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_IMPORT __declspec(dllimport)
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_IMPORT
    #define RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
const void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__get_typesupport();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__create_native_message();

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__destroy_native_message(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__get_field_layout_HANDLE(void *);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void * RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__get_field_data_message(void *, int);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
int RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__getsize_sequence_field_data_message();
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
int RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__resize_sequence_field_data_message(void *, int);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void std_msgs__msg__Float64MultiArray__write_field_data(void *, double);
RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
double RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__read_field_data(void *);

RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_EXPORT
void RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_CDECL std_msgs__msg__Float64MultiArray__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_STD_MSGS_STD_MSGS_MSG_FLOAT64MULTIARRAY_H
