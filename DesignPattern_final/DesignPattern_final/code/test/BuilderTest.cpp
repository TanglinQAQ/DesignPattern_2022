#include"../../head/Farming/breedBuilder.h"
#include <iostream>
using namespace std;


void buildertest()
{
	cout << "【我是养殖场的饲养员，我来为您介绍养殖场的饲养方案】" << endl << endl;
	cout << "# 使用builder建造者模式#" << endl;
	cout << "********" << "开始描述牛的饲养方案" << "********" << endl;
	breedBuilder* cattlebuilder = new cattleBuilderImpl();
	cattlebuilder->feed();
	cattlebuilder->graze();
	cattlebuilder->keephealthy();
	delete[] cattlebuilder;
	cout << endl;

	cout << "********" << "开始描述鸡的饲养方案" << "********" << endl;
	breedBuilder* chickenbuilder = new chickenBuilderImpl();
	chickenbuilder->feed();
	chickenbuilder->graze();
	chickenbuilder->keephealthy();
	delete[] chickenbuilder;
	cout << endl;

	cout << "********" << "开始描述猪的饲养方案" << "********" << endl;
	breedBuilder* pigbuilder = new pigBuilderImpl();
	pigbuilder->feed();
	pigbuilder->graze();
	pigbuilder->keephealthy();
	delete[] pigbuilder;
	cout << endl;
}