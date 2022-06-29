// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from sensor_msgs:msg\PointCloud2.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_H
#define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
const void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__get_typesupport();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__destroy_native_message(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__get_field_header_HANDLE(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_height(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_height(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_width(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_width(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__get_field_fields_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__getsize_sequence_field_fields_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__resize_sequence_field_fields_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
bool RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_is_bigendian(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_is_bigendian(void *, bool);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_point_step(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_point_step(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_row_step(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_row_step(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__get_field_data_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__getsize_sequence_field_data_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__resize_sequence_field_data_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_data(void *, uint8_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
uint8_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_data(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
bool RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__read_field_is_dense(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void sensor_msgs__msg__PointCloud2__write_field_is_dense(void *, bool);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_CDECL sensor_msgs__msg__PointCloud2__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_POINTCLOUD2_H