#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Contact{
public:
    virtual void show()const = 0;
    virtual string type()const = 0;
};
