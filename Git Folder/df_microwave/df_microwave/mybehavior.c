/*
 * mylogic.c
 *
 *  Created on: Apr 29, 2020
 *      Author: pkda001
 */

/* DriverLib Includes */
#include <behavior.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

#include <string.h>

/* User-developed modules */
#include "display.h"
#include "timer.h"
#include "keypad.h"
#include "door_sensor.h"

extern char cookTime[];

/*
 * This is the file where you implement your own logic
 *
 * YOU MUST AT LEAST IMPLEMENT THE FOLLOWING FUNCTIONS
 *
 *      void runMicrowaveBehavior(bool keypadOn)
 *          This is where some of the main logic of the microwave runs.
 *
 *      void Timer_handleTimeout(void)
 *          This function will be called every second as long as the timer
 *          is running. You can implement some things to happen every second
 *          here.
 *
 *      void DoorSensor_reportDoorOpened(void)
 *          This function will be called whenever the switch for the door
 *          sensor opens (i.e. there is a high-to-low transition on the pin for
 *          the door sensor)
 */
