#include <iostream>
#include "../../head/Farming/farmingFactory.h"
using namespace std;

void FarmStocking_Client()
{
	cout << "���ǲɹ�Ա��֮ǰ���궩�����������������" << endl;
	cout << "********" << "��ʼ��������ֳ�����" << "********" << endl;
	Farming_AbstractFactory*  Wang= new WangFarming_Factory();
	cout << "���ڲɹ�ţ��" << endl;
	cattle* Wang_cattle = Wang->getCattle();
	Wang_cattle->show();
	delete[]Wang;
	delete[]Wang_cattle;
	cout << "********" << "������" << "********" << endl;
	cout << "********" << "��ʼ��С����ֳ�����" << "********" << endl;
	Farming_AbstractFactory* Li = new LiFarming_Factory();
	cout << "���ڲɹ�����" << endl;
	chicken* Li_chicken = Li->getChicken();
	Li_chicken->show();
	cout << "���ڲɹ���" << endl;
	pig* Li_pig = Li->getPig();
	Li_pig->show();
	delete[]Li;
	delete[]Li_chicken;
	delete[]Li_pig;
	cout << "********" << "������" << "********" << endl;
}