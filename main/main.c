// FreeRTOS includes
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// Error library
#include "esp_err.h"

#include "nvs_flash.h"
#include "esp_log.h"
#include "esp_system.h"
#include <stdio.h>


//	application entry point
int app_main(void) {
	//Initialize NVS
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES) {
      ESP_ERROR_CHECK(nvs_flash_erase());
      ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

}
