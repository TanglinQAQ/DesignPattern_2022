#include "../../../../head/Farming/farmingFactory.h"
#include <iostream>
using namespace std;

void Li_cattle::show()
{
	cout << "�Ѵ�С����ֳ���ɹ�����" << endl;
}

void Li_chicken::show()
{
	cout << "�Ѵ�С����ֳ���ɹ�����" << endl;
}

void Li_pig::show()
{
	cout << "�Ѵ�С����ֳ���ɹ�����" << endl;
}

cattle* LiFarming_Factory::getCattle()
{
	cout << "# ʹ�ó��󹤳�ģʽ" << endl;
	return new Li_cattle();
}

chicken* LiFarming_Factory::getChicken()
{
	cout << "# ʹ�ó��󹤳�ģʽ" << endl;
	return new Li_chicken();
}

pig* LiFarming_Factory::getPig()
{
	cout << "# ʹ�ó��󹤳�ģʽ" << endl;
	return new Li_pig();
}