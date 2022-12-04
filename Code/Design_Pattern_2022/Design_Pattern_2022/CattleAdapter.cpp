#include<iostream>
#include"adapterDesign.h"

using namespace std;

string CattleAdapter::getcattle() {
	string msg = "adapter作用得到的";
	//cout<< msg;
	return (msg+chicken->getchicken());
}

void CattleAdapter::processcattle(string msg) {
	chicken->processchicken(msg);
}
