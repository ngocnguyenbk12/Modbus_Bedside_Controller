#include "Master_Polling.h"
#include "semphr.h"

void Master_Polling(void)
{
    if(xSemaphoreTake((QueueHandle_t)Master_Modbus.ModBusSphrHandle , 300)==pdTRUE)
	{
		modbus_t telegram[1];
		telegram[0].u8id = 2; // slave address
		telegram[0].u8fct = MB_FC_READ_REGISTERS; // function code (this one is registers write)
		telegram[0].u16RegAdd = 0x5000;
		telegram[0].u16CoilsNo = 1; // number of elements (coils or registers) to read
		telegram[0].u16reg = Master_ModbusData; // pointer to a memory array
		ModbusQuery(&Master_Modbus, telegram[0]);
		xSemaphoreGive((QueueHandle_t)Master_Modbus.ModBusSphrHandle);
    }
}