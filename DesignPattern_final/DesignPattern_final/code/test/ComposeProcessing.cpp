#include <iostream>
#include "../../head/Processing/composeDesign.h"
using namespace std;

void ComposeProcessing_Client()
{
	cout << "���ǳ������Σ����ڿ�ʼ�ֲ�λ��������мӹ�" << endl;
	//�����ӹ�������
	cout << "********" << "��ʼ�ӹ�ţ�Ĺ���" << "********" << endl;
	ProcessFactory* pNode = new ProcessCattleFactory("ţ�����ӹ��ܲ�");
	cout << "********" << "��ʼ�ӹ�ţ�ķֹ�����" << "********" << endl;
	cout << "\n# ʹ�����ģʽ���ӹ�ţͷ";
	ProcessFactory* pNode1 = new ComFactory("�ӹ�ţͷ�ֳ���");
	cout << "\n# ʹ�����ģʽ���ӹ�ţβ";
	ProcessFactory* pNode2 = new ComFactory("�ӹ�ţβ�ֳ���");
	cout << "\n# ʹ�����ģʽ��ţ��\n";
	ProcessFactory* pNode3 = new ComFactory("�ӹ�ţ��ֳ���");
	pNode->Add(pNode1);
	pNode->Add(pNode2);
	pNode->Add(pNode3);
	pNode->print();
	cout << "********" << "ţͷ�������" << "********" << endl;
	cout << "********" << "�ر�ţͷ�ֳ���" << "********" << endl;
	pNode->Remove(pNode1);
	cout << "********" << "�Ѿ��ر�ţͷ�ֳ���" << "********" << endl;
	cout << "********" << "����ķֳ������ڼӹ�" << "********" << endl;
	pNode->processing();
}