// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from sensor_msgs:msg\MultiEchoLaserScan.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_H
#define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
const void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__get_typesupport();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__destroy_native_message(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__get_field_header_HANDLE(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_angle_min(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_angle_min(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_angle_max(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_angle_max(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_angle_increment(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_angle_increment(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_time_increment(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_time_increment(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_scan_time(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_scan_time(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_range_min(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_range_min(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__read_field_range_max(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void sensor_msgs__msg__MultiEchoLaserScan__write_field_range_max(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__get_field_ranges_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__getsize_sequence_field_ranges_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__resize_sequence_field_ranges_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__get_field_intensities_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__getsize_sequence_field_intensities_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__resize_sequence_field_intensities_message(void *, int);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_CDECL sensor_msgs__msg__MultiEchoLaserScan__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_MULTIECHOLASERSCAN_H
