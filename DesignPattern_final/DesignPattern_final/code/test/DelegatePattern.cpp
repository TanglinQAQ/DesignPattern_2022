#include <iostream>
#include "../../head/Processing/DelegatePattern.h"
using namespace std;

void DelegatePattern_Client()
{
	//�����ӹ�������
	cout << "********" << "���ӹ��������˴���" << "********" << endl;
	Man1* m1 = new Man1();
	cout << "\n# ʹ��ί��ģʽ������\n";
	m1->processing("������Ҫ�ӹ���Ⱥţ��������");
}