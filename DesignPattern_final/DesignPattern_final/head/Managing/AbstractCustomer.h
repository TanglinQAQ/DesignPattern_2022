#pragma once

#include<string>
#include<iostream>

using namespace std;

class AbstractCustomer {
protected:
    string name;
public:
    virtual bool isNil()=0;
    virtual string getName()=0;

};

class RealCustomer :public AbstractCustomer {
public:
    RealCustomer(string name);
    virtual bool isNil();
    virtual string getName();
};

class NullCustomer :public AbstractCustomer {
public:
    virtual bool isNil();
    virtual string getName();
};



