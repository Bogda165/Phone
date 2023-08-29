#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Adress{
    string street;
    int house;
    int postcode;
    string city;
    string country;
    
public:
    Adress();
    Adress(string _country, string _city, string _street, int _house, int _postocde);
    
    void setStreet(string _street);
    void setHouse (int _house);
    void setPostcode(int _PC);
    void setCity(string _city);
    void setCountry(string _coutnry);
    
    string getStreet()const;
    int getHouse()const;
    int getPc()const;
    string getCity()const;
    string getCountry()const;
    
    void showInfo()const;
    friend std::istream& operator >> (std::istream& is, Adress& obj);
    
};
