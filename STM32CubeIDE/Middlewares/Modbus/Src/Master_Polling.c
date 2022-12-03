#include "Master_Polling.h"
#include "semphr.h"

modbus_t Master_Polling_Telegram[MASTER_POLLING_TELEGRAM_NUM];
void Master_Polling(void)
{
    if(xSemaphoreTake((QueueHandle_t)Master_Modbus.ModBusSphrHandle , 300)==pdTRUE)
	{
		
		Master_Polling_Telegram[0].u8id = 2; // slave address
		Master_Polling_Telegram[0].u8fct = MB_FC_READ_COILS; // function code (this one is registers write)
		Master_Polling_Telegram[0].u16RegAdd = 5000;
		Master_Polling_Telegram[0].u16CoilsNo = 1; // number of elements (coils or registers) to read
		Master_Polling_Telegram[0].u16reg = Master_ModbusData; // pointer to a memory array
		ModbusQuery(&Master_Modbus, Master_Polling_Telegram[0]);
		xSemaphoreGive((QueueHandle_t)Master_Modbus.ModBusSphrHandle);
    }
	if(xSemaphoreTake((QueueHandle_t)Master_Modbus.ModBusSphrHandle , 300)==pdTRUE)
	{
		
		Master_Polling_Telegram[1].u8id = 2; // slave address
		Master_Polling_Telegram[1].u8fct = MB_FC_READ_REGISTERS; // function code (this one is registers write)
		Master_Polling_Telegram[1].u16RegAdd = 35000;
		Master_Polling_Telegram[1].u16CoilsNo = 1; // number of elements (coils or registers) to read
		Master_Polling_Telegram[1].u16reg = Master_ModbusData; // pointer to a memory array
		ModbusQuery(&Master_Modbus, Master_Polling_Telegram[1]);
		xSemaphoreGive((QueueHandle_t)Master_Modbus.ModBusSphrHandle);
    }
}
