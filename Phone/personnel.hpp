#pragma once
#include "contact.hpp"

class Personnel:public Contact{
    string surname;
    string adress;
    string phone;
public:
    Personnel();
    Personnel(string _surname, string _adress, string _phone);
    
    void setSurname(string _surname);
    void setAdress(string _adress);
    void setPhone(string _phone);
    
    string getSurname()const;
    string getAdress()const;
    string getPhone()const;
    
    virtual void show()const;
    virtual string type()const;
};

