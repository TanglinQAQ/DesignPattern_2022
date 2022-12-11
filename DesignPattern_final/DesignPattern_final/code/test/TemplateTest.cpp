#include"../../head/Farming/farmHouseConstructTemplate.h"
#include <iostream>
using namespace std;


void templatetest()
{
	cout << "#开始测试template模板方法模式#" << endl;
	cout << "三种动物的居住场所的建造流程视为稳定不变的流程，个别细节在子类中区别性实现" << endl << endl;
	cout << "********" << "开始建造牛棚" << "********" << endl;
	houseConstructor* cattlehouseconstructor = new cowshedConstructorImpl();
	cattlehouseconstructor->houseConstruct();
	delete[] cattlehouseconstructor;
	cout << endl;

	cout << "********" << "开始建造鸡舍" << "********" << endl;
	houseConstructor* chickenhouseconstructor = new henhouseConstructorImpl();
	chickenhouseconstructor->houseConstruct();
	delete[] chickenhouseconstructor;
	cout << endl;

	cout << "********" << "开始建造猪圈" << "********" << endl;
	houseConstructor* pighouseconstructor = new hogpenConstructorImpl();
	pighouseconstructor->houseConstruct();
	delete[] pighouseconstructor;
	cout << endl;

	cout << "测试结束" << endl << endl;
}