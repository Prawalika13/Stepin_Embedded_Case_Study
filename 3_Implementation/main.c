/**
 * @file main.c
 * @author Prawalika (prawalika.1si17ei027@gmail.com)
 * @brief Seat Monitoring System based on Temperature
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<util/delay.h>
#include "Activity1.h"
#include "Activity2.h"
#include"Activity3.h"
int main(void)
{
    SEAT_CHECKING(); //Initializing Drivers seat
    ADC_INITIALIZATION(); //Initializing ADC to accept temperature values
    TIMER_INITIALIZATION(); //Initializing Timer by dividing clock with 64 prescale
    LCD_INITIALIZATION(); //Initializing LCD

    uint16_t read;

	while(1)
    {
        if(SEAT_CHECK)
        {
            PORTD|=(1<<PD2);
            if(HEATER_ON){
                LED_ON;
                _delay_ms(200);
                CLEAR_LCD();
                read=SENSE_ADC(0);
                PWM_OUPUT(read);

            }
            else
                {
                    LED_OFF;
                     _delay_ms(200);
                    HEATER_OFF;
                    _delay_ms(200);
                    CLEAR_LCD();
                }
        }
        else{
            LED_OFF;
            _delay_ms(200);
            HEATER_OFF;
            _delay_ms(200);
            CLEAR_LCD();
        }
    }
    return 0;
}
© 2021 GitHub, Inc.