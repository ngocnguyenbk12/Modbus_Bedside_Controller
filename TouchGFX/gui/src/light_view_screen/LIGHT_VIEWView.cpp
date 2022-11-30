#include <gui/light_view_screen/LIGHT_VIEWView.hpp>
extern "C"
{
    #include "Modbus.h"
	// #include "Modbus_GPIO.h"
    #include "stm32f7xx_hal_gpio.h"
    #include "touchgfx/hal/Types.hpp"
   // #include "Modbus_Cfg.h"
    //extern DeviceCoil_Type Coil_Data[MODBUS_SLAVE_COIL_MAX];
}

static int Light_0_State = 0;
static int Light_1_State = 0;
static int Light_2_State = 0;
static int Light_3_State = 0;
static int Light_4_State = 0;

LIGHT_VIEWView::LIGHT_VIEWView()
{

}

void LIGHT_VIEWView::setupScreen()
{
    LIGHT_VIEWViewBase::setupScreen();
}

void LIGHT_VIEWView::tearDownScreen()
{
    LIGHT_VIEWViewBase::tearDownScreen();
}

void LIGHT_VIEWView::Light_Updater(uint16_t pin)
{
//    switch (pin)
//    {
//    case LIGHT_0_ADDRESS:
//        //ModbusLight_Out(LIGHT_0_PIN,(GPIO_PinState)Coil_Data[0].Value);
//        break;
//    case LIGHT_1_ADDRESS:
//        //ModbusLight_Out(LIGHT_1_PIN,(GPIO_PinState)Coil_Data[1].Value);
//        break;
//    case LIGHT_2_ADDRESS:
//        //ModbusLight_Out(LIGHT_2_PIN,(GPIO_PinState)Coil_Data[2].Value);
//        break;
//    case LIGHT_3_ADDRESS:
//        //ModbusLight_Out(LIGHT_3_PIN,(GPIO_PinState)Coil_Data[3].Value);
//        break;
//    case LIGHT_4_ADDRESS:
//        //ModbusLight_Out(LIGHT_4_PIN,(GPIO_PinState)Coil_Data[4].Value);
//        break;
//    default:
//        break;
//    }
}

void LIGHT_VIEWView::LIGHT_Updater(uint16_t pin)
{
//    switch (pin)
//    {
//    case LIGHT_0_ADDRESS:
//        //ModbusLight_Out(LIGHT_0_PIN,(GPIO_PinState)Coil_Data[0].Value);
//        break;
//    case LIGHT_1_ADDRESS:
//        //ModbusLight_Out(LIGHT_1_PIN,(GPIO_PinState)Coil_Data[1].Value);
//        break;
//    case LIGHT_2_ADDRESS:
//        //ModbusLight_Out(LIGHT_2_PIN,(GPIO_PinState)Coil_Data[2].Value);
//        break;
//    case LIGHT_3_ADDRESS:
//        //ModbusLight_Out(LIGHT_3_PIN,(GPIO_PinState)Coil_Data[3].Value);
//        break;
//    case LIGHT_4_ADDRESS:
//        //ModbusLight_Out(LIGHT_4_PIN,(GPIO_PinState)Coil_Data[4].Value);
//        break;
//    default:
//        break;
//    }
}

void LIGHT_VIEWView::Light_Button0()
{
//    if(Light_0_State == LIGHT_OFF)
//    {
//        //ModbusLight_Out(LIGHT_0_PIN,GPIO_PIN_RESET);
//        Light_0_State = LIGHT_ON;
//    }
//    else if(Light_0_State == LIGHT_ON)
//    {
//        //ModbusLight_Out(LIGHT_0_PIN,GPIO_PIN_SET);
//        Light_0_State = LIGHT_OFF;
//    }
}


void LIGHT_VIEWView::Light_Button1()
{
//    if(Light_1_State == LIGHT_OFF)
//    {
//        //ModbusLight_Out(LIGHT_1_PIN,GPIO_PIN_RESET);
//        Light_1_State = LIGHT_ON;
//    }
//    else if(Light_1_State == LIGHT_ON)
//    {
//        //ModbusLight_Out(LIGHT_1_PIN,GPIO_PIN_SET);
//        Light_1_State = LIGHT_OFF;
//    }
}

void LIGHT_VIEWView::Light_Button2()
{
//    if(Light_2_State == LIGHT_OFF)
//    {
//        //ModbusLight_Out(LIGHT_2_PIN,GPIO_PIN_RESET);
//        Light_2_State = LIGHT_ON;
//    }
//    else if(Light_2_State == LIGHT_ON)
//    {
//        //ModbusLight_Out(LIGHT_2_PIN,GPIO_PIN_SET);
//        Light_2_State = LIGHT_OFF;
//    }
}


void LIGHT_VIEWView::Light_Button3()
{
//    if(Light_3_State == LIGHT_OFF)
//    {
//        //ModbusLight_Out(LIGHT_3_PIN,GPIO_PIN_RESET);
//        Light_3_State = LIGHT_ON;
//    }
//    else if(Light_3_State == LIGHT_ON)
//    {
//        //ModbusLight_Out(LIGHT_3_PIN,GPIO_PIN_SET);
//        Light_3_State = LIGHT_OFF;
//    }
}

void LIGHT_VIEWView::Light_Button4()
{
//    if(Light_4_State == LIGHT_OFF)
//    {
//        //ModbusLight_Out(LIGHT_4_PIN,GPIO_PIN_RESET);
//        Light_4_State = LIGHT_ON;
//    }
//    else if(Light_4_State == LIGHT_ON)
//    {
//        //ModbusLight_Out(LIGHT_4_PIN,GPIO_PIN_SET);
//        Light_4_State = LIGHT_OFF;
//    }
}
