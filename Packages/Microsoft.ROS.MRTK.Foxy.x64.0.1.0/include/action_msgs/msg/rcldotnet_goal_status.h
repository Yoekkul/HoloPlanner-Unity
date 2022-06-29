// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from action_msgs:msg\GoalStatus.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_H
#define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT __declspec(dllexport)
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_IMPORT __declspec(dllimport)
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_IMPORT
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_IMPORT
    #define RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__create_native_message();

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
const void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__get_typesupport();

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__create_native_message();

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
void RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__destroy_native_message(void *);

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
void * RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__get_field_goal_info_HANDLE(void *);
RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
int8_t RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__read_field_status(void *);

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
void action_msgs__msg__GoalStatus__write_field_status(void *, int8_t);

RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_EXPORT
void RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_CDECL action_msgs__msg__GoalStatus__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_ACTION_MSGS_ACTION_MSGS_MSG_GOALSTATUS_H
