// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from sensor_msgs:msg\CameraInfo.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_H
#define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
const void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_typesupport();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__destroy_native_message(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_field_header_HANDLE(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_height(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_height(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_width(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_width(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
char * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_distortion_model(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_distortion_model(void *, char *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_field_d_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__getsize_sequence_field_d_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__resize_sequence_field_d_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_d(void *, double);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
double RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_d(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_field_k_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__getsize_array_field_k_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_k(void *, double);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
double RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_k(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_field_r_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__getsize_array_field_r_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_r(void *, double);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
double RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_r(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_field_p_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__getsize_array_field_p_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_p(void *, double);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
double RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_p(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_binning_x(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_binning_x(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
uint32_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__read_field_binning_y(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void sensor_msgs__msg__CameraInfo__write_field_binning_y(void *, uint32_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__get_field_roi_HANDLE(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_CDECL sensor_msgs__msg__CameraInfo__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_CAMERAINFO_H