#include <reg52.h>
sbit IN1=P0^1;
sbit IN2=P0^2; //定义小车驱动模块输入IO口 
sbit ENA=P0^0; //定义小车驱动模块使能端 
sbit X1=P1^0;//定义循迹
sbit LED=P3^4;//定义LED小灯
void dianji1()   //正转 IN1 1   IN2 0
{
		IN1=1;
		IN2=0;
}

void dianji2()   //反转 IN1 1   IN2 1
{
		IN1=0;
		IN2=1;
}

void main()
{
	while(1)
	{	
		if(X1==0)  //黑线 低电平
		{
			LED=1;
			dianji1();
		}
		else if(X1==1)
		{
			LED=0;
			dianji2();
		}
  }
}