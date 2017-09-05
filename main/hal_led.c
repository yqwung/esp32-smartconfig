#include "hal_led.h"


void ledGpioInit(void)
{
    gpio_config_t io_conf;                      // 创建GPIO实例

    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;  // 关闭IO中断功能
    io_conf.mode = GPIO_MODE_OUTPUT;            // 将IO配置为输出
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL; // 要配置那些IO
    io_conf.pull_down_en = 0;                   
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);	                    // 配置GPIO
	
	LED1_On();
	
	printf("LED Init!\r\n");
}

