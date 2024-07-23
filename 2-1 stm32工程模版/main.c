#include "stm32f10x.h"                  // Device header
//点灯
int main(void)
{
	RCC->APB2ENR=0x00000010;
	GPIOC->CRH=0X00300000;
	GPIOC->ODR=0X00002000;
	while(1)
	{
		
	}
}
