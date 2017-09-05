#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "esp_event_loop.h"
#include "esp_smartconfig.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_spi_flash.h"

#include "user_smartconfig.h"
#include "hal_led.h"


void app_main()
{
	// 获取系统信息
    esp_chip_info_t chip_info;
    esp_chip_info( &chip_info );
	
	printf("========================================================\r\n");
	printf("[WIFI SMARTCONFIG] Example : Smartconfig WeChat! \r\n");
	printf("[WIFI SMARTCONFIG] FLASH SIZE: %d MB (%s) \r\n", spi_flash_get_chip_size() / (1024 * 1024),
	                                                         (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");
	printf("[WIFI SMARTCONFIG] Free memory: %d bytes \r\n", esp_get_free_heap_size());
	
	ledGpioInit();
	
	user_smartconfig_init();
}
