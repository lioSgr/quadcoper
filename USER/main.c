#include "led.h"
#include "delay.h"
#include "sys.h"
#include "FreeRTOS.h"
#include "task.h"

int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);//设置系统中断优先级分组4	 	 
	delay_init();	    				//延时函数初始化	  
	uart_init(115200);					//初始化串口
	LED_Init();		  	//初始化与LED连接的硬件接口
    while(1)
	{
		LED1=1;
		delay_ms(300);	 //延时300ms
		LED1=0;
		delay_ms(300);	//延时300ms
	}
}


