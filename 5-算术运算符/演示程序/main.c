#include <STC15.H>   ///STC15W104

sbit  LED1 = P3 ^1;
sbit  LED2 = P3 ^0;

void delay1sec(void)//@5.5296MHz
{
	unsigned char i, j, k;
//	_nop_();
//	_nop_();
	i = 22;
	j = 3;
	k = 227;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main(void)
{
	unsigned char a,b,c;
  unsigned char i;
	a = 5;
	b = 2;    
	c = a + b;  ////������     + �������         7  
	c = a - b;  ////������     - �������         3
	
	c = a * b;  ////������      * �������        10
	c = a / b;  ////������      / �������        2       2...1
	c = a % b;  ////��������    % ���������	    1       2...1
	
  a ++;       ///��������     ++ ���������   <==>   a = a  + 1;     6	
	
	a --;       ///�Լ�����     -- �Լ������   <==>   a = a  - 1;	   5     4
//	--a;   
//  a--;
  LED1 = 0;
	LED2 = 0;

  for(i=3;i>0;i--)
	{
			LED1 = 1;
			LED2 = 1;	
			delay1sec();
			LED1 = 0;
			LED2 = 0;	
			delay1sec();			
	}
	
	
	
	
//	for(i=0;i<3;i++)
//	{
//			LED1 = 1;
//			LED2 = 1;	
//			delay1sec();
//			LED1 = 0;
//			LED2 = 0;	
//			delay1sec();			
//	}
//	
//	
	while(1);	
}











