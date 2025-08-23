#include "cfg_gpio.h"
#include "stm32f401re_regs.h"

GPIO_TypeDef * const GpioPorts[] = {
    GPIOA,
    GPIOB,
    GPIOH
};

const GpioPinConfigType GpioConfig[] = {
    {.port = GPIO_PORT_A, .pin = 5, .mode = GPIO_MODE_OUTPUT, .defaultLevel = GPIO_LEVEL_LOW},
};

const uint8_t GpioConfigCount = sizeof(GpioConfig) / sizeof(GpioConfig[0]);
