//
//  Friend.cpp
//  Phone
//
//  Created by Богдан Коваль on 29.08.2023.
//

#include "Friend.hpp"

Friend::Friend(){
    
}
Friend::Friend(string _surname, Adress _adress, string _phone, Date _DB):
Personnel(_surname, _adress, _phone){
    setDate(_DB);
}


void Friend::setDate(Date _DB){
    DB = _DB;
}
Date Friend::getDate()const{
    return DB;
}

void Friend::show()const{
    cout << "----------------Friend---------------\n";
    cout << "   Surname : " << surname << endl;
    cout << "   Phone : " << phone << endl;
    cout << "   Birth date : " << DB << endl;
    cout << "   Adress : ";
    adress.showInfo();

}
string Friend::type()const{
    return "Friend";
}

std::istream& operator>>(std::istream& is, Friend& obj){
    cout << "Enter surname : ";
    is >> obj.surname;
    cout << "Enter phone : ";
    is >> obj.phone;
    cout << "Enter date -> ";
    is >> obj.DB;
    cout << "Adress : \n";
    is >> obj.adress;
    
    return is;
}
