//
//  main.cpp
//  Phone
//
//  Created by Богдан Коваль on 29.08.2023.
//

#include <iostream>
#include "personnel.hpp"
#include "Adress.hpp"
#include "Friend.hpp"
#include "contact.hpp"
#include "colleague.hpp"

int main(int argc, const char * argv[]) {
    Adress home("Ukraine", "Kharkiv", "Balakeriva", 20, 60011);
    home.showInfo();
    
    Contact* Me = new Personnel("Koval", home, "+380977986878");
    cout << Me->type() << endl;
    Me->show();
    
    Contact* Roma = new Friend("Lutaienko", Adress("Ukraine", "Kharkiv", "Prospekt Nauki", 34, 60123), "+380977986878", Date(23, 2, 2006));
    
    cout << Roma->type() << endl;
    Roma->show();
    
    Contact* Leha = new Colleague(Roma, "+380977236878", "GlobalLogic", "+16692001010", home);
    cout << Leha->type() << endl;
    Leha->show();
}
