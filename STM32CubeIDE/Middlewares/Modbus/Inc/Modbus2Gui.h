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



xQueueHandle Q_Mb2Gui_AcOnOff;
xQueueHandle Q_Mb2Gui_AcTempUpdate;


void Queue_CoilUpdate(Device_Coil *Coil);
void Queue_RegUpdate(Device_Reg *Reg);


