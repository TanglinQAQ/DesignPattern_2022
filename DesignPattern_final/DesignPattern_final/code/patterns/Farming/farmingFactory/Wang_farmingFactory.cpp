#include "../../../../head/Farming/farmingFactory.h"
#include <iostream>
using namespace std;

void Wang_cattle::show()
{
	cout << "�Ѵ�������ֳ���ɹ�����" << endl;
}

void Wang_chicken::show()
{
	cout << "�Ѵ�������ֳ���ɹ�����" << endl;
}

void Wang_pig::show()
{
	cout << "�Ѵ�������ֳ���ɹ�����" << endl;
}


cattle* WangFarming_Factory::getCattle()
{
	cout << "# ʹ�ó��󹤳�ģʽ" << endl;
	return new Wang_cattle();
}

chicken* WangFarming_Factory::getChicken()
{
	cout << "# ʹ�ó��󹤳�ģʽ" << endl;
	return new Wang_chicken();
}

pig* WangFarming_Factory::getPig()
{
	cout << "# ʹ�ó��󹤳�ģʽ" << endl;
	return new Wang_pig();
}