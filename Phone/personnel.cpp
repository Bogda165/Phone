
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
    if(_phone.length() != string("+380977986878").length()){
        cout << "Error";
        cout << _phone.length();
        cout << getSurname();
        cout << type();
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
    cout << "--------------Persone--------------\n";
    cout << "   Surname : " << surname << endl;
    cout << "   Phone : " << phone << endl;
    cout << "   Adress : ";
    adress.showInfo();
}

std::istream& operator>>(std::istream& is, Personnel& obj){
    string tmp1;
    cout << "Enter surname : ";
    is >> tmp1;
    obj.setSurname(tmp1);
    cout << "Enter phone : ";
    is >> tmp1;
    obj.setPhone(tmp1);
    cout << "Adress : \n";
    is >> obj.adress;
    
    return is;
}
