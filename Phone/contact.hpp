#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Contatc{
public:
    virtual void show()const = 0;
    virtual void type()const = 0;
};
