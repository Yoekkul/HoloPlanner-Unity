// generated from rosidl_generator_dotnet/resource/idl.h.em
// with input from sensor_msgs:msg\BatteryState.idl
// generated code does not contain a copyright notice
#ifndef RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_H
#define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_H

#if defined(WIN32)
    //  Microsoft
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT __declspec(dllexport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_IMPORT __declspec(dllimport)
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL __cdecl
#elif defined(__GNUC__)
    //  GCC
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT __attribute__((visibility("default")))
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL __attribute__((__cdecl__))
#else
    //  do nothing and hope for the best?
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_IMPORT
    #define RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL
    #pragma warning Unknown dynamic link import/export semantics.
#endif

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
const void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__get_typesupport();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__create_native_message();

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__destroy_native_message(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__get_field_header_HANDLE(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_voltage(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_voltage(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_temperature(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_temperature(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_current(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_current(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_charge(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_charge(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_capacity(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_capacity(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_design_capacity(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_design_capacity(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_percentage(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_percentage(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
uint8_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_power_supply_status(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_power_supply_status(void *, uint8_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
uint8_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_power_supply_health(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_power_supply_health(void *, uint8_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
uint8_t RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_power_supply_technology(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_power_supply_technology(void *, uint8_t);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
bool RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_present(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_present(void *, bool);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__get_field_cell_voltage_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__getsize_sequence_field_cell_voltage_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__resize_sequence_field_cell_voltage_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_cell_voltage(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_cell_voltage(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__get_field_cell_temperature_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__getsize_sequence_field_cell_temperature_message();
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
int RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__resize_sequence_field_cell_temperature_message(void *, int);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_cell_temperature(void *, float);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
float RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_cell_temperature(void *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
char * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_location(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_location(void *, char *);
RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
char * RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__read_field_serial_number(void *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void sensor_msgs__msg__BatteryState__write_field_serial_number(void *, char *);

RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_EXPORT
void RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_CDECL sensor_msgs__msg__BatteryState__destroy_native_message(void * raw_ros_message);

#endif // RCLDOTNET_SENSOR_MSGS_SENSOR_MSGS_MSG_BATTERYSTATE_H
