#include "../../head/Processing/MultitonPattern.h"
#include<iostream>

using namespace std;


void multitontest() {
    int key = Multiton::getValue();
    switch (key) {
    case 1:
        cout << "���ţ����Ʒ" << endl;
        break;
    case 2:
        cout << "��켦����Ʒ" << endl;
        break;
    case 3:
        cout << "���������Ʒ" << endl;
        break;
    }
    Multiton m_test = Multiton::getInstance(key);

}