/*****************************************************************************
* Product: LEDs module for complex concurrency (QPC introduction)
* Version: 0.2
* Updated: Feb 20, 2019
*
* Authors: Philip Asare, Reed Evans
*
* Copyright (C) 2019 Philip Asare, Reed Evans. See TI_COPYRIGHT
*               All rights reserved.
*
*
* Contacts:
*           Philip Asare (pkda001@bucknell.edu)
*           Reed Evans (rae018@bucknell.edu)
*****************************************************************************/

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/* Module Includes */
#include "leds.h"

void LEDS_setup(void){
    /* setup R,B,G LEDs */
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P2, (GPIO_PIN0 | GPIO_PIN1 | GPIO_PIN2));
}
/*..........................................................................*/
void LEDS_toggle(uint16_t LEDS){
    MAP_GPIO_toggleOutputOnPin(GPIO_PORT_P2, LEDS);
}
/*..........................................................................*/
void LEDS_turnOn(uint16_t LEDS){
    MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P2, LEDS);
}
/*..........................................................................*/
void LEDS_turnOff(uint16_t LEDS){
    MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, LEDS);
}
/*..........................................................................*/
