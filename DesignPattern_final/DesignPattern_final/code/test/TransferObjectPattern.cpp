#include <iostream>
#include "../../head/Processing/TransferObject.h"
using namespace std;

void transferBojectPattern_Client()
{
	cout << "\n# ʹ�ô������ģʽ\n";
	cout << "********" << "���ڻ�����мӹ�����" << "********" << endl ;
	ProcessFactory4* p = new ProcessFactory4();
	vector<Cattle2*> cattles=p->getAllCattle();
	cout << "********" << "�õ����еļӹ�����" << "********" << endl;
	for (vector<Cattle2*>::iterator it = cattles.begin(); it != cattles.end(); ++it) {
		cout<<"cattle  "<<(*it)->getnum()<<endl;
	}
	p->deleteCattle(0);
	cout << "********" << "��ɾ�����Ϊ0�ļӹ�ţ" << "********" << endl;
	cout << "********" << "�õ��ض��ӹ�����" << "********" << endl;
	Cattle2* cattle=p->getCattle(1);
	cout << "�õ���cattle���Ϊ:" << cattle->getnum()<<endl;
}