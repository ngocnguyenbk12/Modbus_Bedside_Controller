/*
 * Modbus_GuiHandler.h
 *
 *  Created on: 
 *      Author: Ngoc Nguyen
 *      Contact: ngocnguyenbk12@gmail.com
 *
 */

#include "main.h"
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "ModbusConfig.h"
#include "Modbus.h"

/**             Modbus Memory Address               **/
/**
 * 30001            Air Conditioner
 * 00001->00008     Digital Input Output
 * TBD
*/


/**                             Type def                        **/
typedef enum
{
    AC_SETLOW = 0,
    AC_SETHIGH,
    AC_SETMED,
    AC_UP,
    AC_DOWN,
    AC_ON,
    AC_STOP
}Ac_ActionType;


xQueueHandle    Q_Modbus2AC;
xQueueHandle    Q_Modbus2Light;
modbusHandler_t *mHandlers[MAX_M_HANDLERS];


void Ac_TempUpdate(uint16_t value, Ac_ActionType action);
void Ac_TempQueueUpdate(uint16_t Value);
void Light_QueueUpdate(uint16_t addr);
