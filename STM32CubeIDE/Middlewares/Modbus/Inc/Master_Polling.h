#include "Modbus.h"
#include "main.h"
#include "Modbus2Gui.h"

#define MASTER_POLLING_TELEGRAM_NUM		2
extern modbus_t Master_Polling_Telegram[MASTER_POLLING_TELEGRAM_NUM];
modbus_t telegram[1]; 
void Master_Polling(void);
