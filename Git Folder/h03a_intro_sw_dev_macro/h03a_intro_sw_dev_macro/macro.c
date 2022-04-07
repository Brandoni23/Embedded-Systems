/*****************************************************************************
* Product: Basic polling and response demonstration (macro C style)
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

void main(void)
{

    /* Stop Watchdog timer */
    WDTCTL = WDTPW | WDTHOLD;

    /* Set PIN2.2 (blue on RGB LED) to output */
    P2DIR = P2DIR | BIT2;

    /* Set PIN3.6 (voltage to button) to output */
    P3DIR = P3DIR | BIT6;

    /* Set PIN3.7 (button detect) to input */
    P3DIR = P3DIR & ~(BIT7);

    /* Pass a voltage to the keypad button */
    P3OUT = P3OUT | BIT6;

    /* Super Loop */
    while(1)
    {
        /* If button is in down position --> turn blue LED on */
        if(BIT7 & P3IN)
        {
            P2OUT = P2OUT | (BIT2);
        }

        /* Else --> turn blue LED off */
        else
        {
            P2OUT = P2OUT & ~(BIT2);
        }
    }

}
