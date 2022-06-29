// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from rcl_interfaces:msg\SetParametersResult.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_H
#define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT __declspec(dllexport)
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_IMPORT __declspec(dllimport)
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_IMPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_IMPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__create_native_message();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
const void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__get_typesupport();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__create_native_message();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
void RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__destroy_native_message(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
bool RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__read_field_successful(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
void rcl_interfaces__msg__SetParametersResult__write_field_successful(void *, bool);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
char * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__read_field_reason(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
void rcl_interfaces__msg__SetParametersResult__write_field_reason(void *, char *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_EXPORT
void RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_CDECL rcl_interfaces__msg__SetParametersResult__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_SETPARAMETERSRESULT_H