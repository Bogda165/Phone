#pragma once
#include "contact.hpp"
#include "Adress.hpp"

class Colleague:public Contact{
    Adress adress;
    string name;
    string phone;
    string fax;
    Contact* contact;
public:
    Colleague();
    Colleague(Contact* _contact, string _phone, string _name, string _fax, Adress _adress);
    
    void setAdress(Adress _adress);
    void setPhone(string _phone);
    void setName(string _name);
    void setFax(string _fax);
    void setContact(Contact* _contact);
    
    Adress getAdress()const;
    string getPhone()const;
    string getName()const;
    string getFax()const;
    Contact* getContact()const;
    
    virtual void show()const override;
    virtual string type()const override;
};
