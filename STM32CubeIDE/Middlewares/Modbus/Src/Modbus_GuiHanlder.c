/*
 * Modbus_GuiHandler.c
 *
 *  Created on: 
 *      Author: Ngoc Nguyen
 *      Contact: ngocnguyenbk12@gmail.com
 * 
 */


#include "Modbus_GuiHandler.h"
#include "Device_Trace.h"
#include "Modbus_Cfg.h"
volatile uint16_t Curr_Value;

Std_Return Ac_TempUpdate(uint16_t value, Ac_ActionType action)
{
    //mHandlers[0]->u16regs[30010] = 0xFFFF;

    Curr_Value = Testu16_Get(TEMP_ADDRESS);
    Std_Return RetVal = E_OK;
    switch (action)
    {
    case AC_SETLOW:
        Device_WriteRegister(TEMP_ADDRESS,value);
        //mHandlers[0]->u16regs[30001] = 18;
        break;
    case AC_SETMED:
        Device_WriteRegister(TEMP_ADDRESS,value);
       // mHandlers[0]->u16regs[30001] = 22;
        break;
    case AC_SETHIGH:
        Device_WriteRegister(TEMP_ADDRESS,value);
       // mHandlers[0]->u16regs[30001] = 26;
        break;
    case AC_UP:
        Curr_Value++;
        Device_WriteRegister(TEMP_ADDRESS,value);
       // mHandlers[0]->u16regs[30001]++;
        break;
    case AC_DOWN:
        Curr_Value--;
        Device_WriteRegister(TEMP_ADDRESS,value);
       // mHandlers[0]->u16regs[30001]--;
        break;
    case AC_ON:
        Device_WriteRegister(TEMP_ADDRESS,value);
       // mHandlers[0]->u16regs[30001] = 22;
        break;
    case AC_STOP:
        Device_WriteRegister(TEMP_ADDRESS,value);
        // mHandlers[0]->u16regs[30001] = 0;
        break;
    default:
        break;
    }

    return RetVal;
}


Std_Return Ac_TempQueueUpdate(uint16_t Value)
{
    uint16_t tValue = Value;
    xQueueSend(Q_Modbus2AC,&tValue,0);
    return E_OK;
}
