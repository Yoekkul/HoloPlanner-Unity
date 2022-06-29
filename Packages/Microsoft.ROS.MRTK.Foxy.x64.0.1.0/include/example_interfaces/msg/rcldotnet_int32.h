// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from example_interfaces:msg\Int32.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_H
#define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT __declspec(dllexport)
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_IMPORT __declspec(dllimport)
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_IMPORT
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_IMPORT
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL example_interfaces__msg__Int32__create_native_message();

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
const void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL example_interfaces__msg__Int32__get_typesupport();

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL example_interfaces__msg__Int32__create_native_message();

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
void RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL example_interfaces__msg__Int32__destroy_native_message(void *);

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
int32_t RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL example_interfaces__msg__Int32__read_field_data(void *);

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
void example_interfaces__msg__Int32__write_field_data(void *, int32_t);

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_EXPORT
void RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_CDECL example_interfaces__msg__Int32__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_INT32_H
