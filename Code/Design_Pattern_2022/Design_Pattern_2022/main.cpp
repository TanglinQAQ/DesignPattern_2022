<<<<<<< HEAD
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
			//���Լӹ�
			AdapterProcessing_Client();
			break;
		case 3:
			//������������
			State_manage();
			break;
		case 4:
			//���Է��ʹ���
			Visitor_manage();
			break;
		case 5:
			//���Ե������ӹ�
			IteratorProcessing_Client(DB);//������Ҫ�õ����ݿ�����
			break;
		default:
			break;
		}
	}
=======
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
			//������������
			State_manage();
			break;
		case 3:
			//���Է��ʹ���
			Visitor_manage();
			break;
		case 9:
			//�����Ž�ģʽ
			Bridge_Manage();
			break;
		default:
			break;
		}
	}
>>>>>>> 8ea6aac2dcaba61211688306be04ca5a9efa49dd
}