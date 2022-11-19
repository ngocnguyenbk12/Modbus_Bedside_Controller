#include "main.h"
#include "Modbus.h"
#include "ModbusConfig.h"
#include "FreeRTOS.h"
#include "cmsis_os.h"
#include "task.h"
#include "queue.h"
#include "timers.h"
#include "semphr.h"


modbusHandler_t *MastermHandler[MAX_M_HANDLERS];

UART_HandleTypeDef huart6;
#define MASTER_MODBUS_PORT  huart6;
modbusHandler_t Master_Modbus;
uint16_t Master_ModbusData[50000];
DeviceType Master_Data[4];

void MMaster_Init(void);

