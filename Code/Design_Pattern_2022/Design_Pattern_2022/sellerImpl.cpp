#include"Market.h"
#include"Data.h"
#include<iostream>

using namespace DATA;
using namespace std;


void localSeller::sellgood() {
    cout << "#使用Proxy模式：进行销售\n" ;//这里endl好像有BUG，换成了\n
   cout <<"Selling good!"<< endl;
}

void proxySeller::sellgood() {
    if (proxySeller::ls == nullptr) {
        proxySeller::ls = new localSeller();
    }
    ls->sellgood();
}


