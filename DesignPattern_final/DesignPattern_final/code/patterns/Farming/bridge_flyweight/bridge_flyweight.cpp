#include<iostream>
#include<map>
#include <string>
#include<vector>
#include"../../../../head/Farming/bridge_flyweight.h"
using namespace std;

void Chicken::Say()
{
	cout << "¼¦" << endl;
}
void Pig::Say()
{
	cout << "Öí" << endl;
}
void Cow::Say()
{
	cout << "Å£" << endl;
}