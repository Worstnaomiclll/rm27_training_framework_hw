# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME})

# Add STM32CubeMX generated sources
add_subdirectory(cmake/stm32cubemx)

# Link directories setup
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined library search paths
)

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user sources here
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/bsp/src/bsp.cpp
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/bsp/src/bsp_can.cpp
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/bsp/src/bsp_pwm.cpp
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/bsp/src/bsp_usart.cpp
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/threads/src/alivethread.cpp
)

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined include paths
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/bsp/include
    /Users/lichengze/Desktop/fortest/rm27_training_framework_hw/threads/include
)

# Add project symbols (macros)
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined symbols
)

# Remove wrong libob.a library dependency when using cpp files
list(REMOVE_ITEM CMAKE_C_IMPLICIT_LINK_LIBRARIES ob)