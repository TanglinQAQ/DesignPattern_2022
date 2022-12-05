#include "Abstraction.h"
#include"ImplementorAndAbs.h"
#include <iostream>
using namespace std;


void  Li::getKind()
{
	cout << "# 使用桥接模式" << endl;
	cout << "Li家的";
	soft->getKind();
}
void Wang::getKind()
{
	cout << "# 使用桥接模式" << endl;
	cout << "Wang家的";
	soft->getKind();
}

void setPig::getKind()
{
	cout << "猪" << endl;
}
void setChicken::getKind()
{
	cout << "鸡" << endl;
}
void setCattle::getKind()
{
	cout << "牛" << endl;
}
