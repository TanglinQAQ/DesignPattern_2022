#include<iostream>
#include"../../head/Managing/Memo.h"
using namespace std;

void factory() {
	CareTaker* careTaker = new CareTaker();
	Originator* originator = new Originator();
	int number;
	cout << "������Ķ����������:";
	cin >> number;
	originator->setnumber(number);
	careTaker->add(originator->saveNumberToMemento());
	int sale_number;
	int i = 0;
	while (i < 3)
	{
		if(i==0)
			cout << "ǰ�������Ķ���������:";
		else if(i==1)
			cout << "���������Ķ���������:";
		else cout << "���������Ķ���������:";
		cin >> sale_number;
		if (sale_number < number)
			number -= sale_number;
		else {
			cout << "�������ڶ��������������������" << endl;
			continue;
		}
		originator->setnumber(number);
		careTaker->add(originator->saveNumberToMemento());
		i++;
	}
	int option = 1;
	while (option) {
		cout << "����֪����һ�쿪ʼʱ��Ķ�������:ǰ��(1),����(2),����(3)������(4)(0Ϊ�˳�)";
		cin >> option;
		if (option == 0)
			break;
		originator->getNumberFromMemento(careTaker->get(option - 1));
		cout << "���쿪ʼʱ����������" << originator->getnumber() << endl;;
	}
	option = 1;
	while (option) {
		cout << "�Ƿ���Ҫ�ع�����:��(1) ��(0)";
		cin >> option;
		if (option == 0)
			break;
		originator->getNumberFromMemento(careTaker->get(careTaker->mementoVector->size()-1));
		cout << "ԭ����������:" << originator->getnumber() << endl;;
		originator->getNumberFromMemento(careTaker->RollBack());
		originator->setnumber(originator->getnumber());
		cout << "�ع����������:" << originator->getnumber() << endl;
		if (careTaker->mementoVector->size()==1)
		{
			cout << "ֻʣ���˽�������ݣ��Ѿ��޷��ٻع�" << endl;
			break;
		}
	}
}