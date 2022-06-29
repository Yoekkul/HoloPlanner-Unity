// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from test_msgs:msg\UnboundedSequences.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_H
#define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT __declspec(dllexport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_IMPORT __declspec(dllimport)
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_IMPORT
    #define RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
const void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_typesupport();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__create_native_message();

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__destroy_native_message(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_bool_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_bool_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_bool_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_bool_values(void *, bool);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
bool RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_bool_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_byte_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_byte_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_byte_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_byte_values(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_byte_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_char_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_char_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_char_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_char_values(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_char_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_float32_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_float32_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_float32_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_float32_values(void *, float);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
float RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_float32_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_float64_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_float64_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_float64_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_float64_values(void *, double);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
double RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_float64_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int8_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int8_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int8_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int8_values(void *, int8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int8_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint8_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint8_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint8_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint8_values(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint8_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int16_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int16_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int16_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int16_values(void *, int16_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int16_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int16_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint16_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint16_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint16_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint16_values(void *, uint16_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint16_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint16_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int32_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int32_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int32_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int32_values(void *, int32_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int32_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint32_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint32_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint32_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint32_values(void *, uint32_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint32_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int64_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int64_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int64_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int64_values(void *, int64_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int64_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int64_values(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint64_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint64_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint64_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint64_values(void *, uint64_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint64_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint64_values(void *);
// TODO: sequences of this type not yet supported
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_basic_types_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_basic_types_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_basic_types_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_constants_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_constants_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_constants_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_defaults_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_defaults_values_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_defaults_values_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_bool_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_bool_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_bool_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_bool_values_default(void *, bool);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
bool RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_bool_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_byte_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_byte_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_byte_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_byte_values_default(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_byte_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_char_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_char_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_char_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_char_values_default(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_char_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_float32_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_float32_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_float32_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_float32_values_default(void *, float);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
float RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_float32_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_float64_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_float64_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_float64_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_float64_values_default(void *, double);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
double RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_float64_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int8_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int8_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int8_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int8_values_default(void *, int8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int8_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint8_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint8_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint8_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint8_values_default(void *, uint8_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint8_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint8_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int16_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int16_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int16_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int16_values_default(void *, int16_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int16_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int16_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint16_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint16_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint16_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint16_values_default(void *, uint16_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint16_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint16_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int32_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int32_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int32_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int32_values_default(void *, int32_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int32_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint32_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint32_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint32_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint32_values_default(void *, uint32_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint32_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_int64_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_int64_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_int64_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_int64_values_default(void *, int64_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int64_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_int64_values_default(void *);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void * RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__get_field_uint64_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__getsize_sequence_field_uint64_values_default_message();
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__resize_sequence_field_uint64_values_default_message(void *, int);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_uint64_values_default(void *, uint64_t);
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
uint64_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_uint64_values_default(void *);
// TODO: sequences of this type not yet supported
RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
int32_t RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__read_field_alignment_check(void *);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void test_msgs__msg__UnboundedSequences__write_field_alignment_check(void *, int32_t);

RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_EXPORT
void RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_CDECL test_msgs__msg__UnboundedSequences__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_TEST_MSGS_TEST_MSGS_MSG_UNBOUNDEDSEQUENCES_H
