//
//  colleague.cpp
//  Phone
//
//  Created by Богдан Коваль on 29.08.2023.
//

#include "colleague.hpp"

Colleague::Colleague(){
    phone = "None";
    name = "None";
    fax = "None";
}

Colleague::Colleague(Contact* _contact, string _phone, string _name, string _fax, Adress _adress){
    setContact(_contact);
    setPhone(_phone);
    setName(_name);
    setFax(_fax);
    setAdress(_adress);
}

void Colleague::setAdress(Adress _adress){
    //try
    adress = _adress;
}
void Colleague::setPhone(string _phone){
    if(_phone.length() != string("+380977986878").length()){
        cout << "Error";
        cout << _phone.length();
        cout << type();
    }else{
        phone = _phone;
    }
}

void Colleague::setName(string _name){
    if (_name.length() <= 0){
        
    }else{
        name = _name;
    }
}
void Colleague::setFax(string _fax){
    fax = _fax;
}
void Colleague::setContact(Contact *_contact){
    contact = _contact;
}

string Colleague::getName()const{
    return name;
}
string Colleague::getPhone()const{
    return phone;
}
Adress Colleague::getAdress()const{
    return adress;
}
string Colleague::getFax()const{
    return fax;
}
Contact* Colleague::getContact()const{
    return contact;
}

void Colleague::show()const{
    cout << "--------------Colleague--------------\n";
    contact->show();
    cout << endl;
    cout << "   Phone work: " << phone << endl;
    cout << "   Adress work: ";
    adress.showInfo();
    cout << "   Fax number : " << fax << endl;
    cout << "   Company name : " << name << endl;
}
string Colleague::type()const{
    return "Friend";
}
