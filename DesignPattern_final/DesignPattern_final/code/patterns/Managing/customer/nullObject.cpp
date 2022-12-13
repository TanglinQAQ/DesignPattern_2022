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

//静态常量字符串数组初始化
const string customerfactory::allcustomer[] = { "Julie","Bob" };
