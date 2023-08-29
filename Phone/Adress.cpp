#include "Adress.hpp"

Adress::Adress(){
    street = "None";
    house = 0;
    postcode = 10000;
    city = "None";
    country = "None";
}
Adress::Adress(string _country, string _city, string _street, int _house, int _postocde){
    setStreet(_street);
    setCountry(_country);
    setHouse(_house);
    setPostcode(_postocde);
    setCity(_city);
}

void Adress::setCity(string _city){
    if(_city.length() <= 0){
        
    }else{
        city = _city;
    }
}
void Adress::setHouse(int _house){
    if(_house < 0){
        
    }else{
        house = _house;
    }
}

void Adress::setStreet(string _street){
    if(_street.length() <= 0){
        
    }else{
        street = _street;
    }
}

void Adress::setCountry(string _coutnry){
    if (_coutnry.length() <= 0){
        
    }else{
        country = _coutnry;
    }
}
void Adress::setPostcode(int PC){
    if(PC > 99999 || PC < 10000){
        
    }else{
        postcode = PC;
    }
}

int Adress::getPc()const{
    return postcode;
}
string Adress::getCity()const{
    return city;
}
string Adress::getCountry()const{
    return country;
}
string Adress::getStreet()const{
    return street;
}
int Adress::getHouse()const{
    return house;
}


void Adress::showInfo()const{
    std::cout << "Adress: " << country << "-" << city << "-\n    -" << street << "," << house << ".\n   Potal code : " << postcode << std::endl;
}

std::istream& operator>>(std::istream& is, Adress& obj){
    string tmp;
    int tmp2;
    std::cout << "Enter country : ";
    is >> tmp;
    obj.setCountry(tmp);
    std::cout << "Enter city : ";
    is >> tmp;
    obj.setCity(tmp);
    std::cout << "Enter street : ";
    is >> tmp;
    obj.setStreet(tmp);
    cout << "Enter house nubmer : ";
    is >> tmp2;
    obj.setHouse(tmp2);
    cout << "Enter postal code : ";
    is >> tmp2;
    obj.setPostcode(tmp2);
    return is;
}
