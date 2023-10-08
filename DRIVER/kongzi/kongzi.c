#include "kongzhi.h"	
sbit BEEP=P2^7;
u8 i;
u16 j;
void kongzi_f()
{
		delay_10us(1000);//消斗
	  if(KEY4==0)//再次判断K4键是否按下
		while(1)
	{
			for(i=1;i<9;i++)
	  {
			led_xianshi(i);
		  delay_10us(50000);
	   	for(j=1000;j>0;j--)//循环2000次
			{
			BEEP=!BEEP;//产生一定频率的脉冲信号
			delay_10us(10*i);
			}
			
    }	
	}
	
}