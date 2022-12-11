#include <iostream>
#include "../../head/Processing/adapterDesign.h"
using namespace std;

void AdapterProcessing_Client()
{
	//创建加工厂对象
	cout << "********" << "开始创建加工牛的工厂" << "********" << endl;
	ProcessCattleFactory2* processfactory = new ProcessCattleFactory2();
	//加工牛
	string msg = processfactory->process();
	//cout << "\n上面是加工"<< msg <<"的全过程"<< endl;
	//加工鸡
	cout << "\n# 使用适配器模式：加工鸡";
	string msg1 = processfactory->process2();
	//cout << "\n上面是加工" << msg1 << "的全过程" << endl;
	cout << endl;
	cout << "********" << "结束加工" << "********" << endl;
}