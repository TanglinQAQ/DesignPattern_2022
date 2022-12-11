#include<iostream>
#include"../../head/Managing/Memo.h"
using namespace std;

void factory() {
	CareTaker* careTaker = new CareTaker();
	Originator* originator = new Originator();
	int number;
	cout << "工厂里的动物的总数是:";
	cin >> number;
	originator->setnumber(number);
	careTaker->add(originator->saveNumberToMemento());
	int sale_number;
	int i = 0;
	while (i < 3)
	{
		if(i==0)
			cout << "前天卖出的动物数量是:";
		else if(i==1)
			cout << "昨天卖出的动物数量是:";
		else cout << "今天卖出的动物数量是:";
		cin >> sale_number;
		if (sale_number < number)
			number -= sale_number;
		else {
			cout << "数量大于动物的总数，请重新输入" << endl;
			continue;
		}
		originator->setnumber(number);
		careTaker->add(originator->saveNumberToMemento());
		i++;
	}
	int option = 1;
	while (option) {
		cout << "你想知道哪一天开始时候的动物总数:前天(1),昨天(2),今天(3)，明天(4)(0为退出)";
		cin >> option;
		if (option == 0)
			break;
		originator->getNumberFromMemento(careTaker->get(option - 1));
		cout << "当天开始时动物总数是" << originator->getnumber() << endl;;
	}
	option = 1;
	while (option) {
		cout << "是否想要回顾数据:是(1) 否(0)";
		cin >> option;
		if (option == 0)
			break;
		originator->getNumberFromMemento(careTaker->get(careTaker->mementoVector->size()-1));
		cout << "原来的数量是:" << originator->getnumber() << endl;;
		originator->getNumberFromMemento(careTaker->RollBack());
		originator->setnumber(originator->getnumber());
		cout << "回滚后的数量是:" << originator->getnumber() << endl;
		if (careTaker->mementoVector->size()==1)
		{
			cout << "只剩下了今天的数据，已经无法再回滚" << endl;
			break;
		}
	}
}