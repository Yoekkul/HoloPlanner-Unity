// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from shape_msgs:msg\MeshTriangle.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_H
#define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
const void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__get_typesupport();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__destroy_native_message(void *);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__get_field_vertex_indices_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__getsize_array_field_vertex_indices_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
void shape_msgs__msg__MeshTriangle__write_field_vertex_indices(void *, uint32_t);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
uint32_t RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__read_field_vertex_indices(void *);


RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_CDECL shape_msgs__msg__MeshTriangle__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESHTRIANGLE_H
