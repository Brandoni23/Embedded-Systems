/*****************************************************************************
* Product: Main module for basic concurrency (button interrupts)
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

/* Application Includes */
#include "leds.h"
#include "buttons.h"

int main(void)
{
    /* Stop Watchdog  */
    MAP_WDT_A_holdTimer();

    /* Setup all support functions */
    LEDS_setup();

    /* Setup buttons module */
    Buttons_setup();

    /* Turn off LEDs */
    LEDS_turnOff(LED_ALL);

    /* Enable all interrupts to have the buttons module work */
    MAP_Interrupt_enableMaster();

    while(1)
    {
        MAP_PCM_gotoLPM0InterruptSafe();
    }
}


void Buttons_reportButtonPressed(void){
    /* Check which button caused the interrupt  and react accordingly
     * Toggle corresponding LED if that button is pressed
     */
    if (Buttons_isPressed(Buttons_b1.port, Buttons_b1.pin)
            && Buttons_isPressed(Buttons_b2.port, Buttons_b2.pin)){

        LEDS_toggle(LED_RED | LED_GREEN);

    }
    else if(Buttons_isPressed(Buttons_b1.port, Buttons_b1.pin)){

        LEDS_toggle(LED_RED);

    }
    else if(Buttons_isPressed(Buttons_b2.port, Buttons_b2.pin)){

        LEDS_toggle(LED_GREEN);

    }
}
