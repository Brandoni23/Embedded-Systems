/*****************************************************************************
* Product: Buttons module for complex concurrency (QPC introduction)
* Version: 0.1
* Updated: Mar 25, 2019
*
* Authors: Philip Asare
*
* Copyright (C) 2019 Philip Asare. See TI_COPYRIGHT
*               All rights reserved.
*
*
* Contacts:
*           Philip Asare (pkda001@bucknell.edu)
*****************************************************************************/
/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/* Module includes */
#include "buttons.h"


void Buttons_setup(void){
    /* setup physical configuration */
    MAP_GPIO_setAsInputPinWithPullDownResistor(Buttons_b1.port, Buttons_b1.pin);
    MAP_GPIO_setAsInputPinWithPullDownResistor(Buttons_b2.port, Buttons_b2.pin);

    /* setup interrupts */
    MAP_GPIO_clearInterruptFlag(Buttons_b1.port, Buttons_b1.pin);
    MAP_GPIO_clearInterruptFlag(Buttons_b2.port, Buttons_b2.pin);

    /* assume an active high transition with button press defined as
     * the moment the button is pushed down
     */
    MAP_GPIO_interruptEdgeSelect(Buttons_b1.port,
                                 Buttons_b1.pin,
                                 GPIO_LOW_TO_HIGH_TRANSITION);

    MAP_GPIO_interruptEdgeSelect(Buttons_b2.port,
                                 Buttons_b2.pin,
                                 GPIO_LOW_TO_HIGH_TRANSITION);

    /* register interrupt handler */
    MAP_Interrupt_registerInterrupt(Buttons_b1IntPort, &Button_handleButtonPress);
    MAP_Interrupt_registerInterrupt(Buttons_b2IntPort, &Button_handleButtonPress);

    /* enable interrupts for specific pins */
    MAP_GPIO_enableInterrupt(Buttons_b1.port, Buttons_b1.pin);
    MAP_GPIO_enableInterrupt(Buttons_b2.port, Buttons_b2.pin);


    /* enable interrupt in interrupt controller */
    MAP_Interrupt_enableInterrupt(Buttons_b1IntPort);
    MAP_Interrupt_enableInterrupt(Buttons_b2IntPort);

}
/*..........................................................................*/
bool Buttons_isPressed(uint_fast8_t port, uint_fast8_t pin){

    return (bool)(MAP_GPIO_getInputPinValue(port, pin)\
                == GPIO_INPUT_PIN_HIGH);
}
/*..........................................................................*/
void Button_handleButtonPress(void){
    uint32_t status_b1, status_b2;

    /* check the interrupt flag register */
    status_b1 = MAP_GPIO_getEnabledInterruptStatus(Buttons_b1.port);
    status_b2 = MAP_GPIO_getEnabledInterruptStatus(Buttons_b2.port);

    /* clear the interrupt flag to indicate we have handled interrupt */
    MAP_GPIO_clearInterruptFlag(Buttons_b1.port, status_b1);
    MAP_GPIO_clearInterruptFlag(Buttons_b2.port, status_b2);

    Buttons_reportButtonPressed();
}
/*..........................................................................*/
