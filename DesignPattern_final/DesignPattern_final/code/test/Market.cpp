#include"../../head/Managing/Observer.h"

void market() {
	Business_situation* market=new Business_situation;
	Observer* Zhang =new Observer("�ż�", market);
	Observer* Wang = new Observer("����",market);
	Observer* Chen = new Observer("�¼�",market);
	int option = 1;
	while (option)
	{
		cout << "�������Ҫ�����г��Ĳ�Ʒ����������1����������2,�����������0" << endl;
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