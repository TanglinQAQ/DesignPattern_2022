/*���ݿ��ʼ��*/
#include "Data.h"
#include <iostream>
#include <iomanip>
using namespace DATA;
using namespace std;

Database::Database()
{
	cout <<"********" << "���ݿ��ʼ����" <<"********" << endl;
	/*������Ϣ��ʼ��*/
	Farming f1 = { "Wang",{cattle,chicken,pig} };
	Farming f2 = { "Li",{cattle,chicken,pig} };
	this->insert_farm(f1);
	this->insert_farm(f2);
	cout << "********" << "���ݿ��ʼ������" << "********" << endl;
}
