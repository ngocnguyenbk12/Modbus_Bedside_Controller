#ifndef LIGHT_VEWPRESENTER_HPP
#define LIGHT_VEWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class LIGHT_VEWView;

class LIGHT_VEWPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    LIGHT_VEWPresenter(LIGHT_VEWView& v);

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

    virtual ~LIGHT_VEWPresenter() {};

private:
    LIGHT_VEWPresenter();

    LIGHT_VEWView& view;
};

#endif // LIGHT_VEWPRESENTER_HPP
