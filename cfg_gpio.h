#ifndef CFG_GPIO_H
#define CFG_GPIO_H
#include <stdint.h>

typedef enum {
    GPIO_MODE_INPUT,
    GPIO_MODE_OUTPUT,
    GPIO_MODE_AF,
    GPIO_MODE_ANALOG
} GpioModeType;

typedef enum{
    GPIO_LEVEL_LOW,
    GPIO_LEVEL_HIGH
} GpioLevelType;

typedef enum {
    GPIO_PORT_A = 0,
    GPIO_PORT_B = 1,
    GPIO_PORT_H = 7,
} GpioPortType;

typedef struct{
    uint8_t port;
    uint8_t pin;
    GpioModeType mode;
    GpioLevelType defaultLevel;
} GpioPinConfigType;

extern const GpioPinConfigType GpioConfig[];

extern const uint8_t GpioConfigCount;

#endif
