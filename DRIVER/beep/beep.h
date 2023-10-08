#ifndef _beep_H
#define _beep_H

#include "public.h"

//管脚定义
sbit BEEP=P2^7;

//函数声明
void beep_ala(u16 time,u16 fre);
#endif
