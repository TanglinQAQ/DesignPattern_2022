#pragma once
#include<string>
#include<iostream>

class Multiton {
private:
    static Multiton multi1;
    static Multiton multi2;
    static Multiton multi3;

    Multiton();

public:
    static Multiton getInstance(int key) {
        if (key == 1)
            return multi1;
        else if (key == 2)
            return multi2;
        else
            return multi3;
    }

    static int getValue() {
        srand(time(0));
        int value = rand() % 3 + 1; //only can choose 1/2/3
        return value;
    }
};