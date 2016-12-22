#include <avr/io.h>
#include "TWI.h"

void TWI_Init()
{
    TWSR=0x00; 
    TWBR=0x46; 
    TWCR=0x04; 
}

void TWI_Start()
{
    TWCR = ((1<<TWINT) | (1<<TWSTA) | (1<<TWEN));
    while (!(TWCR & (1<<TWINT)));
}

void TWI_Stop(void)
{
    TWCR = ((1<< TWINT) | (1<<TWEN) | (1<<TWSTO));
   
}

void TWI_WriteByte(uint8_t data)
{
    TWDR = data ;
    TWCR = ((1<< TWINT) | (1<<TWEN));
    while (!(TWCR & (1 <<TWINT)));
	
}

uint8_t TWI_ReadByte(uint8_t data)
{
    TWCR = ((1<< TWINT) | (1<<TWEN) | (data<<TWEA));
    while ( !(TWCR & (1 <<TWINT)));
    return TWDR;
}