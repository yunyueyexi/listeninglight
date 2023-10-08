#include "init.h"
void exti0_init(void)
{
	IT0=1;//跳变沿触发方式（下降沿）
	EX0=1;//打开INT1的中断允许
	EA=1;//打开总中断

}