#include "../../head/Processing/State.h"
#include <iostream>
#include <iomanip>
using namespace std;

void State_manage() {
	cout << "�����ǳ������Σ��ڼӹ���������ʱ�Ҹ������չʾ�������̡�" << endl << endl;
	cout << "********" << "��ʾũ��Ʒ�ӹ�����" << "********" << endl;
	State* list[] = { new Pre_State(),new After_State(),new Store_State(),new Trans_State(),new Finish_State() };
	Context* c = new Context();
	cout << "1-�鿴ũ��Ʒ��ǰ״̬" << endl;
	cout << "2-�ı�ũ��Ʒ��ǰ״̬" << endl;
	cout << "0-�˳�" << endl;
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