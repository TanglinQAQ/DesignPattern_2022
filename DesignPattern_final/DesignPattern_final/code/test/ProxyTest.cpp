#include"../../head/Selling/Market.h"
#include<iostream>

using namespace std;

void proxytest() {
    cout << "#��ʼ����templateģ�巽��ģʽ#" << endl;
    cout << "��Ʒ�����ۿ���ͨ��localsellerҲ����ͨ��proxyseller���" << endl << endl;
    Good* mygooder = new proxySeller();
    mygooder->sellgood();

    cout << "���Խ���" << endl << endl;
}