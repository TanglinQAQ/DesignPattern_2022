#include"../../head/Selling/Market.h"
#include<iostream>

using namespace std;

void proxytest() {
    cout << "�����Ǽӹ������۲������ˣ�ÿ������Ĳ�Ʒ�������۲�ͳһ���ۡ�" << endl << endl;
    Good* mygooder = new proxySeller();
    mygooder->sellgood();
}