#include<iostream>
#include"../../../../head/Processing/adapterDesign.h"

using namespace std;

string ProcessCattleFactory2::process(){
	string msg= cattle->getcattle();
	cout << "���ڻ�ã�" << msg<<endl;
	cattle->processcattle(msg);
	return cattle->getcattle();
}

string ProcessCattleFactory2::process2() {
	string msg = cattletochicken->getcattle();
	cout << "\n���ڻ�ã�" << msg<<endl;
	cattletochicken->processcattle(msg);
	return cattletochicken->getcattle();
}