#include <STC15.H>

sbit LED1 = P3^1;
sbit LED2 = P3^0;

//�ߵ͵�ƽ
//�͵�ƽ    GND    0V
//�ߵ�ƽ    VCC    ��Ƭ����VCC �����ѹ
//��Ƭ������ͨIO ֻ������ߵ�ƽ���ߵ͵�ƽ
//IO= 0  ��Ƭ����IO ����͵�ƽ  0V
//IO= 1  ��Ƭ����IO ����ߵ�ƽ  Ҳ����VCC  ������Ƭ���Ĺ����ѹ


void main(void)
{
		LED1 = 1;
	  LED2 = 1;
		while(1);
}




