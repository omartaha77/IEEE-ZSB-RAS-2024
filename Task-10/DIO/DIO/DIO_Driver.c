
#include "std_macros.h"
#include <avr/io.h>
void DIO_setPINdir(unsigned char portname,unsigned char pinnumber,unsigned char direction)
{
	switch(portname)
	{
		case 'A':
		case 'a':
		if (direction==1)
		{
			SET_BIT(DDRA,pinnumber);
		}
		else
		{
			CLR_BIT(DDRA,pinnumber);
		}
		case 'B':
		case 'b':
		if(direction==1)
		{
			SET_BIT(DDRB,pinnumber);
		}
		else
		{
			CLR_BIT(DDRB,pinnumber);
		}
		break;
		case 'C':
		case 'c':
		if(direction==1)
		{
			SET_BIT(DDRC,pinnumber);
		}
		else
		{
			CLR_BIT(DDRC,pinnumber);
		}
		break;
		case 'D':
		case 'd':
		if(direction==1)
		{
			SET_BIT(DDRD,pinnumber);
		}
		else
		{
			CLR_BIT(DDRD,pinnumber);
		}
		break;
		default:
		break;
	}
}

void DIO_write(unsigned char portname,unsigned char pinnumber,unsigned char outputvalue)
{
	switch(portname)
	{
		case 'A' :
		
		if(outputvalue==1)
		{
			SET_BIT(PORTA,pinnumber);
		}
		else
		{
			CLR_BIT(PORTA,pinnumber);
		}
		break ;
		case 'B':
		
		if(outputvalue==1)
		{
			SET_BIT(PORTB,pinnumber);
		}
		else
		{
			CLR_BIT(PORTB,pinnumber);
		}
		break ;
		case 'C' :
		
		if(outputvalue==1)
		{
			SET_BIT(PORTC,pinnumber);
		}			
		else
		{
			CLR_BIT(PORTC,pinnumber);
		}
		break ;
		case 'D':
		
		if(outputvalue==1)
		{
			SET_BIT(PORTD,pinnumber);
		}
		else
		{
			CLR_BIT(PORTD,pinnumber);
		}
		break ;
		default: 
		break ;
	}
}


unsigned char DIO_u8read(unsigned char portname,unsigned char pinnumber)
{
	unsigned char return_value=0;
	switch(portname)
	{
		case 'A' :
		return_value=READ_BIT(PINA,pinnumber);
		break;
		
		case 'B' :
		return_value=READ_BIT(PINB,pinnumber);
		break;
		
		case 'C' :
		return_value=READ_BIT(PINC,pinnumber);
		break;
		
		case 'D' :
		return_value=READ_BIT(PIND,pinnumber);
		break;
		default:
		break;
	}
	return return_value ;
}
void DIO_toggle(unsigned char portname,unsigned char pinnumber)
{
	switch(portname)
	{
		case 'A':
		TOG_BIT(PORTA,pinnumber);
		break;
		case 'B':
		TOG_BIT(PORTB,pinnumber);
		break;
		case 'C':
		TOG_BIT(PORTC,pinnumber);
		break;
		case 'D':
		TOG_BIT(PORTD,pinnumber);
		break;
		default: break;
	}
}
void DIO_set_port_direction(unsigned char portname,unsigned char direction)
{
	switch(portname)
	{
		case 'A' :
		DDRA=direction;
		break ;
		case 'B':
		DDRB=direction; 
		break ;
		case 'C' :
		DDRC=direction; 
		break ;
		case 'D':
		DDRD=direction; 
		break ;
		default:
		break ;
	}
	
}
void DIO_write_port(unsigned char portname,unsigned char portvalue)
{
	switch(portname)
	{
		case 'A' :
		PORTA=portvalue; 
		break ;
		case 'B':
		PORTB=portvalue; 
		break ;
		case 'C' :
		PORTC=portvalue; 
		break ;
		case 'D':
		PORTD=portvalue; 
		break ;
		default:
		break ;
	}
}

unsigned char DIO_read_port(unsigned char portname)
{
	unsigned char return_val=0;
	switch(portname)
	{
		case 'A' :
		return_val=PINA; 
		break ;
		case 'B':
		return_val=PINB; 
		break ;
		case 'C' :
		return_val=PINC; 
		break ;
		case 'D':
		return_val=PIND; 
		break ;
		default:
		break ;
	}
	return return_val;
}

void DIO_toggle_port(unsigned char portname)
{
	switch(portname)
	{
		case 'A' :
		PORTA=~PORTA;
		break ;
		case 'B':
		PORTB=~PORTB;
		break ;
		case 'C' :
		PORTC=~PORTC;
		break ;
		case 'D':
		PORTD=~PORTD;
		break ;
		default:
		break ;
	}
}