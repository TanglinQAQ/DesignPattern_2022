#include<iostream>
#include"../../../../head/Processing/adapterDesign.h"

using namespace std;

string CattleImpl::getcattle() {
	string msg = "cattle";
	return msg;
}

void CattleImpl::processcattle(string msg) {
	cout << "���ڼӹ���" << msg;
}