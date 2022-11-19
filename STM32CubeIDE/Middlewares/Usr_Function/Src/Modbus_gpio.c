#include "Modbus_GPIO.h"

void ModbusLight_Out(uint16_t pin, GPIO_PinState value)
{
    HAL_GPIO_WritePin(LIGHT_PORT,pin,value);
}