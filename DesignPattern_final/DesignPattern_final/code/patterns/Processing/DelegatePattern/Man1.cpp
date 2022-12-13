#pragma once
#include <iostream>
#include "../../../../head/Processing/DelegatePattern.h" 
using namespace std;

void Man1::processing(string command)
{
	cout << "man1:我不在负责加工厂" << endl;
	realman.processing(command);
}
