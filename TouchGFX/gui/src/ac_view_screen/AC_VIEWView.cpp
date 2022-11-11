#include <gui/ac_view_screen/AC_VIEWView.hpp>


static int AC_onoff_state  = 0;
static uint8_t Temperature = 20;


AC_VIEWView::AC_VIEWView()
{

}

void AC_VIEWView::setupScreen()
{
    AC_VIEWViewBase::setupScreen();

    if(AC_onoff_state == 0){
        Temperature = 00;
        Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
        TEMPERATURE.invalidate();
    }
    else
    {
    	Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
    	TEMPERATURE.invalidate();
    }
}

void AC_VIEWView::tearDownScreen()
{
    AC_VIEWViewBase::tearDownScreen();
}


void AC_VIEWView::AC_TempUp(){
	if(AC_onoff_state == 1){
		if(Temperature < 30){
			Temperature++;
			Counter++;
			Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
			TEMPERATURE.invalidate();
		}
		else{
			Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
			TEMPERATURE.invalidate();
		}
	}
}

void AC_VIEWView::AC_TempDown()
{
	if(AC_onoff_state == 1){
		if(Temperature > 15){
			Temperature--;
			Counter--;
			Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
			TEMPERATURE.invalidate();
		}
		else
		{
			Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
			TEMPERATURE.invalidate();
		}
	}
}


void AC_VIEWView::AC_setonoff(){
	// function to turn off AC
    if(AC_onoff_state == 0){
        Temperature = 22;
        Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
        TEMPERATURE.invalidate();
        AC_onoff_state = 1;
    }
    else
    {
    	AC_onoff_state = 0;
    	Temperature = 00;
        Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
    	TEMPERATURE.invalidate();
    }


}
void AC_VIEWView::AC_TempLow(){
	if(AC_onoff_state == 1){
	Temperature = 18;
	Counter--;
    Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
	TEMPERATURE.invalidate();
	}
}

void AC_VIEWView::AC_TempMed(){
	if(AC_onoff_state == 1 ){
	Temperature = 22;
    Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
	TEMPERATURE.invalidate();
	}
}

void AC_VIEWView::AC_TempHigh(){
	if(AC_onoff_state == 1){
	Temperature = 26;
	Counter++;
    Unicode::snprintf(TEMPERATUREBuffer, TEMPERATURE_SIZE, "%u", Temperature);
	TEMPERATURE.invalidate();
	}

}
