#ifndef _beep_H
#define _beep_H

#include "public.h"

//�ܽŶ���
sbit BEEP=P2^7;

//��������
void beep_ala(u16 time,u16 fre);
#endif
