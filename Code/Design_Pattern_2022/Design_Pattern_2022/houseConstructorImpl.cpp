#include<iostream>

#include"farmHouseConstructTemplate.h"

using namespace std;

//ʵ�ֽ����ӵ�ͨ����������ĺ���
void houseConstructor::layfoundation() {
    cout << "1. ������Ҫ��õػ�" << endl;
}

void houseConstructor::laywall() {
    cout << "2. ������Ҫ���ǽ��" << endl;
}

void houseConstructor::buildroof() {
    cout << "4. ������Ҫ��ö���" << endl;
}


//ʵ�����ַ��Ӳ�ͬ����һ������
void hogpenConstructorImpl::anotherstep() {
    cout << "3. ��Ȧ��Ҫ������ͣ������Բ��裩" << endl;
}

void henhouseConstructorImpl::anotherstep() {
    cout << "3. ������Ҫ��װ�����������Բ��裩" << endl;
}

void cowshedConstructorImpl::anotherstep() {
    cout << "3. ţ����Ҫ����Χ���������Բ��裩" << endl;
}