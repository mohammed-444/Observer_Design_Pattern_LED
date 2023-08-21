#include "client.h"
#include"../../MCAL/gpio/gpio.h"



void accept_client_1(void){

	if(GPIO_readPin(PORTC_ID, PIN1_ID)==GPIO_PIN_LEVEL_LOW)
	{
	GPIO_writePin(PORTC_ID, PIN1_ID,GPIO_PIN_LEVEL_HIGH);
	}
	else
	{
	GPIO_writePin(PORTC_ID, PIN1_ID,GPIO_PIN_LEVEL_LOW);
	}
}








