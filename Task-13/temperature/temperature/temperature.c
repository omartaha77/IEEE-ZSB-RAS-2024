#include <avr/io.h>
#include "ADC.h"
#include "DIO.h"
#include "LCD.h"
char read_val;
unsigned short temperature;
int main(void)
{
	LCD_vInit();
	ADC_init();
	LCD_vSend_string("temperature=");
    while(1)
    {
        temperature=(ADC_Read()*0.25);
		
		if (temperature<10)
		{
			LCD_movecursor(1,13);
			LCD_vSend_char(' ');
			LCD_vSend_char(temperature+48);
			LCD_vSend_char(0xDF);
			LCD_vSend_char('c');
		}
		else if (temperature<100)
		{
			LCD_movecursor(1,13);
			LCD_vSend_char((temperature/10)+48);
			LCD_vSend_char((temperature%10)+48);
			LCD_vSend_char(0XDF);
			LCD_vSend_char('c');
		}
		
    }
}