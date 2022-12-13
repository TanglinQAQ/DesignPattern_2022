#include <iostream>
#include "../../head/Processing/strategyDesign.h"
#include "../../head/DAO/Data.h"
using namespace std;
using namespace DATA;

void StrategyProcessing_Client()
{
	cout << "【我是加工车间主任，现在我来制定加工的方法】" << endl << endl;
	cout << "# 使用策略模式\n";
	//创建牛加工厂对象
	cout << "********" << "加工牛是这样的" << "********" << endl;
	ProcessFactory3* processfactory1 = new ProcessFactory3(Cattleprocessing);
	processfactory1->FactoryInterface();
	//创建鸡加工厂对象
	cout << "********" << "加工鸡是这样的" << "********" << endl;
	ProcessFactory3* processfactory2 = new ProcessFactory3(Chickenprocessing);
	processfactory2->FactoryInterface();
	//创建猪加工厂对象
	cout << "********" << "加工猪是这样的" << "********" << endl;
	ProcessFactory3* processfactory3 = new ProcessFactory3(Pigprocessing);
	processfactory3->FactoryInterface();
	//
}