/*���ݿ��ʼ��*/
#include "Data.h"
#include <iostream>
#include <iomanip>
using namespace DATA;
using namespace std;

//�����ŵ������ж�DB�Ĳ���
Database::Database()
{
	cout <<"********" << "���ݿ��ʼ����" <<"********" << endl;
	/*������Ϣ��ʼ��*/
	Farming f1 = { "Wang",{Farming_Type::cattle,Farming_Type::chicken,Farming_Type::pig} };
	Farming f2 = { "Li",{Farming_Type::cattle,Farming_Type::chicken,Farming_Type::pig} };
	this->insert_farm(f1);
	this->insert_farm(f2);
	/*�ӹ�����Ϣ��ʼ��*/
	/*���ǲ���5ͷţ��5ͷ��ȥ�ӹ�*/
	for (int i = 0; i < 5; i++) {
		AnimalProcess a = { i,Farming_Type::cattle };
		this->insert_animalprocess(a);
	}
	for (int i = 0; i < 5; i++) {
		AnimalProcess a = { i,Farming_Type::chicken };
		this->insert_animalprocess(a);
	}
	cout << "********" << "���ݿ��ʼ������" << "********" << endl;
}

vector<AnimalProcess> Database::get_animals() {
	return animals;
}