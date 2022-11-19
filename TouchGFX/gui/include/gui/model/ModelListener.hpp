    #ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include "touchgfx/hal/Types.hpp"
class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    
    virtual void AC_Setnewvalue(unsigned short Value) {}
    virtual void LIGHT_Setnewvalue(uint16_t pin) {}
    virtual void RTC_UpdateTime(uint8_t hour, uint8_t minute, uint8_t second) {}
    virtual void LIGHT_MB2Light(uint16_t pin) {}
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
