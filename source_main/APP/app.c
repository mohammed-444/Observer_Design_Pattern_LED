#include "app.h"


void observer_task(void)
{
	GLOBAL_INTERRUPT_ENABLE();
	INT0_init(RISING_EDGE_TRIGGER,PIN_INPUT);

	GPIO_setupPinDirection(PORTC_ID, PIN1_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(PORTC_ID, PIN0_ID, PIN_OUTPUT);


	subscribe(accept_client_1);
	subscribe(accept_client_2);

	unsubscribe(accept_client_1);

	subscribe(accept_client_1);

	while(1)
	{
		notify();

	}


}
