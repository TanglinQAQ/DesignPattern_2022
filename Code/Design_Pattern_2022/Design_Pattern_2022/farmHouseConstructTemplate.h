#pragma once
#include "Data.h"

using namespace DATA;
using namespace std;

class houseConstructor {
public:
    void virtual anotherstep() = 0;

    void layfoundation();
    void laywall();
    void buildroof();

    void houseConstruct() {
        cout<<"# ʹ��Templateģʽ��������ס����" << endl;
        layfoundation();
        laywall();
        anotherstep();
        buildroof();
    }
};


class hogpenConstructorImpl :public houseConstructor {
    void anotherstep();
};

class cowshedConstructorImpl :public houseConstructor {
    void anotherstep();
};

class henhouseConstructorImpl :public houseConstructor {
    void anotherstep();
};