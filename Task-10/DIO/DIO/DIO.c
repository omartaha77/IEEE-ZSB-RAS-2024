
#define  F_CPU 8000000UL

#include <util/delay.h>
#include "DIO.h"
int main(void)
{
	DIO_set_port_direction('A',0xff);
	DIO_set_port_direction('B',0xff);
	int count=1;
	while(1)
	{
		DIO_write_port('A',0x77);
		_delay_ms(1000);
		DIO_write_port('A',0x24);
		_delay_ms(1000);
		DIO_write_port('A',0x5D);
		_delay_ms(1000);
		DIO_write_port('A',0x6D);
		_delay_ms(1000);
		DIO_write_port('A',0x2E);
		_delay_ms(1000);
		DIO_write_port('A',0x6B);
		_delay_ms(1000);
		DIO_write_port('A',0x7B);
		_delay_ms(1000);
		DIO_write_port('A',0x25);
		_delay_ms(1000);
		DIO_write_port('A',0x7F);
		_delay_ms(1000);
		DIO_write_port('A',0x6F);
		_delay_ms(1000);
		switch(count)
		{
			case 1:
			DIO_write_port('B',0x24);
			count++;
			break;
			case 2:
			DIO_write_port('B',0x5D);
			count++;
			break;
			case 3:
			DIO_write_port('B',0x6D);
			count++;
			break;
			case 4:
			DIO_write_port('B',0x2E);
			count++;
			break;
			case 5:
			DIO_write_port('B',0x6B);
			count++;
			break;
			case 6:
			DIO_write_port('B',0x7B);
			count++;
			break;
			case 7:
			DIO_write_port('B',0x25);
			count++;
			break;
			case 8:
			DIO_write_port('B',0x7F);
			count++;
			break;
			case 9:
			DIO_write_port('B',0x6F);
			count=1;
			break;
			
		}
	}
}