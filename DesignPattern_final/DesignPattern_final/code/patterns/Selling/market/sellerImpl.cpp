#include "../../../../head/Selling/Market.h"
#include "../../../../head/DAO/Data.h"
#include<iostream>

using namespace DATA;
using namespace std;


void localSeller::sellgood() {
    cout << "#ʹ��Proxyģʽ����������\n";//����endl������BUG��������\n
    cout << "��Ʒ������" << endl;
}

void proxySeller::sellgood() {
    if (proxySeller::ls == nullptr) {
        proxySeller::ls = new localSeller();
    }
    ls->sellgood();
}


