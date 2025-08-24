#include "cfg_gpio.h"
//#include "stm32f401re_regs.h" ~legacy
#include "mcu.h"

GPIO_TypeDef * const GpioPorts[] = {
    GPIOA,
    GPIOB,
    GPIOC,
    GPIOD,
    GPIOE,
    GPIOF,
    GPIOG,
    GPIOH,
    GPIOI,
    GPIOJ,
    GPIOK,
};

const GpioPinConfigType GpioConfig[] = {
    {.port = GPIO_PORT_D, .pin = 12, .mode = GPIO_MODE_OUTPUT, .defaultLevel = GPIO_LEVEL_LOW},
    {.port = GPIO_PORT_D, .pin = 13, .mode = GPIO_MODE_OUTPUT, .defaultLevel = GPIO_LEVEL_LOW},
    {.port = GPIO_PORT_D, .pin = 14, .mode = GPIO_MODE_OUTPUT, .defaultLevel = GPIO_LEVEL_LOW},
    {.port = GPIO_PORT_D, .pin = 15, .mode = GPIO_MODE_OUTPUT, .defaultLevel = GPIO_LEVEL_LOW},
};

const uint8_t GpioConfigCount = sizeof(GpioConfig) / sizeof(GpioConfig[0]);
