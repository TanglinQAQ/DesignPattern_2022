#include"../../head/Managing/Observer.h"

void market() {
	Business_situation* market=new Business_situation;
	Observer* Zhang =new Observer("张家", market);
	Observer* Wang = new Observer("王家",market);
	Observer* Chen = new Observer("陈家",market);
	int option = 1;
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