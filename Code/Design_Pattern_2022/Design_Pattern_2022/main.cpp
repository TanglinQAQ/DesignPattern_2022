/*�����������ڵ��ø����ܵĲ���ģ��*/
#include <iostream>
#include "Data.h"
#include "test.h"
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
<<<<<<< HEAD
		case 11:
			//���Խ�����ģʽ
			buildertest();
			break;
		case 12:
			//����ģ��ģʽ
			templatetest();

		case 13:
			//���Դ���ģʽ
			proxytest();
=======
			//������Ԫģʽ
		case 11:
			Flyweight();
			break;
>>>>>>> fac9122c20c96c70dd56d71cfc81d82de67cdddc
		default:
			break;
		}
	}
}