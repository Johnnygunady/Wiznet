#include <c8051F340.h>
#include "SPI_Defs.h"
#include <stdint.h>

void Wz_Write(uint16_t addr_phase, 
							uint8_t comand_phase, 
							uint8_t* data_phase,
							uint8_t data_size)

{
	uint8_t count;
	for (count = 0; count < 16; count++)
		{
			CLK = 1;
			MOSI = (addr_phase & 0x8000);				
			addr_phase <<= 1;				
			CLK = 0;
		}
	for (count = 0; count < 8; count++)
		{
			CLK = 1;
			MOSI = (comand_phase & 0x80);				
			comand_phase <<= 1;				
			CLK = 0;
		}	
	for (count = 0; count < data_size; count++)
		{
			CLK = 1;
			MOSI = (data_phase[count] & 0x80);				
			data_phase[count] <<= 1;				
			CLK = 0;
		}
}

uint16_t Wz_Read(uint16_t addr_phase, 
							uint8_t comand_phase, 
							uint8_t* data_phase,
							uint8_t data_size)

{
	uint8_t count;
	for (count = 0; count < 16; count++)
		{
			CLK = 1;
			MOSI = (addr_phase & 0x8000);				
			addr_phase <<= 1;				
			CLK = 0;
		}
	for (count = 0; count < 8; count++)
		{
			CLK = 1;
			MOSI = (comand_phase & 0x80);				
			comand_phase <<= 1;				
			CLK = 0;
		}	
	for (count = 0; count < data_size; count++)
		{
			CLK = 1;
			MISO = (data_phase[count] & 0x80);				
			data_phase[count] <<= 1;				
			CLK = 0;
		}
	return(data_phase);
}

