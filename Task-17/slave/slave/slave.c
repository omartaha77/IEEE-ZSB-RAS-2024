
#include <avr/io.h>
#include "LCD.h"
#include "spi_driver.h"
#define DUMMY_DATA 0XFF
int main(void)
{
	unsigned char x;
	SPI_SlaveInit();
	LCD_vInit();
    while(1)
    {
       x=SPI_SlaveReceivechar(DUMMY_DATA);
	   LCD_vSend_char(x);
    }
}
