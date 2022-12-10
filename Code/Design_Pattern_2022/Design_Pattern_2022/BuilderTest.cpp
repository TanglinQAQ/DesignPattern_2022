#include"breedBuilder.h"
#include <iostream>
using namespace std;


void buildertest()
{
	cout << "#开始测试builder建造者模式#" << endl;
	cout << "三种动物的总体饲养流程类似，但对于不同的动物的具体饲养内容有所差异" << endl << endl;
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

	cout << "测试结束" << endl << endl;
}