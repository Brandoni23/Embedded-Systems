/*
 * timer.h
 *
 *  Created on: Apr 29, 2020
 *      Author: pkda001
 */

#ifndef TIMER_TIMER_H_
#define TIMER_TIMER_H_

/* Set up a timer that genrates an interrupt once every second
 * Uses Timer32_1
 */
void Timer_setup(void);

/* Start the timer process (so interrupts get generated) */
void Timer_start(void);

/* Stop the timer process (so interrupts get generated) */
void Timer_stop(void);

/* Handle the timeout.
 * This has to be implemented by the user
 */
void Timer_handleTimeout(void);

void Timer_clearInterruptFlag(void);

#endif /* TIMER_TIMER_H_ */
