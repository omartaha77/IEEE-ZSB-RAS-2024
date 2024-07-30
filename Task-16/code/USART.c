
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "std_macros.h"

void UART_vInit(unsigned long baud)
{
	
	unsigned short UBRR ;
	UBRR=(F_CPU/(16*baud))-1 ;
	UBRRH=(unsigned char)(UBRR>>8);
	UBRRL=(unsigned char)UBRR;
	
	SET_BIT(UCSRB,TXEN);
	SET_BIT(UCSRB,RXEN);
	
	UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
}

void UART_vSendData(char data)
{
	
	while(READ_BIT(UCSRA,UDRE)==0);
	
	UDR=data ;
}

char UART_u8ReceiveData(void)
{
	
	while(READ_BIT(UCSRA,RXC)==0);
	return UDR ;
}
void UART_vSendstring( char *ptr)
{
	while(*ptr!=0)
	{
		UART_vSendData(*ptr);
		ptr++;
		_delay_ms(100);
	}
}

 