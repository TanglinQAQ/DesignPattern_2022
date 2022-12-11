#include "../../../../head/Farming/farmingFactory.h"
#include <iostream>
using namespace std;

void Li_cattle::show()
{
	cout << "已从小李养殖场采购：猪" << endl;
}

void Li_chicken::show()
{
	cout << "已从小李养殖场采购：鸡" << endl;
}

void Li_pig::show()
{
	cout << "已从小李养殖场采购：猪" << endl;
}

cattle* LiFarming_Factory::getCattle()
{
	cout << "# 使用抽象工厂模式" << endl;
	return new Li_cattle();
}

chicken* LiFarming_Factory::getChicken()
{
	cout << "# 使用抽象工厂模式" << endl;
	return new Li_chicken();
}

pig* LiFarming_Factory::getPig()
{
	cout << "# 使用抽象工厂模式" << endl;
	return new Li_pig();
}