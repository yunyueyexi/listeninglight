#include "init.h"
void exti0_init(void)
{
	IT0=1;//�����ش�����ʽ���½��أ�
	EX0=1;//��INT1���ж�����
	EA=1;//�����ж�

}