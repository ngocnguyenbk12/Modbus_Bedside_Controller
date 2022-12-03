#include "main.h"
#include "stm32f7xx_hal_gpio.h"


#define AC_ONOFF_STATE_ADDR     5000
#define AC_TEMP_VALUE_ADDR      35000

#define GPIO_0_ADDR             5002
#define GPIO_1_ADDR             5003
#define GPIO_2_ADDR             5004
#define GPIO_3_ADDR             5005
#define GPIO_4_ADDR             5006

#define GPIO_0_PIN             GPIO_PIN_10
#define GPIO_1_PIN             GPIO_PIN_9
#define GPIO_2_PIN             GPIO_PIN_8
#define GPIO_3_PIN             GPIO_PIN_7
#define GPIO_4_PIN             GPIO_PIN_6

#define GPIO_PORT               GPIOF




#define SLAVE_0_ADDR            8000
#define SLAVE_1_ADDR            8001
#define SLAVE_2_ADDR            8002
#define SLAVE_3_ADDR            8003
#define SLAVE_4_ADDR            8004


#define SLAVE_10_ADDR           35000
#define SLAVE_11_ADDR           35002
#define SLAVE_12_ADDR           35004
#define SLAVE_13_ADDR           35006
#define SLAVE_14_ADDR           35008

