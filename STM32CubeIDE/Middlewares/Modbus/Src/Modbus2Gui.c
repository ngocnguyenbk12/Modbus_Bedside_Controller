#include "Modbus2Gui.h"

void Queue_CoilUpdate(Device_Coil *Coil)
{
    bool    CoilVal;
    if(Coil->Addr == AC_ONOFF_STATE_ADDR)
    {
        CoilVal = Coil->Value;
        xQueueSend(Q_Mb2Gui_AcOnOff,&CoilVal,0);
    }
}


void Queue_RegUpdate(Device_Reg *Reg)
{
    uint16_t RegVal;
    if(Reg->Addr == AC_TEMP_VALUE_ADDR)
    {
        RegVal = Reg->Value;
        xQueueSend(Q_Mb2Gui_AcTempUpdate,&RegVal,0);
    }
}
