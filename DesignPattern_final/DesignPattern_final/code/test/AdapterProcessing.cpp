#include <iostream>
#include "../../head/Processing/adapterDesign.h"
using namespace std;

void AdapterProcessing_Client()
{
	//�����ӹ�������
	cout << "********" << "��ʼ�����ӹ�ţ�Ĺ���" << "********" << endl;
	ProcessCattleFactory2* processfactory = new ProcessCattleFactory2();
	//�ӹ�ţ
	string msg = processfactory->process();
	//cout << "\n�����Ǽӹ�"<< msg <<"��ȫ����"<< endl;
	//�ӹ���
	cout << "\n# ʹ��������ģʽ���ӹ���";
	string msg1 = processfactory->process2();
	//cout << "\n�����Ǽӹ�" << msg1 << "��ȫ����" << endl;
	cout << endl;
	cout << "********" << "�����ӹ�" << "********" << endl;
}