# cmake/stm32cubemx/CMakeLists.txt 内容

# 添加 STM32F4 的 HAL 库驱动文件
# 添加 HAL 库驱动文件 (这里改成你实际的 BSP 文件)
add_library(STM32F4_HAL STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../../bsp/src/bsp.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../../bsp/src/bsp_can.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../../bsp/src/bsp_pwm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../../bsp/src/bsp_usart.cpp
)
# 添加 HAL 库的头文件路径
# 添加 HAL 库的头文件路径
target_include_directories(STM32F4_HAL PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../../bsp/include
)