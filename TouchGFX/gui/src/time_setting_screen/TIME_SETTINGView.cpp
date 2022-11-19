#include <gui/time_setting_screen/TIME_SETTINGView.hpp>

TIME_SETTINGView::TIME_SETTINGView()
{

}

void TIME_SETTINGView::setupScreen()
{
    TIME_SETTINGViewBase::setupScreen();
}

void TIME_SETTINGView::tearDownScreen()
{
    TIME_SETTINGViewBase::tearDownScreen();
}

void TIME_SETTINGView::Time_UpButton()
{
    presenter->Test_Action();
}