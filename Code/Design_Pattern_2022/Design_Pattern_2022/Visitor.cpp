/*
   Visitor.h -- defination
*/

#include "Visitor.h"
#include <iostream>
using namespace std;

void  Visitor::setName(string name)
{
	this->name = name;
}

void  Customer::visit(Apple* apple)
{
	cout << "# 使用访问者模式" << endl;
	cout << "顾客" << name << "购买了苹果。" << endl;
}

void  Customer::visit(Chicken* chicken)
{
	cout << "# 使用访问者模式" << endl;
	cout << "顾客" << name << "购买了烤鸡。" << endl;
}

void  Farm_manager::visit(Apple* apple)
{
	cout << "# 使用访问者模式" << endl;
	cout << "农场管理者" << name << "查看了苹果销售额。" << endl;
}

void  Farm_manager::visit(Chicken* chicken)
{
	cout << "# 使用访问者模式" << endl;
	cout << "农场管理者" << name << "查看了烤鸡销售额。" << endl;
}