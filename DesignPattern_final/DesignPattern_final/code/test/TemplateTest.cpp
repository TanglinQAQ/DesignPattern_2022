#include"../../head/Farming/farmHouseConstructTemplate.h"
#include <iostream>
using namespace std;


void templatetest()
{
	cout << "��������ֳ�������ˣ�����������Ϊ���������ǵ���ֳ������" << endl << endl;
	cout << "# ʹ��templateģ�巽��ģʽ#" << endl;
	cout << "********" << "ţ����������" << "********" << endl;
	houseConstructor* cattlehouseconstructor = new cowshedConstructorImpl();
	cattlehouseconstructor->houseConstruct();
	delete[] cattlehouseconstructor;
	cout << endl;

	cout << "********" << "������������" << "********" << endl;
	houseConstructor* chickenhouseconstructor = new henhouseConstructorImpl();
	chickenhouseconstructor->houseConstruct();
	delete[] chickenhouseconstructor;
	cout << endl;

	cout << "********" << "��Ȧ��������" << "********" << endl;
	houseConstructor* pighouseconstructor = new hogpenConstructorImpl();
	pighouseconstructor->houseConstruct();
	delete[] pighouseconstructor;
	cout << endl;

	cout << "˵������" << endl << endl;
}