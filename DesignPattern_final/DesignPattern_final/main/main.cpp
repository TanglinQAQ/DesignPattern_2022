/*主函数，用于调用各功能的测试模块*/
#include <iostream>
#include "../head/DAO/Data.h"
#include "../head/Test/test.h"
using namespace std;
using namespace DATA;

Database Database::instance;//单例模式

int main()
{
	Database DB = DB.get_DB();
	int oper = -1;
	while (1) {
		cout << "输入R键继续..." << endl;
		while (1) {
			char cont;
			cont = getchar();
			if (cont == 'R' || cont == 'r')
				break;
		}
		oper++;
		switch (oper) {
		case 1:
			//加工厂老板要了解各养殖场的养殖环境
			templatetest();
			break;
		case 2:
			//加工厂老板要了解各养殖场的养殖流程
			buildertest();
			break;
		case 3:
			//加工厂老板安排采购员进货
			Facade();
			break;
		case 4:
			//采购员查看各养殖场的库存，准备下订单
			BridgeAndFly();
			break;
		case 5:
			//采购员去各养殖场进货
			FarmStocking_Client();
			break;
		case 6:
			//加工前先确定好加工的方法
			StrategyProcessing_Client();
			break;
		case 7:
			//确认加工方法后分车间对牲畜进行处理
			ComposeProcessing_Client();
			break;
		case 8:
			//原本是加工牛的车间，现在用来加工鸡
			AdapterProcessing_Client();
			break;
		case 9:
			//流水线式加工所有的牛和鸡
			IteratorProcessing_Client(DB);//这里需要用到数据库数据
			break;
		case 10:
			//加工完成后对商品进行打包
			Prototype_Manage();
			break;
		case 11:
			//商品打包好后顾客可以来到加工厂自取
			Visitor_manage();
			break;
		case 12:
			//也可以加工厂主动销售
			proxytest();
			break;
		case 13:
			//也可以让中间代理商去销售
			MediatorManage();
			break;
		case 14:
			//销售过程中老板要记录原材料消耗情况
			factory();
			break;
		case 15:
			//本批次产品销售完成后进行记账
			CommandManage();
			break;
		case 16:
			//预估当前产品的市价，评估下一轮次的销售方针
			market();
			break;
		case 17:
			//若有游客来加工厂参观，展示生产的总体流程
			State_manage();
			break;
		case 18:
			//若有游客来加工厂参观，展示某一商品的具体生产流程
			ChainOfResponsibility();
			break;
		default:
			break;
		}
		if (oper == 18) {
			cout << "测试结束" << endl;
			break;
		}
	}
	return 0;
}