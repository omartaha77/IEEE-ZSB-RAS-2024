
#include <avr/io.h>
#include "std_macros.h"
void ADC_init(void)
{
	SET_BIT(ADMUX,REFS0); //configure VREF
	SET_BIT(ADCSRA,ADEN); //Enable ADC
	SET_BIT(ADMUX,REFS1);
	/*Adjust ADC clock*/
	SET_BIT(ADCSRA,ADPS2);
	SET_BIT(ADCSRA,ADPS1);
}

unsigned short ADC_Read(void)
{
	unsigned short read_val;
	SET_BIT(ADCSRA,ADSC); //start convertion 
	while(READ_BIT(ADCSRA,ADSC)==1); //stay in your position till ADIF become 1
	read_val=(ADCL);
	read_val|=(ADCH<<8);
	return read_val;
}