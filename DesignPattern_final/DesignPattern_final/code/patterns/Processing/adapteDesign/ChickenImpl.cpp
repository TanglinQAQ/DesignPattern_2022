#include<iostream>
#include"../../../../head/Processing/adapterDesign.h"

using namespace std;

string ChickenImpl::getchicken() {
	string msg = "��";
	return msg;
}

void ChickenImpl::processchicken(string msg) {
	cout << "���ڼӹ���" << msg;
}