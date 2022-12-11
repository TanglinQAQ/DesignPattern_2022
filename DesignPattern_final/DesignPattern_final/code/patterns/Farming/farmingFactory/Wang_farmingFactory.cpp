#include "../../../../head/Farming/farmingFactory.h"
#include <iostream>
using namespace std;

void Wang_cattle::show()
{
	cout << "已从老王养殖场采购：猪" << endl;
}

void Wang_chicken::show()
{
	cout << "已从老王养殖场采购：鸡" << endl;
}

void Wang_pig::show()
{
	cout << "已从老王养殖场采购：猪" << endl;
}


cattle* WangFarming_Factory::getCattle()
{
	cout << "# 使用抽象工厂模式" << endl;
	return new Wang_cattle();
}

chicken* WangFarming_Factory::getChicken()
{
	cout << "# 使用抽象工厂模式" << endl;
	return new Wang_chicken();
}

pig* WangFarming_Factory::getPig()
{
	cout << "# 使用抽象工厂模式" << endl;
	return new Wang_pig();
}