#include "Visitor.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Visitor_manage() {
	cout << "********" << "��ʼ����ũ��Ʒ����" << "********" << endl;
	Apple a1;
	Chicken c1;
	Customer customer;
	customer.setName("����");
	Farm_manager manager;
	manager.setName("����");

	cout << "*******" << "1-��ũ�����Ա��ݷ���" << "*******" << endl;
	cout << "*******" << "2-�Թ˿���ݷ���" << "*******" << endl;
	cout << "*******" << "0-�˳�" << "*********************" << endl;
	int r;
	while (true) {
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