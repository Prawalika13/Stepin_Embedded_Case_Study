/**
 * @file Activity1.c
 * @author Prawalika(prawalika.1si17ei027@gmail.com)
 * @brief Seat Checking
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

#define seat_sense !(PIND &(1<<PD3))
#define heater_set (PIND &(1<<PD4))
#define heater_clear PORTD&=~(1<<PD4)
#define led_set PORTD|=(1<<PD2)
#define led_clear PORTD &=~(1<<PD2)

void seat_sensing();

#endif // ACTIVITY1_H_INCLUDED
