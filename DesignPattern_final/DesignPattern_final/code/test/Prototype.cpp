#include<iostream>
#include "../../head/Processing/pack.h"

using namespace std;

void Prototype_Manage() {
	cout << "我是打包工人，现在我要对产品进行包装" << endl;
	cout << "# 使用原型模式" << endl;
	//创建菜包对象
	VegetablePackage* vegetable1 = new VegetablePackage(10, 20, 30, "yellow");
	//复制自身
	VegetablePackage* vegetable2 = vegetable1->Clone();
	//创建肉类包对象
	MeatPackage* meat1 = new MeatPackage(15, 25, 35, "red");
	//复制自身
	MeatPackage* meat2 = meat1->Clone();

	delete vegetable1;
	vegetable1 = NULL;

	delete vegetable2;
	vegetable1 = NULL;

	delete meat1;
	meat1 = NULL;

	delete meat2;
	meat2 = NULL;
}