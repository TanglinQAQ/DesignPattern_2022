#include<iostream>
#include"../../../../head/Processing/adapterDesign.h"

using namespace std;

string ChickenImpl::getchicken() {
	string msg = "chicken";
	return msg;
}

void ChickenImpl::processchicken(string msg) {
	cout << "正在加工：" << msg;
}