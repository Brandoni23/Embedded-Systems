/*****************************************************************************
* Product: Basic polling and response demonstration ('pure'/low-level C style)
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
void main(void)
{

    /* Stop Watchdog timer */
    (*((volatile unsigned short *)(0x4000480C))) = ((unsigned short)0x5A00) \
                                                    | ((unsigned short)0x0080);

    /* Set PIN1.0 (plain red LED) to output */
    (*((volatile unsigned char *)(0x40004C05))) = \
            (*((volatile unsigned char *)(0x40004C04))) |= (unsigned short)(0x0001);

    /* Set PIN3.6 (voltage to button) to output */
    (*((volatile unsigned char *)(0x40004C24))) = \
            (*((volatile unsigned char *)(0x40004C24))) |= (unsigned short)(0x0040);

    /* Set PIN3.7 (button detect) to input */
    (*((volatile unsigned char *)(0x40004C24))) = \
            (*((volatile unsigned char *)(0x40004C24))) &= ~((unsigned short)(0x0080));

    /* Pass a voltage to the keypad button */
    (*((volatile unsigned char *)(0x40004C22))) = \
            (*((volatile unsigned char *)(0x40004C22))) |= (unsigned short)(0x0040);

    /* Super Loop */
    while(1)
    {
        /* If button is in down position --> turn plain red LED on */
        if((unsigned short)(0x0080) \
           & (*((volatile unsigned char *)(0x40004C20))))
        {
            (*((volatile unsigned char *)(0x40004C02))) = \
                    (*((volatile unsigned char *)(0x40004C02))) \
                                       |= ((unsigned short)(0x0001));
        }

        /* Else --> turn plain red LED off */
        else
        {
            (*((volatile unsigned char *)(0x40004C02))) = \
                    (*((volatile unsigned char *)(0x40004C02))) \
                                        &= ~((unsigned short)(0x0001));
        }
    }

}
