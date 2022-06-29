// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from nav_msgs:msg\GridCells.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_H
#define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT __declspec(dllexport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_IMPORT __declspec(dllimport)
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_IMPORT
    #define RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
const void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__get_typesupport();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__create_native_message();

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__destroy_native_message(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__get_field_header_HANDLE(void *);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
float RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__read_field_cell_width(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void nav_msgs__msg__GridCells__write_field_cell_width(void *, float);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
float RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__read_field_cell_height(void *);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void nav_msgs__msg__GridCells__write_field_cell_height(void *, float);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void * RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__get_field_cells_message(void *, int);
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
int RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__getsize_sequence_field_cells_message();
RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
int RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__resize_sequence_field_cells_message(void *, int);

RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_EXPORT
void RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_CDECL nav_msgs__msg__GridCells__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_NAV_MSGS_NAV_MSGS_MSG_GRIDCELLS_H
