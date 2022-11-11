#ifndef SETTING_VIEWVIEW_HPP
#define SETTING_VIEWVIEW_HPP

#include <gui_generated/setting_view_screen/SETTING_VIEWViewBase.hpp>
#include <gui/setting_view_screen/SETTING_VIEWPresenter.hpp>

class SETTING_VIEWView : public SETTING_VIEWViewBase
{
public:
    SETTING_VIEWView();
    virtual ~SETTING_VIEWView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETTING_VIEWVIEW_HPP
