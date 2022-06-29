// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from rcl_interfaces:msg\IntegerRange.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_H
#define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_IMPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_IMPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__create_native_message();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
const void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__get_typesupport();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__create_native_message();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__destroy_native_message(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
int64_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__read_field_from_value(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void rcl_interfaces__msg__IntegerRange__write_field_from_value(void *, int64_t);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
int64_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__read_field_to_value(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void rcl_interfaces__msg__IntegerRange__write_field_to_value(void *, int64_t);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
uint64_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__read_field_step(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void rcl_interfaces__msg__IntegerRange__write_field_step(void *, uint64_t);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_EXPORT
void RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_CDECL rcl_interfaces__msg__IntegerRange__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_INTEGERRANGE_H