#pragma once
#include <iostream>
#include "../../../../head/Processing/DelegatePattern.h" 
using namespace std;

void Man1::processing(string command)
{
	cout << "man1:�Ҳ��ڸ���ӹ���" << endl;
	realman.processing(command);
}
