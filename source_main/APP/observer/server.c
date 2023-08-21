#include "server.h"
#include "avr/io.h"
#include <avr/interrupt.h>
void (*arr[MAX_SUB])(void) ={0};

static char flag = 0;


void subscribe(void(*ptr)(void))
{
	for (int i=0 ; i<MAX_SUB;i++)
	{
	        if (arr[i]==0)
	        {
	            arr[i]=ptr;
	            break;
	        }
	    }

}

void unsubscribe(void(*ptr)(void))
{
	for (int i=0 ; i<MAX_SUB;i++)
	{
	        if (arr[i]==ptr)
	        {
	            arr[i]=0;

	        }
	    }

}

void notify()
{

	if(flag==1)
	{
	flag = 0;
	for (int i=0 ; i<MAX_SUB;i++)
	{
		if (arr[i]!=0)
		{
			arr[i]();

		}
	}
	}
	else
	{}

	}


ISR(INT0_vect)
{
	flag=1;
}

