#pragma once
#include <iostream>
#include "../../../../head/Processing/DelegatePattern.h" 
using namespace std;

void Man2::processing(string command)
{
	cout << "man2:其实是我在负责加工厂" << endl;
	cout <<"man2:下达命令：" <<command<<endl;
}
