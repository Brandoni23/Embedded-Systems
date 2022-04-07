/*****************************************************************************
* Product: Basic polling and response demonstration (TI driver library style)
* Version: 0.3
* Updated: Feb 19, 2020
*
* Authors: Philip Asare, Isabelle Taylor
*
* Copyright (C) 2019-2020 Philip Asare, Isabelle Taylor. All rights reserved.
*               See TI_COPYRIGHT
*
* Contacts:
*           Philip Asare (pkda001@bucknell.edu)
*           Isabelle Taylor (iet001@bucknell.edu)
*****************************************************************************/

/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    /* Stop Watchdog  timer */
    MAP_WDT_A_holdTimer();

    /* Set PIN2.0 (red on RGB LED) to output */
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P2, GPIO_PIN0);

    /* Set PIN3.7 (voltage to button) to output */
    MAP_GPIO_setAsOutputPin(GPIO_PORT_P3, GPIO_PIN7);

    /* Set PIN3.6 (button detect) to input */
    MAP_GPIO_setAsInputPin(GPIO_PORT_P3, GPIO_PIN6);

    /* Pass a voltage to the keypad button */
    MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P3, GPIO_PIN7);

    /* Super Loop */
    while(1)
    {
        /* If button is in down position --> turn red LED on */
        if(GPIO_INPUT_PIN_LOW \
           == MAP_GPIO_getInputPinValue(GPIO_PORT_P3, GPIO_PIN6))
        {
            MAP_GPIO_setOutputLowOnPin(GPIO_PORT_P2, GPIO_PIN0);
        }
        /* Else --> turn red LED off */
        else
        {
            MAP_GPIO_setOutputHighOnPin(GPIO_PORT_P2, GPIO_PIN0);
        }
    }
}
