#include<iostream>
#include"adapterDesign.h"

using namespace std;

string ProcessFactoryImpl::process(){
	string msg= cattle->getcattle();
	cout << "正在获得：" << msg<<endl;
	cattle->processcattle(msg);
	return cattle->getcattle();
}

string ProcessFactoryImpl::process2() {
	string msg = cattletochicken->getcattle();
	cout << "\n正在获得：" << msg<<endl;
	cattletochicken->processcattle(msg);
	return cattletochicken->getcattle();
}