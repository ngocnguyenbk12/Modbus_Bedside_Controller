#include "Modbus_GPIO.h"
#include "Modbus.h"
extern DeviceCoil_Type Coil_Data[MODBUS_SLAVE_COIL_MAX];

void ModbusLight_Out(uint16_t pin, GPIO_PinState value)
{
    HAL_GPIO_WritePin(LIGHT_PORT,pin,value);
}
void ModbusGpio_WritebyAddr(uint16_t Addr, bool value)
{
    switch (Addr)
    {
    case LIGHT_0_ADDRESS:
        ModbusLight_Out(LIGHT_0_PIN,(GPIO_PinState)Coil_Data[0].Value);
        break;
    case LIGHT_1_ADDRESS:
        ModbusLight_Out(LIGHT_1_PIN,(GPIO_PinState)Coil_Data[1].Value);
        break;
    case LIGHT_2_ADDRESS:
        ModbusLight_Out(LIGHT_2_PIN,(GPIO_PinState)Coil_Data[2].Value);
        break;
    case LIGHT_3_ADDRESS:
        ModbusLight_Out(LIGHT_3_PIN,(GPIO_PinState)Coil_Data[3].Value);
        break;
    case LIGHT_4_ADDRESS:
        ModbusLight_Out(LIGHT_4_PIN,(GPIO_PinState)Coil_Data[4].Value);
        break;
    default:
        break;
    }
}
