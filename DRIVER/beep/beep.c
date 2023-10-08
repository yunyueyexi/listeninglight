#include "beep.h"
void beep_ala(u16 time,u16 fre)
{
	while(time--)
	{
		BEEP=!BEEP;
		delay_10us(fre);	
	}		
}

