#include "../../head/Processing/MultitonPattern.h"
#include<iostream>

using namespace std;


void multitontest() {
    int key = Multiton::getValue();
    switch (key) {
    case 1:
        cout << "³é¼ìÅ£ÈâÖÆÆ·" << endl;
        break;
    case 2:
        cout << "³é¼ì¼¦ÈâÖÆÆ·" << endl;
        break;
    case 3:
        cout << "³é¼ìÖíÈâÖÆÆ·" << endl;
        break;
    }
    Multiton m_test = Multiton::getInstance(key);

}