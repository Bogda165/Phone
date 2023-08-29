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
#include "array.hpp"

int main(int argc, const char * argv[]) {
    
    Adress home("Ukraine", "Kharkiv", "Balakeriva", 20, 60011);
    Adress home2("Ukraine", "Kharkiv", "Balakeriva2", 20, 60011);
    //home.showInfo();
    
    Contact* Me = new Personnel("Koval", home, "+380977986878");
    //cout << Me->type() << endl;
    //Me->show();
    
    Contact* Roma = new Friend("Lutaienko", Adress("Ukraine", "Kharkiv", "Prospekt Nauki", 34, 60123), "+380977986878", Date(23, 2, 2006));
    
    //cout << Roma->type() << endl;
   // Roma->show();
    
    Contact* Leha = new Colleague(Roma, "+380977236878", "GlobalLogic", "+16692001010", home2);
    //cout << Leha->type() << endl;
    //Leha->show();
    
    Array phones;
    phones.add(Me);
    phones.add(Leha);
    phones.add(Roma);
    
    Contact *tmp;
    
    int stop = true;
    string input;
    int choose = -1;
    while(stop){
        cout << "\nCommands lsit : \n";
        cout << "   1.Exit\n";
        cout << "   2.Show\n";
        cout << "   3.Add\n";
        cout << "   4.Delete\n";
        cout << "   5.Sort\n";
        cout << "   6.Find\n";
        cout << "Enter : ";
        
        
        
        
        cin >> input;
        if (input == "Exit"){
            stop = false;
            
        }if(input == "Show"){
            phones.show();
            
        }if(input == "Add"){
            cout << "   Choose type of contat -> Friend Person Colleague\n  Enter:";
            cin >> input;
            if(input == "Friend"){
                tmp = new Friend;
                cin >> (*((Friend *)tmp));
            }else if(input == "Person"){
                tmp = new Personnel;
                cin >> (*((Personnel *)tmp));
            }else if(input == "Coleague"){
                tmp = new Colleague;
                cin >> (*((Colleague *)tmp));
            }else{
                input = "Exit";
                break;
            }
            phones.add(tmp);
            
        }else if(input == "Delete"){
            cout << "   Enter index of elemet 0->" << phones.getSize() << " : ";
            cin >> choose;
            phones.del(choose);
        }else if(input == "Sort"){
            cout << "   Choose sort by \"Name\" or by \"Phone\"\n  :";
            cin >> input;
            if(input == "Name"){
                phones.sort_n();
            }else if(input == "Phone"){
                phones.sort_p();
            }
        }else if(input == "Find"){
            cout << "   Chose find by \"Name\" or by \"Phone\"\n  :";
            cin >> input;
            if(input == "Name"){
                cout << "Enter surnam : ";
                cin >> input;
                phones.find_n(input)->show();
            }else if(input == "Phone"){
                cout << "Enter phone number : ";
                cin >> input;
                phones.find_p(input)->show();
            }
            input = "Find";
        }
    }
    /*
    Contact* tmp = new Colleague;
    
    cin >> (*((Colleague *)tmp));
    tmp->show();
    //add
    */
}
