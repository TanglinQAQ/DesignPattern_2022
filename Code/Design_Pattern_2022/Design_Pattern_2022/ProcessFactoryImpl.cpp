#include<iostream>
#include"adapterDesign.h"

using namespace std;

string ProcessFactoryImpl::process(){
	string msg= cattle->getcattle();
	cout << "���ڻ�ã�" << msg<<endl;
	cattle->processcattle(msg);
	return cattle->getcattle();
}

string ProcessFactoryImpl::process2() {
	string msg = cattletochicken->getcattle();
	cout << "\n���ڻ�ã�" << msg<<endl;
	cattletochicken->processcattle(msg);
	return cattletochicken->getcattle();
}