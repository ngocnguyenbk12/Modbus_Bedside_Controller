/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TIME_SETTINGVIEWBASE_HPP
#define TIME_SETTINGVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/time_setting_screen/TIME_SETTINGPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/containers/clock/AnalogClock.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class TIME_SETTINGViewBase : public touchgfx::View<TIME_SETTINGPresenter>
{
public:
    TIME_SETTINGViewBase();
    virtual ~TIME_SETTINGViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void Time_Down()
    {
        // Override and implement this function in TIME_SETTING
    }

    virtual void Time_Left()
    {
        // Override and implement this function in TIME_SETTING
    }

    virtual void Time_Up()
    {
        // Override and implement this function in TIME_SETTING
    }

    virtual void Time_Right()
    {
        // Override and implement this function in TIME_SETTING
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TiledImage tiledImage1;
    touchgfx::AnalogClock TIME_CLOCK;
    touchgfx::ButtonWithLabel TIME_UP;
    touchgfx::ButtonWithLabel TIME_RIGHT;
    touchgfx::ButtonWithLabel TIME_LEFT;
    touchgfx::ButtonWithLabel TIME_DOWN;
    touchgfx::ButtonWithLabel TIME_BACK;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<TIME_SETTINGViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // TIME_SETTINGVIEWBASE_HPP
