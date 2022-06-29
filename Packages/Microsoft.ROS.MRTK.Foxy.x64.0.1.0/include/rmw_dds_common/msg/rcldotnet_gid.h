// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from rmw_dds_common:msg\Gid.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_H
#define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT __declspec(dllexport)
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_IMPORT __declspec(dllimport)
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_IMPORT
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_IMPORT
    #define RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
void * RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__create_native_message();

RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
const void * RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__get_typesupport();

RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
void * RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__create_native_message();

RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
void RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__destroy_native_message(void *);

RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
void * RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__get_field_data_message(void *, int);
RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
int RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__getsize_array_field_data_message();

RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
void rmw_dds_common__msg__Gid__write_field_data(void *, uint8_t);
RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
uint8_t RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__read_field_data(void *);


RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_EXPORT
void RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_CDECL rmw_dds_common__msg__Gid__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_RMW_DDS_COMMON_RMW_DDS_COMMON_MSG_GID_H
