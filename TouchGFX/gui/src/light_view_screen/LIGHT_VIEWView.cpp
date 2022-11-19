#include <gui/light_view_screen/LIGHT_VIEWView.hpp>
extern "C"
{
	#include "Modbus_GPIO.h"
    #include "stm32f7xx_hal_gpio.h"
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

void LIGHT_VIEWView::Light_Button0()
{
    if(Light_0_State == LIGHT_OFF)
    {
        ModbusLight_Out(LIGHT_0_PIN,GPIO_PIN_RESET);
        Light_0_State = LIGHT_ON;
    }
    else if(Light_0_State == LIGHT_ON)
    {
        ModbusLight_Out(LIGHT_0_PIN,GPIO_PIN_SET);
        Light_0_State = LIGHT_OFF;
    }
}


void LIGHT_VIEWView::Light_Button1()
{
    if(Light_1_State == LIGHT_OFF)
    {
        ModbusLight_Out(LIGHT_1_PIN,GPIO_PIN_RESET);
        Light_1_State = LIGHT_ON;
    }
    else if(Light_1_State == LIGHT_ON)
    {
        ModbusLight_Out(LIGHT_1_PIN,GPIO_PIN_SET);
        Light_1_State = LIGHT_OFF;
    }
}

void LIGHT_VIEWView::Light_Button2()
{
    if(Light_2_State == LIGHT_OFF)
    {
        ModbusLight_Out(LIGHT_2_PIN,GPIO_PIN_RESET);
        Light_2_State = LIGHT_ON;
    }
    else if(Light_2_State == LIGHT_ON)
    {
        ModbusLight_Out(LIGHT_2_PIN,GPIO_PIN_SET);
        Light_2_State = LIGHT_OFF;
    }
}


void LIGHT_VIEWView::Light_Button3()
{
    if(Light_3_State == LIGHT_OFF)
    {
        ModbusLight_Out(LIGHT_3_PIN,GPIO_PIN_RESET);
        Light_3_State = LIGHT_ON;
    }
    else if(Light_3_State == LIGHT_ON)
    {
        ModbusLight_Out(LIGHT_3_PIN,GPIO_PIN_SET);
        Light_3_State = LIGHT_OFF;
    }
}

void LIGHT_VIEWView::Light_Button4()
{
    if(Light_4_State == LIGHT_OFF)
    {
        ModbusLight_Out(LIGHT_4_PIN,GPIO_PIN_RESET);
        Light_4_State = LIGHT_ON;
    }
    else if(Light_4_State == LIGHT_ON)
    {
        ModbusLight_Out(LIGHT_4_PIN,GPIO_PIN_SET);
        Light_4_State = LIGHT_OFF;
    }
}