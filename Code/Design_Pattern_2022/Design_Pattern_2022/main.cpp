/*�����������ڵ��ø����ܵĲ���ģ��*/
#include <iostream>
#include "Data.h"
#include "test.h"
using namespace std;
using namespace DATA;

int main()
{
	Database DB;
	while (1) {
		cout << "��ѡ������Ҫ���еĲ�����" << endl;
		int oper;
		cin >> oper;
		switch (oper) {
		case 1:
			//���Բɹ�
			FarmStocking_Client();
			break;
		default:
			break;
		}
	}
}