#include <iostream>
#include "../../head/Processing/SubscribePattern.h"
using namespace std;

void SubscribePattern_Client()
{
	cout << "********" << "��ʼ������Ϣ��������" << "********" << endl;
	genMessage notifier1;
	getMessage man1;
	getMessage man2;
	getMessage man3;

	notifier1.loadReceiver(&man1);
	notifier1.loadReceiver(&man2);
	notifier1.loadReceiver(&man3);
	cout << "\n# ʹ�÷�����-����ģʽ��������Ϣ";
	cout << "\n# ʹ�÷�����-����ģʽ��������Ϣ\n";
	notifier1.sendToAllRecv("����ӹ����깤");
	notifier1.sendToAllRecv("�ӹ�������û���ر�����鷢��");
}