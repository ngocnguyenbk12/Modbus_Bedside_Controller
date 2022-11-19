#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "touchgfx/hal/Types.hpp"


extern "C"
{
	#include "FreeRTOS.h"
	#include "queue.h"
	#include "task.h"
	#include "main.h"
	#include "Modbus.h"
	#include "Modbus_Master.h"
	#include "semphr.h"
	#include "cmsis_os.h"
	#include "stm32f7xx_hal.h"

   extern xQueueHandle    Q_Modbus2AC;
   uint8_t counter = 0;
   uint16_t reg ;
extern RTC_HandleTypeDef hrtc;
extern RTC_TimeTypeDef RTC_Time;
extern RTC_DateTypeDef RTC_Date;
}
extern "C" void ModbusQueryInject(modbusHandler_t * modH, modbus_t telegram);
unsigned short Value ;




Model::Model() : modelListener(0)
{
    Q_Modbus2AC = xQueueGenericCreate(1,1,0);
}

void Model::tick()
{

	HAL_RTC_GetTime(&hrtc, &RTC_Time, RTC_FORMAT_BCD);
	HAL_RTC_GetDate(&hrtc, &RTC_Date, RTC_FORMAT_BCD);
	modelListener->RTC_UpdateTime(RTC_Time.Hours, RTC_Time.Minutes, RTC_Time.Seconds);


    if(xQueueReceive(Q_Modbus2AC,&Value,0) == pdTRUE)
    {
        // Update New value //
        modelListener->AC_Setnewvalue(Value);
    }


	if(counter>=10) // this is for slow down the frequency for reading variables
   	{
	   counter = 0;
	   if(xSemaphoreTake((QueueHandle_t)Master_Modbus.ModBusSphrHandle , 300)==pdTRUE)
	   {
	       modbus_t telegram[1];
	       telegram[0].u8id = 1; // slave address
	       telegram[0].u8fct = MB_FC_READ_REGISTERS; // function code (this one is registers write)
	       telegram[0].u16RegAdd = 0x0;
	       telegram[0].u16CoilsNo = 1; // number of elements (coils or registers) to read
	       telegram[0].u16reg = Master_ModbusData; // pointer to a memory array
	       ModbusQuery(&Master_Modbus, telegram[0]);
	       //if(reg != ModbusDATARX[0])
	       //{
		   reg = Master_ModbusData[0];
	       // }
	       xSemaphoreGive((QueueHandle_t)Master_Modbus.ModBusSphrHandle);
	   }
	}
	counter++;



    
}

void Model::TestAction(void)
{
    	 modbus_t telegram[1];


	//  if(xSemaphoreTake((QueueHandle_t)Master_Modbus.ModBusSphrHandle , 300)==pdTRUE)
	//  {
		
	// 	 Master_ModbusData[0] = 0xFFFF;
	// 	 telegram[0].u8id = 1; // slave address
	// 	 telegram[0].u8fct = MB_FC_WRITE_COIL; // function code (this one is registers write)
	// 	 telegram[0].u16RegAdd = 0x0;
	// 	 telegram[0].u16CoilsNo = 1; // number of elements (coils or registers) to read
	// 	 telegram[0].u16reg = Master_ModbusData; // pointer to a memory array
	// 	 ModbusQueryInject(&Master_Modbus, telegram[0]);
	// 	 xSemaphoreGive((QueueHandle_t)Master_Modbus.ModBusSphrHandle);

	//  }
    // // 	modbus_t telegram[1];

	// //Master_ModbusData[0] = value;

	// //xSemaphoreTake((QueueHandle_t)ModbusH.ModBusSphrHandle , portMAX_DELAY);
	// telegram[0].u8id = 1; // slave address
	// telegram[0].u8fct = MB_FC_WRITE_COIL; // function code (this one is registers write)
	// telegram[0].u16RegAdd = 0x0;
	// telegram[0].u16CoilsNo = 1; // number of elements (coils or registers) to read
	// telegram[0].u16reg = Master_ModbusData; // pointer to a memory array
	// //xSemaphoreGive((QueueHandle_t)ModbusH.ModBusSphrHandle);
	// ModbusQueryInject(&Master_Modbus, telegram[0]);
}
