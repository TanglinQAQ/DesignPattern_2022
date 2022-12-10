#include <iostream>
#include "strategyDesign.h"
using namespace std;
using namespace DATA;

void StrategyProcessing_Client()
{
	cout << "# 使用策略模式\n";
	//创建牛加工厂对象
	cout << "********" << "开始创建牛加工厂" << "********" << endl;
	ProcessFactory3* processfactory1 = new ProcessFactory3(Cattleprocessing);
	processfactory1->FactoryInterface();
	//创建鸡加工厂对象
	cout << "********" << "开始创建鸡加工厂" << "********" << endl;
	ProcessFactory3* processfactory2 = new ProcessFactory3(Chickenprocessing);
	processfactory2->FactoryInterface();
	//创建猪加工厂对象
	cout << "********" << "开始创建猪加工厂" << "********" << endl;
	ProcessFactory3* processfactory3 = new ProcessFactory3(Pigprocessing);
	processfactory3->FactoryInterface();
	//
}