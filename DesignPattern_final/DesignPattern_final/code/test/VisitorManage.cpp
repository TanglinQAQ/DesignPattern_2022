#include "../../head/Managing/Visitor.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Visitor_manage() {
	cout << "【我是加工厂老板，商品已经上线，欢迎领导视察、顾客前来购买】" << endl << endl;
	cout << "********" << "开始访问农产品工厂" << "********" << endl;
	Apple a1;
	Chicken c1;
	Customer customer;
	customer.setName("张三");
	Farm_manager manager;
	manager.setName("李四");

	cout << "1-以上级领导身份访问" << endl;
	cout << "2-以顾客身份访问" << endl;
	cout << "0-退出" << endl;
	int r;
	while (true) {
		cin.clear();
		cin >> r;
		if (r == 1) {
			a1.accept(&manager);
			c1.accept(&manager);
		}
		else if (r == 2) {
			a1.accept(&customer);
			c1.accept(&customer);
		}
		else if (r == 0) {
			break;
		}
	}
}