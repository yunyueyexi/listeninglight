#include "kongzhi.h"	
sbit BEEP=P2^7;
u8 i;
u16 j;
void kongzi_f()
{
		delay_10us(1000);//����
	  if(KEY4==0)//�ٴ��ж�K4���Ƿ���
		while(1)
	{
			for(i=1;i<9;i++)
	  {
			led_xianshi(i);
		  delay_10us(50000);
	   	for(j=1000;j>0;j--)//ѭ��2000��
			{
			BEEP=!BEEP;//����һ��Ƶ�ʵ������ź�
			delay_10us(10*i);
			}
			
    }	
	}
	
}