
#include "personnel.hpp"

Personnel::Personnel(){
    surname = "None";
    phone = "None";
}

Personnel::Personnel(string _surname, Adress _adress, string _phone){
    setSurname(_surname);
    setAdress(_adress);
    setPhone(_phone);
}
void Personnel::setSurname(string _surname){
    if (_surname.length() <= 0){
        
    }else{
        surname = _surname;
    }
}

void Personnel::setAdress(Adress _adress){
    //try
    adress = _adress;
}

void Personnel::setPhone(string _phone){
    if(phone.length() != string("+380977986878").length() && phone.length() != string("0977986878").length()){
        
    }else{
        phone = _phone;
    }
}


string Personnel::getSurname()const{
    return surname;
}
string Personnel::getPhone()const{
    return phone;
}
Adress Personnel::getAdress()const{
    return adress;
}

string Personnel::type()const{
    return "Personnel";
}
void Personnel::show()const{
    cout << "--------------Personnel--------------\n";
    cout << "   Surname : " << surname << endl;
    cout << "   Phone : " << phone << endl;
    cout << "   Adress : ";
    adress.showInfo();
}
