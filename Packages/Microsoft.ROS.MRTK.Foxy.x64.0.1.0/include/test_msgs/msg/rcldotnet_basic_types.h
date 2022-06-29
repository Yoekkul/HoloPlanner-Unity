// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from test_msgs:msg\BasicTypes.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_H
#define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
const void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__get_typesupport();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__destroy_native_message(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
bool RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_bool_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_bool_value(void *, bool);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_byte_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_byte_value(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_char_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_char_value(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
float RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_float32_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_float32_value(void *, float);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
double RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_float64_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_float64_value(void *, double);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
int8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_int8_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_int8_value(void *, int8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_uint8_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_uint8_value(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
int16_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_int16_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_int16_value(void *, int16_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
uint16_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_uint16_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_uint16_value(void *, uint16_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
int32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_int32_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_int32_value(void *, int32_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
uint32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_uint32_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_uint32_value(void *, uint32_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
int64_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_int64_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_int64_value(void *, int64_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
uint64_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__read_field_uint64_value(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void test_msgs__msg__BasicTypes__write_field_uint64_value(void *, uint64_t);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_CDECL test_msgs__msg__BasicTypes__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_BASICTYPES_H
