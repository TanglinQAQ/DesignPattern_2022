#include"../../head/Selling/Market.h"
#include<iostream>

using namespace std;

void proxytest() {
    cout << "#开始测试template模板方法模式#" << endl;
    cout << "商品的销售可以通过localseller也可以通过proxyseller完成" << endl << endl;
    Good* mygooder = new proxySeller();
    mygooder->sellgood();

    cout << "测试结束" << endl << endl;
}