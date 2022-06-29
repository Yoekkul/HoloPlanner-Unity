// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from action_msgs:msg\GoalInfo.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_H
#define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT __declspec(dllexport)
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_IMPORT __declspec(dllimport)
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_IMPORT
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_IMPORT
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__create_native_message();

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
const void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__get_typesupport();

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__create_native_message();

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
void RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__destroy_native_message(void *);

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__get_field_goal_id_HANDLE(void *);
RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__get_field_stamp_HANDLE(void *);

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_EXPORT
void RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_CDECL action_msgs__msg__GoalInfo__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALINFO_H
