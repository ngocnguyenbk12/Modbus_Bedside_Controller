#ifndef LIGHT_VEWVIEW_HPP
#define LIGHT_VEWVIEW_HPP

#include <gui_generated/light_vew_screen/LIGHT_VEWViewBase.hpp>
#include <gui/light_vew_screen/LIGHT_VEWPresenter.hpp>

class LIGHT_VEWView : public LIGHT_VEWViewBase
{
public:
    LIGHT_VEWView();
    virtual ~LIGHT_VEWView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LIGHT_VEWVIEW_HPP
