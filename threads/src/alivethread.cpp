#include "../../bsp/include/bsp.hpp"


// 这里是线程的主入口函数
void StartDefaultTask(void *argument) {
    while(1) {
        BSP_LED_Toggle(); // 调用 BSP 层写好的函数，翻转绿灯
        
        // FreeRTOS 的延时函数，延时 500毫秒
        vTaskDelay(pdMS_TO_TICKS(500)); 
    }
}
