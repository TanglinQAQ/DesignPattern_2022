/*�����ݿ�������*/
#include <iostream>
#include "../../head/Processing/iteratorDesign.h"
#include "../../head/DAO/Data.h"
#include <iomanip>

using namespace DATA;
using namespace std;


void IteratorProcessing_Client(Database &DB)
{
	cout << "�����ǳ������Σ����ڿ�ʼ��ˮ��ʽ�ӹ�ԭ���ϡ�" << endl << endl;
	//�����ݿ������ݣ���ô��ӹ�������
	cout << "********" << "��ʼ�����ݿ���Ҫ�ӹ�������" << "********" << endl;
	vector<AnimalProcess> animals = DB.get_animals();
	//��ʼ�����ӹ���������з��࣬�ŵ���ͬ�������
	ProcessCattle processcattle;
	ProcessChicken processchicken;
	cout << "********" << "��ʼ��Ҫ�ӹ����������" << "********" << endl;
	for (int i = 0; i < animals.size(); i++) {
		if (animals[i].type_name == Farming_Type::cattle) //��ţ�����뵽ţ������
			processcattle.addItem(animals[i]);
		else if (animals[i].type_name == Farming_Type::chicken) //�Ǽ������뵽��������
			processchicken.addItem(animals[i]);

	}
	//��ʼ�������������ֱ��������ļӹ�
	cout << "********" << "��ʼ���ֹ����������мӹ�" << "********" << endl;
	auto caiter = processcattle.createIterator();
	auto chiter = processchicken.createIterator();
	//�ӹ�ţ
	cout << "\n# ʹ�õ�����ģʽ���ӹ�ţ\n";
	while (!caiter->isLast()) {
		cout  <<"cattle  " << caiter->currentNumber().num << endl;
		caiter->next();
	}
	//�ӹ���
	cout << "\n# ʹ�õ�����ģʽ���ӹ���\n";
	while (!chiter->isLast()) {
		cout << "chicken  " << chiter->currentNumber().num << endl;
		chiter->next();
	}
	cout << "********" << "�����ӹ�" << "********" << endl;
}