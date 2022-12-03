/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/main_menu_screen/MAIN_MENUView.hpp>
#include <gui/main_menu_screen/MAIN_MENUPresenter.hpp>
#include <gui/ac_view_screen/AC_VIEWView.hpp>
#include <gui/ac_view_screen/AC_VIEWPresenter.hpp>
#include <gui/light_view_screen/LIGHT_VIEWView.hpp>
#include <gui/light_view_screen/LIGHT_VIEWPresenter.hpp>
#include <gui/service_view_screen/SERVICE_VIEWView.hpp>
#include <gui/service_view_screen/SERVICE_VIEWPresenter.hpp>
#include <gui/time_setting_screen/TIME_SETTINGView.hpp>
#include <gui/time_setting_screen/TIME_SETTINGPresenter.hpp>
#include <gui/slave_view_screen/SLAVE_VIEWView.hpp>
#include <gui/slave_view_screen/SLAVE_VIEWPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// MAIN_MENU

void FrontendApplicationBase::gotoMAIN_MENUScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMAIN_MENUScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMAIN_MENUScreenNoTransitionImpl()
{
    touchgfx::makeTransition<MAIN_MENUView, MAIN_MENUPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// AC_VIEW

void FrontendApplicationBase::gotoAC_VIEWScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoAC_VIEWScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoAC_VIEWScreenNoTransitionImpl()
{
    touchgfx::makeTransition<AC_VIEWView, AC_VIEWPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// LIGHT_VIEW

void FrontendApplicationBase::gotoLIGHT_VIEWScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoLIGHT_VIEWScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoLIGHT_VIEWScreenNoTransitionImpl()
{
    touchgfx::makeTransition<LIGHT_VIEWView, LIGHT_VIEWPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// TIME_SETTING

void FrontendApplicationBase::gotoTIME_SETTINGScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoTIME_SETTINGScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoTIME_SETTINGScreenNoTransitionImpl()
{
    touchgfx::makeTransition<TIME_SETTINGView, TIME_SETTINGPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// SLAVE_VIEW

void FrontendApplicationBase::gotoSLAVE_VIEWScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoSLAVE_VIEWScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoSLAVE_VIEWScreenNoTransitionImpl()
{
    touchgfx::makeTransition<SLAVE_VIEWView, SLAVE_VIEWPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
