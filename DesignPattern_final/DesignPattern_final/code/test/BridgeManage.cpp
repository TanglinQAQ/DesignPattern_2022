#include "../../head/Farming/Abstraction.h"
#include"../../head/Farming/ImplementorAndAbs.h"
#include <iostream>
using namespace std;


void Bridge_Manage()
{
	cout << "#��ʼ�����Ž�ģʽ#" << endl;
	Breeding* People;
	Breeding* People2;
	People = new Li();
	People2 = new Wang();
	People->setBreeding(new setPig());
	People->getKind();
	People->setBreeding(new setChicken());
	People->getKind();
	People->setBreeding(new setCattle());
	People->getKind();
	People2->setBreeding(new setPig());
	People2->getKind();
	People2->setBreeding(new setChicken());
	People2->getKind();
	People2->setBreeding(new setCattle());
	People2->getKind();
	cout << "���Խ���" << endl;
}