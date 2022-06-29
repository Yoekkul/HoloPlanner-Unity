// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from nav_msgs:msg\MapMetaData.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_H
#define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT __declspec(dllexport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_IMPORT __declspec(dllimport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
const void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__get_typesupport();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__destroy_native_message(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__get_field_map_load_time_HANDLE(void *);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
float RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__read_field_resolution(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void nav_msgs__msg__MapMetaData__write_field_resolution(void *, float);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
uint32_t RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__read_field_width(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void nav_msgs__msg__MapMetaData__write_field_width(void *, uint32_t);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
uint32_t RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__read_field_height(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void nav_msgs__msg__MapMetaData__write_field_height(void *, uint32_t);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__get_field_origin_HANDLE(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_CDECL nav_msgs__msg__MapMetaData__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_MAPMETADATA_H
