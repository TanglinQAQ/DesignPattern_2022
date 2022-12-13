#include <iostream>
#include "../../head/Processing/DelegatePattern.h"
using namespace std;

void DelegatePattern_Client()
{
	//创建加工厂对象
	cout << "********" << "给加工厂负责人传话" << "********" << endl;
	Man1* m1 = new Man1();
	cout << "\n# 使用委托模式：传话\n";
	m1->processing("今天我要加工这群牛，鸡，猪");
}