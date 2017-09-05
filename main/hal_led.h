#ifndef __HAL_LED_H__
#define __HAL_LED_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "driver/gpio.h"


#define MY_LED1                GPIO_NUM_2        // GPIO2
#define GPIO_OUTPUT_PIN_SEL    (1 << MY_LED1)

#define LED1_On()              (gpio_set_level(MY_LED1, 1))
#define LED1_Off()             (gpio_set_level(MY_LED1, 0))


void ledGpioInit(void);


#ifdef __cplusplus
}
#endif

#endif /*#ifndef __HAL_LED_H__*/