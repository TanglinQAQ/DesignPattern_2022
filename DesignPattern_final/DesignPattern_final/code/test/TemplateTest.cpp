#include"../../head/Farming/farmHouseConstructTemplate.h"
#include <iostream>
using namespace std;


void templatetest()
{
	cout << "#��ʼ����templateģ�巽��ģʽ#" << endl;
	cout << "���ֶ���ľ�ס�����Ľ���������Ϊ�ȶ���������̣�����ϸ����������������ʵ��" << endl << endl;
	cout << "********" << "��ʼ����ţ��" << "********" << endl;
	houseConstructor* cattlehouseconstructor = new cowshedConstructorImpl();
	cattlehouseconstructor->houseConstruct();
	delete[] cattlehouseconstructor;
	cout << endl;

	cout << "********" << "��ʼ���켦��" << "********" << endl;
	houseConstructor* chickenhouseconstructor = new henhouseConstructorImpl();
	chickenhouseconstructor->houseConstruct();
	delete[] chickenhouseconstructor;
	cout << endl;

	cout << "********" << "��ʼ������Ȧ" << "********" << endl;
	houseConstructor* pighouseconstructor = new hogpenConstructorImpl();
	pighouseconstructor->houseConstruct();
	delete[] pighouseconstructor;
	cout << endl;

	cout << "���Խ���" << endl << endl;
}