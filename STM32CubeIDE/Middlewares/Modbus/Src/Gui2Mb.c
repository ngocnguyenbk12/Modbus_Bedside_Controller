#include "Gui2Mb.h"

void Device_Update(uint16_t Addr, bool state)
{
    for(int i = 0; i < MODBUS_MASTER_REG_NUM ; i++)
    {
        if(Addr == Master_Modbus.MasterDevice->Coil[i].Addr)
        {
            Master_Modbus.MasterDevice->Coil[i].Value = state;
        }
    }
}
