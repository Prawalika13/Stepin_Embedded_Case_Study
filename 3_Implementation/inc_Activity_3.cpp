/**
 * @file Activity1.c
 * @author Prawalika(prawalika.1si17ei027@gmail.com)
 * @brief PWM & ADC
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 #ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
#include<avr/io.h>
#include "util/delay.h"

#define TIMER1_FAST_PWM TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11)
#define TIMER_PRESCALER_AS_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)
#define PWM_OUTPUT_PIN DDRB|=(1<<PB1)

uint16_t adc_sense(uint8_t channel);
void adc_initialization();
void timer_initialization(void);
void pwm_out(uint16_t ADC_READING);

#endif // ACTIVITY3_H_INCLUDED
