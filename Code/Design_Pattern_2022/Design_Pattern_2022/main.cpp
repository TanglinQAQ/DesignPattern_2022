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
		case 2:
<<<<<<< HEAD
			//���Լӹ�
			AdapterProcessing_Client();
=======
			//������������
			State_manage();
			break;
		case 3:
			//���Է��ʹ���
			Visitor_manage();
>>>>>>> ff597474cdca9bb96999add1970d2c59abb60192
			break;
		default:
			break;
		}
	}
}