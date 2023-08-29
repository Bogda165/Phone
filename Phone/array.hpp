#pragma once
#include "Friend.hpp"
#include "personnel.hpp"
#include "colleague.hpp"
#include <vector>

class Array{
    vector<Contact*> array;
public:
    void add(Contact* obj);
    void del(int index);
    
    void sort_n();
    void sort_p();
    
    Contact* find_n()const;
    Contact* find_p()const;
    
    void show()const;
}
