#include "delay.h"
#include "gpio.h"
#include "sys.h"
#include "uart.h"
#include "wdog.h"

int main()
{
	GPIO_InitTypeDef GPIO_InitStruct1;
	GPIO_InitStruct1.GPIOx =PTA;
}
void assert_failed(uint8_t* file, uint32_t line)
{
	//∂œ—‘ ß∞‹ºÏ≤‚
//	UART_printf("assert_failed:line:%d %s\r\n",line,file);
//	while(1);
}
