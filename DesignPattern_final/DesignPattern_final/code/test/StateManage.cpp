#include "../../head/Processing/State.h"
#include <iostream>
#include <iomanip>
using namespace std;

void State_manage() {
	cout << "【我是车间主任，在加工厂开放日时我负责介绍展示生产流程】" << endl << endl;
	cout << "********" << "演示农产品加工流程" << "********" << endl;
	State* list[] = { new Pre_State(),new After_State(),new Store_State(),new Trans_State(),new Finish_State() };
	Context* c = new Context();
	cout << "1-查看农产品当前状态" << endl;
	cout << "2-改变农产品当前状态" << endl;
	cout << "0-退出" << endl;
	int r;
	while (true) {
		cin >> r;
		if (r == 1) {
			c->showState();
		}
		else if (r == 2) {
			c->request();
		}
		else if (r == 0) {
			break;
		}
	}
}