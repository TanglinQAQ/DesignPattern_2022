#pragma once
#include<iostream>

using namespace std;

class showproduct {
public :
    virtual void show()=0;
};

class productA :public showproduct {
public:
    virtual void show();
};

class productB :public showproduct {
public:
    virtual void show();
};