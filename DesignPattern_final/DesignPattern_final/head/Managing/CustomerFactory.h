#pragma once

#include<string>
#include<iostream>
#include"AbstractCustomer.h"

using namespace std;

class customerfactory {
public:
    const static string allcustomer[10]; //ϵͳ�˿�����
    static AbstractCustomer* getCustomer(string name) {
        for (string s:allcustomer) {
            if (s== name)
                return new RealCustomer(name);
        }
        return new NullCustomer();
    }
};