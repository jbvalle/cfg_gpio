#ifndef CFG_GPIO_H
#define CFG_GPIO_H
#include <stdint.h>

/**
 * @brief GPIO Mode type.
 *
 * Fields:
 * - GPIO_MODE_INPUT,
 * - GPIO_MODE_OUTPUT,
 * - GPIO_MODE_AF,
 * - GPIO_MODE_ANALOG
 */
typedef enum {
    GPIO_MODE_INPUT,
    GPIO_MODE_OUTPUT,
    GPIO_MODE_AF,
    GPIO_MODE_ANALOG
} GpioModeType;

/**
 * @brief GPIO Level
 *
 * Fields:
 * - GPIO_LEVEL_LOW = 0
 * - GPIO_LEVEL_HIGH = 1
 */
typedef enum{
    GPIO_LEVEL_LOW,
    GPIO_LEVEL_HIGH
} GpioLevelType;

typedef enum {
    GPIO_PORT_A = 0,
    GPIO_PORT_B, 
    GPIO_PORT_C,
    GPIO_PORT_D,
    GPIO_PORT_E,
    GPIO_PORT_F,
    GPIO_PORT_G,
    GPIO_PORT_H,
    GPIO_PORT_I,
    GPIO_PORT_J,
    GPIO_PORT_K,
} GpioPortType;

/**
 * @brief GPIO configuration type.
 *
 * Each element of this struct represents the configuration of a GPIO pin.
 *
 * Fields:
 * - port         : The GPIO port number (e.g., 0, 1, 2…).
 * - pin          : The pin number within the port.
 * - mode         : The mode of the GPIO (input, output, etc.).
 * - defaultLevel : The default output level of the GPIO (high or low).
 */
typedef struct{
    uint8_t port;
    uint8_t pin;
    GpioModeType mode;
    GpioLevelType defaultLevel;
} GpioPinConfigType;

/**
 * @brief GPIO configuration array.
 *
 * Each element of this array represents the configuration struct of a GPIO pin.
 *
 * Fields:
 * - port         : The GPIO port number (e.g., 0, 1, 2…).
 * - pin          : The pin number within the port.
 * - mode         : The mode of the GPIO (input, output, etc.).
 * - defaultLevel : The default output level of the GPIO (high or low).
 */
extern const GpioPinConfigType GpioConfig[];

extern const uint8_t GpioConfigCount;

#endif
