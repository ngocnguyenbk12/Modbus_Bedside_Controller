#include <gui/light_view_screen/LIGHT_VIEWView.hpp>
#include <gui/light_view_screen/LIGHT_VIEWPresenter.hpp>

LIGHT_VIEWPresenter::LIGHT_VIEWPresenter(LIGHT_VIEWView& v)
    : view(v)
{

}

void LIGHT_VIEWPresenter::activate()
{

}

void LIGHT_VIEWPresenter::deactivate()
{

}

void LIGHT_VIEWPresenter::LIGHT_Setnewvalue(uint16_t pin)
{
    view.LIGHT_Updater(pin);
}

void LIGHT_VIEWPresenter::LIGHT_MB2Light(uint16_t pin)
{
    view.Light_Updater(pin);
}