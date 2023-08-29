#pragma once
#include "personnel.hpp"
#include "Date.hpp"

class Friend:public Personnel{
    Date DB;
public:
    Friend();
    Friend(string _surname, Adress _adress, string _phone, Date _DB);
    void setDate(Date _DB);
    Date getDate()const;
    
    virtual void show()const override;
    virtual string type()const override;
};
