#include<iostream>
#include"adapterDesign.h"

using namespace std;

string CattleImpl::getcattle() {
	string msg = "cattle";
	return msg;
}

void CattleImpl::processcattle(string msg) {
	cout << "正在加工：" << msg;
}