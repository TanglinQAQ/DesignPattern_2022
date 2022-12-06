#include"Market.h"
#include"Data.h"
#include<iostream>

using namespace DATA;
using namespace std;


void localSeller::sellgood() {
    cout << "Selling good!" << endl;
}

void proxySeller::sellgood() {
    if (proxySeller::ls == nullptr) {
        proxySeller::ls = new localSeller();
    }
    ls->sellgood();
}


