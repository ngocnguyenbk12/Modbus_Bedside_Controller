#ifndef SERVICE_VIEWVIEW_HPP
#define SERVICE_VIEWVIEW_HPP

#include <gui_generated/service_view_screen/SERVICE_VIEWViewBase.hpp>
#include <gui/service_view_screen/SERVICE_VIEWPresenter.hpp>

class SERVICE_VIEWView : public SERVICE_VIEWViewBase
{
public:
    SERVICE_VIEWView();
    virtual ~SERVICE_VIEWView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SERVICE_VIEWVIEW_HPP
