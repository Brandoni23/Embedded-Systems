/*****************************************************************************
* Product: Basic polling and response demonstration (CMSIS style)
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
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;

    /* Set PIN2.1 (green on RGB LED) to output */
    P2->DIR |= BIT1;

    /* Set PIN3.7 (voltage to button) to output */
    P3->DIR |= BIT7;

    /* Set PIN3.6 (button detect) to input */
    P3->DIR &= ~(BIT6);

    /* Pass a voltage to the keypad button */
    P3->OUT |= BIT7;

    /* Super Loop */
    while(1)
    {
        /* If button is in down position --> turn green LED on */
        if(BIT6 & P3->IN)
        {
            P2->OUT |= BIT1;
        }

        /* Else --> turn green LED off */
        else
        {
            P2->OUT &= ~(BIT1);
        }
    }

}
