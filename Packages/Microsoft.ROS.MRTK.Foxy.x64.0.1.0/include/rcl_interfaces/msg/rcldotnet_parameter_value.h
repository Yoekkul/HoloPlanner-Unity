// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from rcl_interfaces:msg\ParameterValue.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_H
#define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_IMPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_IMPORT
    #define RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__create_native_message();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
const void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__get_typesupport();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__create_native_message();

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__destroy_native_message(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
uint8_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_type(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_type(void *, uint8_t);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
bool RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_bool_value(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_bool_value(void *, bool);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int64_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_integer_value(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_integer_value(void *, int64_t);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
double RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_double_value(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_double_value(void *, double);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
char * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_string_value(void *);

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_string_value(void *, char *);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__get_field_byte_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__getsize_sequence_field_byte_array_value_message();
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__resize_sequence_field_byte_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_byte_array_value(void *, uint8_t);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
uint8_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_byte_array_value(void *);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__get_field_bool_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__getsize_sequence_field_bool_array_value_message();
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__resize_sequence_field_bool_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_bool_array_value(void *, bool);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
bool RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_bool_array_value(void *);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__get_field_integer_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__getsize_sequence_field_integer_array_value_message();
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__resize_sequence_field_integer_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_integer_array_value(void *, int64_t);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int64_t RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_integer_array_value(void *);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void * RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__get_field_double_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__getsize_sequence_field_double_array_value_message();
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
int RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__resize_sequence_field_double_array_value_message(void *, int);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void rcl_interfaces__msg__ParameterValue__write_field_double_array_value(void *, double);
RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
double RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__read_field_double_array_value(void *);
// TODO: sequences of this type not yet supported

RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_EXPORT
void RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_CDECL rcl_interfaces__msg__ParameterValue__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_RCL_INTERFACES_RCL_INTERFACES_MSG_PARAMETERVALUE_H