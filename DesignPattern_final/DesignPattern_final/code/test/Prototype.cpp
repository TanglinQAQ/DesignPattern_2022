#include<iostream>
#include "../../head/Processing/pack.h"

using namespace std;

void Prototype_Manage() {
	cout << "���Ǵ�����ˣ�������Ҫ�Բ�Ʒ���а�װ" << endl;
	cout << "# ʹ��ԭ��ģʽ" << endl;
	//�����˰�����
	VegetablePackage* vegetable1 = new VegetablePackage(10, 20, 30, "yellow");
	//��������
	VegetablePackage* vegetable2 = vegetable1->Clone();
	//�������������
	MeatPackage* meat1 = new MeatPackage(15, 25, 35, "red");
	//��������
	MeatPackage* meat2 = meat1->Clone();

	delete vegetable1;
	vegetable1 = NULL;

	delete vegetable2;
	vegetable1 = NULL;

	delete meat1;
	meat1 = NULL;

	delete meat2;
	meat2 = NULL;
}