// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from shape_msgs:msg\Mesh.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_H
#define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_IMPORT
    #define RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
const void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__get_typesupport();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__create_native_message();

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__destroy_native_message(void *);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__get_field_triangles_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__getsize_sequence_field_triangles_message();
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__resize_sequence_field_triangles_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
void * RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__get_field_vertices_message(void *, int);
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__getsize_sequence_field_vertices_message();
RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
int RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__resize_sequence_field_vertices_message(void *, int);

RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_EXPORT
void RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_CDECL shape_msgs__msg__Mesh__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SHAPE_MSGS_SHAPE_MSGS_MSG_MESH_H
