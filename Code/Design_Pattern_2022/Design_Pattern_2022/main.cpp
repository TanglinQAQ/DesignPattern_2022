/*主函数，用于调用各功能的测试模块*/
#include <iostream>
#include "Data.h"
#include "test.h"
using namespace std;
using namespace DATA;

int main()
{
	Database DB;
	while (1) {
		cout << "请选择现在要进行的操作：" << endl;
		int oper;
		cin >> oper;
		switch (oper) {
		case 1:
			//测试采购
			FarmStocking_Client();
			break;
		case 2:
<<<<<<< HEAD
			//测试加工
			AdapterProcessing_Client();
=======
			//测试生产流程
			State_manage();
			break;
		case 3:
			//测试访问工厂
			Visitor_manage();
>>>>>>> ff597474cdca9bb96999add1970d2c59abb60192
			break;
		default:
			break;
		}
	}
}