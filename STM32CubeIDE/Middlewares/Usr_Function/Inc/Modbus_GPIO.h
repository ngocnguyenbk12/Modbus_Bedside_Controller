#include "main.h"
#include "stm32f7xx_hal_gpio.h"
#include "Modbus_Cfg.h"
#include <stdbool.h>

#define LIGHT_PORT GPIOF

#define LIGHT_0_PIN     GPIO_PIN_10
#define LIGHT_1_PIN     GPIO_PIN_9
#define LIGHT_2_PIN     GPIO_PIN_8
#define LIGHT_3_PIN     GPIO_PIN_7
#define LIGHT_4_PIN     GPIO_PIN_6

#define LIGHT_OFF        0
#define LIGHT_ON         1

void ModbusLight_Out(uint16_t pin, GPIO_PinState value);
void ModbusGpio_WritebyAddr(uint16_t Addr, bool value);

