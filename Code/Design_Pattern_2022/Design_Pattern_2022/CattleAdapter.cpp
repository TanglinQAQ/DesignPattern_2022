#include<iostream>
#include"adapterDesign.h"

using namespace std;

string CattleAdapter::getcattle() {
	string msg = "adapter���õõ���";
	//cout<< msg;
	return (msg+chicken->getchicken());
}

void CattleAdapter::processcattle(string msg) {
	chicken->processchicken(msg);
}
