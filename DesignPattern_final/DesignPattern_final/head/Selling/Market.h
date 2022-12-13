#pragma once
#include"../DAO/Data.h"

using namespace DATA;

class Good {
public:
    virtual void sellgood() = 0;
};

class localSeller : public Good {
public:
    void sellgood();
};

class proxySeller :public Good {
private:
    //Farming_Type mygood;
    localSeller* ls;
public:
    void sellgood();
};