#include<iostream>
#include"../../../../head/Processing/adapterDesign.h"

using namespace std;

string CattleImpl::getcattle() {
	string msg = "牛";
	return msg;
}

void CattleImpl::processcattle(string msg) {
	cout << "正在加工：" << msg;
}