/*
 * main.c (df_microwave)
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

/* User-developed modules */
#include "system.h"
#include "display.h"
#include "timer.h"
#include "keypad.h"
#include "door_sensor.h"

///////////////////
// USER SETTINGS //
///////////////////

/* The cooking time as a character string
 * This should be specified always in the four-digit form "YY:YY".
 */

char cookTime[] = "01:72";


/////////////////////////////////
// Main code (no need to edit) //
/////////////////////////////////

int main(void)
{
    /* Stop Watchdog */
    MAP_WDT_A_holdTimer();

    /* Configure the system architecture
     * (do this before setting anything else up)
     */
    System_setup();

    /* Setup all the modules we need
     * - Display
     * - Timer
     * - Door sensor
     */
    Display_setup();
    Timer_setup();
    DoorSensor_setup();

    /* Start the system so any interrupts can be processed */
    System_start();

    while(1){
        /* If the processor was woken up because of an event,
         * run the microwave behavior to handle the event
         */
        runMicrowaveBehavior(false);

        /* Put the processor to sleep until an event generates an interrupt */
        MAP_PCM_gotoLPM0InterruptSafe();
    }
}
