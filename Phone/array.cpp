//
//  array.cpp
//  Phone
//
//  Created by Богдан Коваль on 29.08.2023.
//

#include "array.hpp"
#include <algorithm>


void Array::add(Contact* obj){
    array.push_back(obj);
}

void Array::del(int index){
    array.erase(array.begin() + index);
}

string getPhome_t(Contact* obj1){
    if(obj1->type() == "Friend"){
        return ((Friend*)obj1)->getPhone();
    }else if(obj1->type() == "Colleague"){
        return ((Colleague*)obj1)->getPhone();
    }if(obj1->type() == "Personnel"){
        return ((Personnel*)obj1)->getPhone();
    }
    return nullptr;
}
string getName_t(Contact* obj1){
    if(obj1->type() == "Friend"){
        return ((Friend*)obj1)->getSurname();
    }else if(obj1->type() == "Colleague"){
        //cout << "WHAT" << endl;
        return getName_t(((Colleague*)obj1)->getContact());
    }else if(obj1->type() == "Personnel"){
        return ((Personnel*)obj1)->getSurname();
    }
    return "Error";
}

Contact* Array::find_n(string s)const{
    int i = 0;
    for(int i = 0; i < array.size(); i++){
        if(s == getName_t(array[i])){
            return array[i];
        }
    }
    return nullptr;
}
Contact* Array::find_p(string s)const{
    int i = 0;
    for(int i = 0; i < array.size(); i++){
        if(s == getPhome_t(array[i])){
            return array[i];
        }
    }
    return nullptr;
}


void Array::sort_p(){
    sort(array.begin(), array.end(), [](Contact* obj1, Contact* obj2){
        return getPhome_t(obj1) < getPhome_t(obj2);
    });
}
void Array::sort_n(){
    sort(array.begin(), array.end(), [](Contact* obj1, Contact* obj2){
        //cout <<getName_t(obj1) << " " << getName_t(obj2) << endl;
        return getName_t(obj1) < getName_t(obj2);
    });
}

void Array::show()const{
    for (int i = 0; i < array.size(); i++){
        cout << "\nMember number " << i + 1 << ":\n";
        array[i]->show();
    }
}


int Array::getSize()const{
    return (int)array.size();
}
