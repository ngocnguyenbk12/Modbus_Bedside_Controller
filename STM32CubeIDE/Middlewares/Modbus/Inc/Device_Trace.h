#include "main.h"
#include "Modbus.h"
#include "Modbus_Cfg.h"


uint16_t Device_GetDeviceValue(uint16_t Addr);
bool Device_GetCoilValue(uint16_t Addr);
uint16_t Device_GetRegister(uint16_t Addr);
void Device_WriteCoil(uint16_t Addr, bool Value);
uint16_t Testu16_Get(uint16_t Addr);


