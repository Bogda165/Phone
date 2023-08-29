//
//  main.cpp
//  Phone
//
//  Created by Богдан Коваль on 29.08.2023.
//

#include <iostream>
#include "personnel.hpp"
#include "Adress.hpp"

int main(int argc, const char * argv[]) {
    Adress home("Ukraine", "Kharkiv", "Balakeriva", 20, 60011);
    home.showInfo();
}
