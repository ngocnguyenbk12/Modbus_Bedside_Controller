/*
 * Modbus_GuiHandler.c
 *
 *  Created on: 
 *      Author: Ngoc Nguyen
 *      Contact: ngocnguyenbk12@gmail.com
 * 
 */


#include "Modbus_GuiHandler.h"



Std_Return Ac_TempUpdate(uint16_t value, Ac_ActionType action)
{
    mHandlers[0]->u16regs[30010] = 0xFFFF;
    Std_Return RetVal = E_OK;
    switch (action)
    {
    case AC_SETLOW:
        mHandlers[0]->u16regs[30001] = 18;
        break;
    case AC_SETMED:
        mHandlers[0]->u16regs[30001] = 22;
        break;
    case AC_SETHIGH:
        mHandlers[0]->u16regs[30001] = 26;
        break;
    case AC_UP:
        mHandlers[0]->u16regs[30001]++;
        break;
    case AC_DOWN:
        mHandlers[0]->u16regs[30001]--;
        break;
    case AC_ON:
        mHandlers[0]->u16regs[30001] = 22;
        break;
    case AC_STOP:
        mHandlers[0]->u16regs[30001] = 0;
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
