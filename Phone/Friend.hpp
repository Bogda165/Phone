#pragma once
#include "personnel.hpp"
#include "Date.hpp"

class Friend:public Personnel{
    Date BD;
public:
    void setDate(Date _DB);
    Date getDat()const;
    
    virtual void show()const override;
    virtual string type()const override;
};
