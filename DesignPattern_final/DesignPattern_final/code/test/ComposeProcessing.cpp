#include <iostream>
#include "../../head/Processing/composeDesign.h"
using namespace std;

void ComposeProcessing_Client()
{
	//�����ӹ�������
	cout << "********" << "��ʼ�����ӹ�ţ�Ĺ���" << "********" << endl;
	ProcessFactory* pNode = new ProcessCattleFactory("ţ�����ӹ��ܲ�");
	cout << "********" << "��ʼ�����ӹ�ţ�ķֹ���" << "********" << endl;
	cout << "\n# ʹ�����ģʽ������ţͷ�ֹ���";
	ProcessFactory* pNode1 = new ComFactory("�ӹ�ţͷ�ֹ���");
	cout << "\n# ʹ�����ģʽ������ţβ�ֹ���";
	ProcessFactory* pNode2 = new ComFactory("�ӹ�ţβ�ֹ���");
	cout << "\n# ʹ�����ģʽ������ţ��ֹ���\n";
	ProcessFactory* pNode3 = new ComFactory("�ӹ�ţ��ֹ���");
	pNode->Add(pNode1);
	pNode->Add(pNode2);
	pNode->Add(pNode3);
	pNode->print();
	cout << "********" << "������������" << "********" << endl;
	cout << "********" << "����ɾ��ţͷ�ֹ���" << "********" << endl;
	pNode->Remove(pNode1);
	cout << "********" << "�Ѿ�ɾ��ţͷ�ֹ���" << "********" << endl;
	cout << "********" << "��ʣ��ķֹ����ӹ�" << "********" << endl;
	pNode->processing();
	cout << "********" << "�����ֹ��������Ĳ���" << "********" << endl;
}