#ifndef _TWI_H
#define _TWI_H
#include <stdint.h>

void TWI_Init();
void TWI_Start();
void TWI_Stop();
void TWI_WriteByte(uint8_t data);
uint8_t TWI_ReadByte(uint8_t data);

#endif 
