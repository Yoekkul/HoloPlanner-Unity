// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from test_msgs:msg\WStrings.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_H
#define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
const void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__get_typesupport();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__destroy_native_message(void *);

// TODO: Unicode types are not supported
// TODO: Unicode types are not supported
// TODO: Unicode types are not supported
// TODO: Unicode types are not supported
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__get_field_array_of_wstrings_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__getsize_array_field_array_of_wstrings_message();


// TODO: sequences of this type not yet supported
// TODO: sequences of this type not yet supported

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_CDECL test_msgs__msg__WStrings__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_WSTRINGS_H
