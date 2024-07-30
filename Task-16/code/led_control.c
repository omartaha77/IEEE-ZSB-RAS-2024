#include "USART.h"
#include "LCD.h"
#include "LED.h"

int main(void) {
	
	UART_vInit(9600);
	LCD_vInit();
	LED_vInit('C', 0);
	LED_vInit('C', 1);
	LED_vInit('C', 2);

	char x;
	while(1) {
		x = UART_u8ReceiveData();
		LCD_vSend_char(x);
		switch(x) {
			case '1':
			LED_vTurnOn('C', 0); 
			break;
			case '2':
			LED_vTurnOn('C', 1); 
			break;
			case '3':
			LED_vTurnOn('C', 2); 
			break;
			default:
			LED_vTurnOff('C', 0);
			LED_vTurnOff('C', 1);
			LED_vTurnOff('C', 2);
			break;
		}
	}
}
