//
// Created by cosmosmount on 2025/8/30.
//

#ifndef RM26_BSP_HPP
#define RM26_BSP_HPP


#ifdef __cplusplus
extern  "C" {
#endif

    void bsp_Init(void);
    #include "main.h" // 必须包含这个头文件，才能使用 HAL 库

    // 在 bsp.hpp 中添加
    void BSP_LED_Init(void);
    void BSP_LED_Toggle(void);
#ifdef __cplusplus
}
#endif


#endif //RM26_BSP_HPP