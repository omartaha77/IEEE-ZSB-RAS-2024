


#include <avr/io.h>
#include "std_macros.h"
#include "DIO.h"
#include "button.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	DIO_set_port_direction('A',0xff);
	DIO_set_port_direction('B',0x00);
	DIO_set_port_direction('D',0xff);
	button_init('B',0);
	DIO_write('D',2,1);
	DIO_write('D',3,1);
	char x;
	x=button_read('B',0);
    while(1)
    {
		x=button_read('B',0);
		if (x==0)
		{
			
			DIO_write('A',0,0);
			DIO_write('A',1,0);
			DIO_write('A',2,1);
			DIO_write('A',3,0);
			DIO_write('A',4,1);
			DIO_write('D',0,1);
			DIO_write('D',5,1);
			
		}else
		{
			_delay_ms(1000);
			DIO_write('A',0,0);
			DIO_write('A',1,1);
			DIO_write('A',2,0);
			DIO_write('D',0,1);
			DIO_write('D',5,1);
			_delay_ms(1000);
			DIO_write('A',0,1);
			DIO_write('A',1,0);
			DIO_write('A',2,0);
			DIO_write('A',3,1);
			DIO_write('A',4,0);
			DIO_write('D',0,0);
			DIO_write('D',5,0);
			while (button_read('B', 0) != 0) {
				
			}
			_delay_ms(1000);
			DIO_write('A',0,0);
			DIO_write('A',1,1);
			DIO_write('A',2,0);
			_delay_ms(1000);
		}
		
		
        
    }
}