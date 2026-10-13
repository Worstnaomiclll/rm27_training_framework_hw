#include "bsp.hpp"
#include "main.h" 
#include "bsp_can.hpp"
#include "bsp_usart.hpp"

void bsp_Init() {
    USART_Init();
    CAN_Init();
    BSP_LED_Init();
}
// --- 将以下代码复制到 bsp.cpp 的末尾 ---

// 初始化 LED 引脚
void BSP_LED_Init(void) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    
    // 1. 开启 GPIOH 的时钟
    __HAL_RCC_GPIOH_CLK_ENABLE();
    
    // 2. 配置 LED 引脚 (PH10, PH11, PH12)
    GPIO_InitStruct.Pin = GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; // 推挽输出模式
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);
    
    // 3. 默认关闭所有 LED (拉高电平熄灭)
    HAL_GPIO_WritePin(GPIOH, GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12, GPIO_PIN_SET);
}

// 翻转绿灯状态 (用于测试)
void BSP_LED_Toggle(void) {
    // 翻转 PH11 (绿灯) 的电平
    HAL_GPIO_TogglePin(GPIOH, GPIO_PIN_11);
}