/*
   Visitor.h -- defination
*/

#include "../../../../head/Managing/Visitor.h"
#include <iostream>
using namespace std;

void  Visitor::setName(string name)
{
	this->name = name;
}

void  Customer::visit(Apple* apple)
{
	cout << "# ʹ�÷�����ģʽ" << endl;
	cout << "�˿�" << name << "������ƻ����" << endl;
}

void  Customer::visit(Chicken* chicken)
{
	cout << "# ʹ�÷�����ģʽ" << endl;
	cout << "�˿�" << name << "�����˿�����" << endl;
}

void  Farm_manager::visit(Apple* apple)
{
	cout << "# ʹ�÷�����ģʽ" << endl;
	cout << "�쵼" << name << "�鿴��ƻ�����۶" << endl;
}

void  Farm_manager::visit(Chicken* chicken)
{
	cout << "# ʹ�÷�����ģʽ" << endl;
	cout << "�쵼" << name << "�鿴�˿������۶" << endl;
}