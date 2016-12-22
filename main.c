/*
 * TWIexample.c
 *
 * Created: 12/22/2016 6:23:29 PM
 * Author : aniladiguzel
 */ 

#include <avr/io.h>
#include "TWI.h"
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
    TWI_Init();
	

    while (1) 
    {
		
		  TWI_Start();
		  TWI_WriteByte(0x45);
		  _delay_ms(1000);
		  TWI_Stop();
    }
}

