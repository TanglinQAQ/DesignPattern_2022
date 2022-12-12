#include"../../head/Managing/Observer.h"

void market() {
	cout << "【我是加工厂老板，现在想看其他公司的情况，用于参考产品定价】" << endl << endl;
	Business_situation* market=new Business_situation;
	Observer* Zhang =new Observer("张家", market);
	Observer* Wang = new Observer("王家",market);
	Observer* Chen = new Observer("陈家",market);
	int option = 1;
	cout << "# 使用观察者模式" << endl;
	while (option)
	{
		cout << "如果你想要增加市场的产品的数量输入1，减少输入2,不想操作输入0" << endl;
		cin >> option;
		if (option == 1)
		{
			market->supply_quanlity_up();
		}
		else if (option == 2)
		{
			market->supply_quanlity_dowm();
		}
	}
}