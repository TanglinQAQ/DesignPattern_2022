#include "../../../../head/Farming/Abstraction.h"
#include "../../../../head/Farming/ImplementorAndAbs.h"
#include <iostream>
using namespace std;


void  Li::getKind()
{
	cout << "# ʹ���Ž�ģʽ" << endl;
	cout << "Li�ҵ�";
	soft->getKind();
}
void Wang::getKind()
{
	cout << "# ʹ���Ž�ģʽ" << endl;
	cout << "Wang�ҵ�";
	soft->getKind();
}

void setPig::getKind()
{
	cout << "��" << endl;
}
void setChicken::getKind()
{
	cout << "��" << endl;
}
void setCattle::getKind()
{
	cout << "ţ" << endl;
}
