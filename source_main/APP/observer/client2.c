#include "client.h"
#include"../../MCAL/gpio/gpio.h"



void accept_client_2(void){

	if(GPIO_readPin(PORTC_ID, PIN0_ID)==GPIO_PIN_LEVEL_LOW)
	{
	GPIO_writePin(PORTC_ID, PIN0_ID,GPIO_PIN_LEVEL_HIGH);
	}
	else
	{
	GPIO_writePin(PORTC_ID, PIN0_ID,GPIO_PIN_LEVEL_LOW);
	}
}
