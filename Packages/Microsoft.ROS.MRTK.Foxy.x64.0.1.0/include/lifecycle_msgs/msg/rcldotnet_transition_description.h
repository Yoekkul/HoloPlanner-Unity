// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from lifecycle_msgs:msg\TransitionDescription.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_H
#define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT __declspec(dllexport)
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_IMPORT __declspec(dllimport)
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_IMPORT
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_IMPORT
    #define RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__create_native_message();

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
const void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__get_typesupport();

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__create_native_message();

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__destroy_native_message(void *);

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__get_field_transition_HANDLE(void *);
RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__get_field_start_state_HANDLE(void *);
RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void * RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__get_field_goal_state_HANDLE(void *);

RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_EXPORT
void RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_CDECL lifecycle_msgs__msg__TransitionDescription__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_LIFECYCLE_MSGS_LIFECYCLE_MSGS_MSG_TRANSITIONDESCRIPTION_H