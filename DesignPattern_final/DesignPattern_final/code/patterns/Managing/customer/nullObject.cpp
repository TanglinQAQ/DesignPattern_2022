#include "../../../../head/Managing/AbstractCustomer.h"
#include "../../../../head/Managing/CustomerFactory.h"
#include<iostream>

using namespace std;

RealCustomer::RealCustomer(string name) {
    this->name = name;
}

string RealCustomer::getName() {
    return name;
}

bool RealCustomer::isNil() {
    return false;
}

string NullCustomer::getName() {
    return "Not Available";
}

bool NullCustomer::isNil() {
    return true;
}

//��̬�����ַ��������ʼ��
const string customerfactory::allcustomer[] = { "Julie","Bob" };
