#include "led.h"
#include "key.h"

/*****************************************************************************************
*函数功能：LED初始化
*函数形参:无
*函数返回值：无
*函数备注:LED1-PA4  LED2-PA5  LED3-PA6  LED4-PA7
*
*****************************************************************************************/
void LED_Init(void)
{
	RCC->AHB1ENR |= 1<<0;//打开PA组时钟
	
	/*PA4配置为推挽输出*/
	GPIOA->MODER &=~(3<<(2*4));//清零
	GPIOA->MODER |=1<<(2*4);//配置为输出模式
	GPIOA->OTYPER &=~(1<<4);//配置为推挽输出
	GPIOA->OSPEEDR &=~(3<<(2*4));//清零
	GPIOA->OSPEEDR |=2<<(2*4);//50M输出速度
	GPIOA->ODR |=1<<4;//初始化输出高电平，灯灭
	
	/*PA5配置为推挽输出*/
	GPIOA->MODER &=~(3<<(2*5));//清零
	GPIOA->MODER |=1<<(2*5);//配置为输出模式
	GPIOA->OTYPER &=~(1<<5);//配置为推挽输出
	GPIOA->OSPEEDR &=~(3<<(2*5));//清零
	GPIOA->OSPEEDR |=2<<(2*5);//50M输出速度
	GPIOA->ODR |=1<<5;//初始化输出高电平，灯灭
	
	/*PA6配置为推挽输出*/
	GPIOA->MODER &=~(3<<(2*6));//清零
	GPIOA->MODER |=1<<(2*6);//配置为输出模式
	GPIOA->OTYPER &=~(1<<6);//配置为推挽输出
	GPIOA->OSPEEDR &=~(3<<(2*6));//清零
	GPIOA->OSPEEDR |=2<<(2*6);//50M输出速度
	GPIOA->ODR |=1<<6;//初始化输出高电平，灯灭

	/*PA7配置为推挽输出*/
	GPIOA->MODER &=~(3<<(2*7));//清零
	GPIOA->MODER |=1<<(2*7);//配置为输出模式
	GPIOA->OTYPER &=~(1<<7);//配置为推挽输出
	GPIOA->OSPEEDR &=~(3<<(2*7));//清零
	GPIOA->OSPEEDR |=2<<(2*7);//50M输出速度
	GPIOA->ODR |=1<<7;//初始化输出高电平，灯灭

}


