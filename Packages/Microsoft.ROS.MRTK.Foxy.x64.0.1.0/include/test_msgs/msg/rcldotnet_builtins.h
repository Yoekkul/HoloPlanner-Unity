// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from test_msgs:msg\Builtins.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_H
#define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
const void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__get_typesupport();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__destroy_native_message(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__get_field_duration_value_HANDLE(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__get_field_time_value_HANDLE(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_CDECL test_msgs__msg__Builtins__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BUILTINS_H
