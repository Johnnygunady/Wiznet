#include <c8051F340.h>
#include <stdint.h>
#ifndef SPI_Defs
#define SPI_Defs

sbit SDIH    = P2^0; //PG Data Input
sbit SCLK    = P2^1; //PG Serial Clock
sbit PG_CSL  = P3^0; //PG Chip Select 
sbit SOR     = P1^7; //ROM Serial Output
sbit SCLKR   = P1^5; //ROM Serial Clock
sbit ROM_CSL = P1^6; //ROM Chip Select
sbit SIR     = P1^4; //ROM Serial Input
sbit V0_VRFL = P3^5;
sbit V0DIRL  = P2^2;
sbit V0INVL  = P2^3;
sbit SIMI_ONL = P1^3;
sbit V0RR_MSRL = P2^5;
sbit V0_MSRL   = P2^4;
sbit TSD_A0H   = P3^7;
sbit DACOS_CSL = P3^2;
sbit DACD_CSL  = P3^1;

sbit CLK  = P0^0;
sbit MISO = P0^1;
sbit MOSI = P0^2;
sbit NSS  = P0^3;

#endif