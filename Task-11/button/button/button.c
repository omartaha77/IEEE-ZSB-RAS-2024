#include"DIO.h"
#include "std_macros.h"
#include <avr/io.h>
void button_init(char port,char pin)
{
	 DIO_setPINdir(port,pin,0);
}

char button_read(char port,char pin)
{
	return DIO_u8read(port,pin);
}