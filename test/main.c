#include <reg52.h>
sbit IN1=P0^1;
sbit IN2=P0^2; //����С������ģ������IO�� 
sbit ENA=P0^0; //����С������ģ��ʹ�ܶ� 
sbit X1=P1^0;//����ѭ��
sbit LED=P3^4;//����LEDС��
void dianji1()   //��ת IN1 1   IN2 0
{
		IN1=1;
		IN2=0;
}

void dianji2()   //��ת IN1 1   IN2 1
{
		IN1=0;
		IN2=1;
}

void main()
{
	while(1)
	{	
		if(X1==0)  //���� �͵�ƽ
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