// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from example_interfaces:msg\MultiArrayLayout.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_H
#define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT __declspec(dllexport)
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_IMPORT __declspec(dllimport)
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_IMPORT
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_IMPORT
    #define RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__create_native_message();

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
const void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__get_typesupport();

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__create_native_message();

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
void RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__destroy_native_message(void *);

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
void * RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__get_field_dim_message(void *, int);
RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
int RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__getsize_sequence_field_dim_message();
RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
int RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__resize_sequence_field_dim_message(void *, int);
RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
uint32_t RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__read_field_data_offset(void *);

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
void example_interfaces__msg__MultiArrayLayout__write_field_data_offset(void *, uint32_t);

RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_EXPORT
void RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_CDECL example_interfaces__msg__MultiArrayLayout__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_EXAMPLE_INTERFACES_EXAMPLE_INTERFACES_MSG_MULTIARRAYLAYOUT_H
