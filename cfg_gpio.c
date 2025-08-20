#include "cfg_gpio.h"

const GpioPinConfigType GpioConfig[] = {
    {.port = GPIO_PORT_A, .pin = 5, .mode = GPIO_MODE_OUTPUT, .defaultLevel = GPIO_LEVEL_LOW},
};

const uint8_t GpioConfigCount = sizeof(GpioConfig) / sizeof(GpioConfig[0]);
