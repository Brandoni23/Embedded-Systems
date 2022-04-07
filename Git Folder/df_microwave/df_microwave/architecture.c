/*
 * system_config.c
 *
 *  Created on: Apr 27, 2020
 *      Author: pkda001
 */
/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>

/* The GPIO port for the door sensor */
uint_fast8_t DoorSensor_port = GPIO_PORT_P1;

/* The GPIO pin on the port for the door sensor */
uint_fast16_t DoorSensor_pin = GPIO_PIN6;

/* The GPIO pin interrupt macro for the selected port */
uint32_t DoorSensor_interrupt = INT_PORT1;


