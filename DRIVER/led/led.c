#include "led.h"
void led_xianshi(u8 i)
{
switch(i)
	{
		case 1:LED=0XFF;break;
		case 2:LED=0X7E;break;
		case 3:LED=0X3C;break;
		case 4:LED=0X18;break;
		case 5:LED=0X00;break;
		case 6:LED=0X81;break;
		case 7:LED=0XC3;break;
		case 8:LED=0XE7;break;
	  case 0:LED=0xFF;break;
	}

}
