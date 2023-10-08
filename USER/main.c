#include "public.h"
#include "init.h"
#include "beep.h"
#include "led.h"
//sbit BEEP=P2^7;
//u8 i;
//u16 j;
//void main()
//{
//	exti0_init();
//	 while(1)
//	{
//		
//	}

//}

//void exti0() interrupt 0 //外部中断1中断函数
//{
//	delay_10us(1000);//消斗
//	//if(KEY4==0)//再次判断K4键是否按下
////{
//		while(1)
//	{
//			for(i=1;i<9;i++)
//	  {
//			led_xianshi(i);
//		  delay_10us(50000);
//	   	for(j=1000;j>0;j--)//循环2000次
//			{
//			BEEP=!BEEP;//产生一定频率的脉冲信号
//			delay_10us(10*i);
//			}
//      if(KEY4=0) while(1);
//    }	
//	}				
//}

sbit BEEP=P2^7;
u8 i;
u16 j;
u8 num;
void main()
{
		delay_10us(1000);//消斗
	  exti0_init();
	//	if(KEY4==0)//再次判断K4键是否按下
	while(1)
	{
		   delay_10us(5000);
       if(num==1)
			 {
				      
				 			for(i=1;i<9;i++)
	            {
								  delay_10us(5000);
			            led_xianshi(i);
	   	            for(j=1000;j>0;j--)//循环2000次
			           {
			            BEEP=!BEEP;//产生一定频率的脉冲信号
			            delay_10us(10*i);
			           }
              }
			 }
			 if(num==2)
			 {
				 led_xianshi(0);
				 BEEP=0;
			 }
			 if(num==3)
			 {
				 num=1;
			 }
	}	
		

}

void exti0() interrupt 0 //外部中断1中断函数
{
	num++;
}
