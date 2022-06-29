// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from test_msgs:msg\Empty.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_H
#define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL test_msgs__msg__Empty__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
const void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL test_msgs__msg__Empty__get_typesupport();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL test_msgs__msg__Empty__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL test_msgs__msg__Empty__destroy_native_message(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL test_msgs__msg__Empty__read_field_structure_needs_at_least_one_member(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
void test_msgs__msg__Empty__write_field_structure_needs_at_least_one_member(void *, uint8_t);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_CDECL test_msgs__msg__Empty__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_EMPTY_H
