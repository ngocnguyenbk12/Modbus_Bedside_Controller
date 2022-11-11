#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"


extern "C"
{
   extern xQueueHandle    Q_Modbus2AC;
}
unsigned short Value ;
Model::Model() : modelListener(0)
{
    Q_Modbus2AC = xQueueGenericCreate(1,1,0);
}

void Model::tick()
{
    if(xQueueReceive(Q_Modbus2AC,&Value,0) == pdTRUE)
    {
        // Update New value //
        modelListener->AC_Setnewvalue(Value);
    }
}
