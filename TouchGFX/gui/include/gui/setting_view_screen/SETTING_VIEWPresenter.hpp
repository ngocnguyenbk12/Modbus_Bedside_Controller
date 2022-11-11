#ifndef SETTING_VIEWPRESENTER_HPP
#define SETTING_VIEWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SETTING_VIEWView;

class SETTING_VIEWPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SETTING_VIEWPresenter(SETTING_VIEWView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~SETTING_VIEWPresenter() {};

private:
    SETTING_VIEWPresenter();

    SETTING_VIEWView& view;
};

#endif // SETTING_VIEWPRESENTER_HPP
