#include "Device_Trace.h"


extern DeviceType Slave_Data[MODBUS_SLAVE_DEVICE_MAX];

uint16_t Device_GetDeviceValue(uint16_t Addr)
{
    uint16_t RetVal;
    for(uint8_t i; i< MODBUS_SLAVE_DEVICE_MAX; i++)
    {
        if(Slave_Data[i].Addr == Addr)
        {
            RetVal = Slave_Data[i].Value;
            return RetVal;
        }
    }
    return 0;
}

bool Device_GetCoilValue(uint16_t Addr)
{
    bool RetVal;
    for(uint8_t i; i< MODBUS_SLAVE_DEVICE_MAX; i++)
    {
        if(Slave_Data[i].Addr == Addr)
        {
            RetVal = Slave_Data[i].Value;
            return RetVal;
        }
    }
}

uint16_t Device_GetRegister(uint16_t Addr)
{
    uint16_t RetVal;
    for(uint8_t i; i< MODBUS_SLAVE_DEVICE_MAX; i++)
    {
        if(Slave_Data[i].Addr == Addr)
        {
            RetVal = Slave_Data[i].Value;
            return RetVal;
        }
    }
    return 0;
}

void Device_WriteCoil(uint16_t Addr, bool Value)
{
    for(uint8_t i; i< MODBUS_SLAVE_DEVICE_MAX; i++)
    {
        if(Slave_Data[i].Addr == Addr)
        {
            Slave_Data[i].Value = (uint8_t)Value;
        }
    }
}

void Device_WriteRegister(uint16_t Addr, uint16_t Value)
{
    for(uint8_t i; i< MODBUS_SLAVE_DEVICE_MAX; i++)
    {
        if(Slave_Data[i].Addr == Addr)
        {
            Slave_Data[i].Value = Value;
        }
    }
}


uint16_t Testu16_Get(uint16_t Addr)
{
    uint16_t RetVal;
    for(uint8_t i = 0; i< MODBUS_SLAVE_DEVICE_MAX; i++)
    {
        if(Slave_Data[i].Addr == Addr)
        {
            RetVal = Slave_Data[i].Value;
            return RetVal;
        }
    }
    RetVal = 0;
    return RetVal;
}






