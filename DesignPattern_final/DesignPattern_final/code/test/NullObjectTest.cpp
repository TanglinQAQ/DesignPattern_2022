#include"../../head/Managing//CustomerFactory.h"
#include <iostream>

using namespace std;

void nullobjecttest() {
    AbstractCustomer* c1 = customerfactory::getCustomer("Bob");
    AbstractCustomer* c2 = customerfactory::getCustomer("Andy");
    AbstractCustomer* c3 = customerfactory::getCustomer("Steven");
    AbstractCustomer* c4 = customerfactory::getCustomer("Julie");

    cout << "customer verification" << endl;
    cout << c1->getName() << endl;
    cout << c2->getName() << endl;
    cout << c3->getName() << endl;
    cout << c4->getName() << endl;

    
}

