#pragma once
#include "contact.hpp"
#include "Adress.hpp"

class Personnel:public Contact{
protected:
    string surname;
    Adress adress;
    string phone;
public:
    Personnel();
    Personnel(string _surname, Adress _adress, string _phone);
    
    void setSurname(string _surname);
    void setAdress(Adress _adress);
    void setPhone(string _phone);
    
    string getSurname()const;
    Adress getAdress()const;
    string getPhone()const;
    
    virtual void show()const override;
    virtual string type()const override;
    friend std::istream& operator >> (std::istream& is, Personnel& t);
};

