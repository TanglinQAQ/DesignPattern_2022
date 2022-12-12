#include "../../../../head/Selling/Market.h"
#include "../../../../head/DAO/Data.h"
#include<iostream>

using namespace DATA;
using namespace std;


void localSeller::sellgood() {
    cout << "#使用Proxy模式：进行销售\n";//这里endl好像有BUG，换成了\n
    cout << "产品已卖出" << endl;
}

void proxySeller::sellgood() {
    if (proxySeller::ls == nullptr) {
        proxySeller::ls = new localSeller();
    }
    ls->sellgood();
}


