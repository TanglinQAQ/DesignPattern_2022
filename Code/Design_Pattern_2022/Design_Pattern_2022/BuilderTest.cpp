#include"breedBuilder.h"
#include <iostream>
using namespace std;


void buildertest()
{
	cout << "#��ʼ����builder������ģʽ#" << endl;
	cout << "���ֶ�������������������ƣ������ڲ�ͬ�Ķ���ľ�������������������" << endl << endl;
	cout << "********" << "��ʼ����ţ����������" << "********" << endl;
	breedBuilder* cattlebuilder = new cattleBuilderImpl();
	cattlebuilder->feed();
	cattlebuilder->graze();
	cattlebuilder->keephealthy();
	delete[] cattlebuilder;
	cout << endl;

	cout << "********" << "��ʼ����������������" << "********" << endl;
	breedBuilder* chickenbuilder = new chickenBuilderImpl();
	chickenbuilder->feed();
	chickenbuilder->graze();
	chickenbuilder->keephealthy();
	delete[] chickenbuilder;
	cout << endl;

	cout << "********" << "��ʼ���������������" << "********" << endl;
	breedBuilder* pigbuilder = new pigBuilderImpl();
	pigbuilder->feed();
	pigbuilder->graze();
	pigbuilder->keephealthy();
	delete[] pigbuilder;
	cout << endl;

	cout << "���Խ���" << endl << endl;
}