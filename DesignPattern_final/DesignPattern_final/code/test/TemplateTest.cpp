#include"../../head/Farming/farmHouseConstructTemplate.h"
#include <iostream>
using namespace std;


void templatetest()
{
	cout << "【我是养殖场负责人，接下来我来为您讲解我们的养殖环境】" << endl << endl;
	cout << "# 使用template模板方法模式#" << endl;
	cout << "********" << "牛棚是这样的" << "********" << endl;
	houseConstructor* cattlehouseconstructor = new cowshedConstructorImpl();
	cattlehouseconstructor->houseConstruct();
	delete[] cattlehouseconstructor;
	cout << endl;

	cout << "********" << "鸡舍是这样的" << "********" << endl;
	houseConstructor* chickenhouseconstructor = new henhouseConstructorImpl();
	chickenhouseconstructor->houseConstruct();
	delete[] chickenhouseconstructor;
	cout << endl;

	cout << "********" << "猪圈是这样的" << "********" << endl;
	houseConstructor* pighouseconstructor = new hogpenConstructorImpl();
	pighouseconstructor->houseConstruct();
	delete[] pighouseconstructor;
	cout << endl;

	cout << "说明结束" << endl << endl;
}