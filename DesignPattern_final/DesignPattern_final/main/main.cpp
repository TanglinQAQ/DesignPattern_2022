/*�����������ڵ��ø����ܵĲ���ģ��*/
#include <iostream>
#include "../head/DAO/Data.h"
#include "../head/Test/test.h"
using namespace std;
using namespace DATA;

Database Database::instance;//����ģʽ

int main()
{
	Database DB = DB.get_DB();
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
		case 6:
			//���Դ����ֹ���
			ComposeProcessing_Client();
			break;
		case 7:
			//���Ա���¼ģʽ
			factory();
			break;
		case 8:
			//���Թ۲���ģʽ
			market();
			break;
		case 9:
			//�����Ž�ģʽ
			Bridge_Manage();
			break;
		case 10:
			//�������ģʽ
			Facade();
			break;
			//������Ԫģʽ
		case 11:
			Flyweight();
			break;
		case 12:
			//����������ģʽ
			ChainOfResponsibility();
			break;
		default:
			break;
		}
	}
}