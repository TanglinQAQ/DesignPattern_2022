#include<iostream>
#include"../../../../head/Farming/farmHouseConstructTemplate.h"

using namespace std;

//ʵ�ֽ����ӵ�ͨ����������ĺ���
void houseConstructor::layfoundation() {
    cout << "������Ҫ��õػ�" << endl;
}

void houseConstructor::laywall() {
    cout << "������Ҫ���ǽ��" << endl;
}

void houseConstructor::buildroof() {
    cout << "������Ҫ��ö���" << endl;
}


//ʵ�����ַ��Ӳ�ͬ����һ������
void hogpenConstructorImpl::anotherstep() {
    cout << "��Ȧ��Ҫ�������" << endl;
}

void henhouseConstructorImpl::anotherstep() {
    cout << "������Ҫ��װ����" << endl;
}

void cowshedConstructorImpl::anotherstep() {
    cout << "ţ����Ҫ����Χ��" << endl;
}