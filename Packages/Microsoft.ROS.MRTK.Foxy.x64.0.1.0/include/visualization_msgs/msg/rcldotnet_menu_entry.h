// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from visualization_msgs:msg\MenuEntry.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_H
#define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT __declspec(dllexport)
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_IMPORT __declspec(dllimport)
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_IMPORT
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_IMPORT
    #define RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void * RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__create_native_message();

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
const void * RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__get_typesupport();

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void * RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__create_native_message();

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__destroy_native_message(void *);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
uint32_t RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__read_field_id(void *);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void visualization_msgs__msg__MenuEntry__write_field_id(void *, uint32_t);
RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
uint32_t RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__read_field_parent_id(void *);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void visualization_msgs__msg__MenuEntry__write_field_parent_id(void *, uint32_t);
RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
char * RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__read_field_title(void *);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void visualization_msgs__msg__MenuEntry__write_field_title(void *, char *);
RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
char * RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__read_field_command(void *);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void visualization_msgs__msg__MenuEntry__write_field_command(void *, char *);
RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
uint8_t RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__read_field_command_type(void *);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void visualization_msgs__msg__MenuEntry__write_field_command_type(void *, uint8_t);

RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_EXPORT
void RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_CDECL visualization_msgs__msg__MenuEntry__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_VISUALIZATION_MSGS_VISUALIZATION_MSGS_MSG_MENUENTRY_H
