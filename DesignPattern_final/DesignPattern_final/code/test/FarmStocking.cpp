#include <iostream>
#include "../../head/Farming/farmingFactory.h"
using namespace std;

void FarmStocking_Client()
{
	cout << "我是采购员，之前下完订单，现在我来提货了" << endl;
	cout << "********" << "开始从老王养殖场提货" << "********" << endl;
	Farming_AbstractFactory*  Wang= new WangFarming_Factory();
	cout << "正在采购牛：" << endl;
	cattle* Wang_cattle = Wang->getCattle();
	Wang_cattle->show();
	delete[]Wang;
	delete[]Wang_cattle;
	cout << "********" << "完成提货" << "********" << endl;
	cout << "********" << "开始从小李养殖场提货" << "********" << endl;
	Farming_AbstractFactory* Li = new LiFarming_Factory();
	cout << "正在采购鸡：" << endl;
	chicken* Li_chicken = Li->getChicken();
	Li_chicken->show();
	cout << "正在采购猪：" << endl;
	pig* Li_pig = Li->getPig();
	Li_pig->show();
	delete[]Li;
	delete[]Li_chicken;
	delete[]Li_pig;
	cout << "********" << "完成提货" << "********" << endl;
}