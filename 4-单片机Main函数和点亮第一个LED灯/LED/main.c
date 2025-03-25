#include <STC15.H>

sbit LED1 = P3^1;
sbit LED2 = P3^0;

//高低电平
//低电平    GND    0V
//高电平    VCC    单片机的VCC 供电电压
//单片机的普通IO 只能输出高电平或者低电平
//IO= 0  单片机的IO 输出低电平  0V
//IO= 1  单片机的IO 输出高电平  也就是VCC  即：单片机的供电电压


void main(void)
{
		LED1 = 1;
	  LED2 = 1;
		while(1);
}




