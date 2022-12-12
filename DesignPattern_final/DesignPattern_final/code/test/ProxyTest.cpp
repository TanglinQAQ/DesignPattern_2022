#include"../../head/Selling/Market.h"
#include<iostream>

using namespace std;

void proxytest() {
    cout << "【我是加工厂销售部负责人，每个车间的产品交由销售部统一销售】" << endl << endl;
    Good* mygooder = new proxySeller();
    mygooder->sellgood();
}