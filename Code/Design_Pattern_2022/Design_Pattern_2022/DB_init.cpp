/*数据库初始化*/
#include "Data.h"
#include <iostream>
#include <iomanip>
using namespace DATA;
using namespace std;

//这里存放的是所有对DB的操作
Database::Database()
{
	cout <<"********" << "数据库初始化中" <<"********" << endl;
	/*牧场信息初始化*/
	Farming f1 = { "Wang",{Farming_Type::cattle,Farming_Type::chicken,Farming_Type::pig} };
	Farming f2 = { "Li",{Farming_Type::cattle,Farming_Type::chicken,Farming_Type::pig} };
	this->insert_farm(f1);
	this->insert_farm(f2);
	/*加工厂信息初始化*/
	/*就是插入5头牛，5头鸡去加工*/
	for (int i = 0; i < 5; i++) {
		AnimalProcess a = { i,Farming_Type::cattle };
		this->insert_animalprocess(a);
	}
	for (int i = 0; i < 5; i++) {
		AnimalProcess a = { i,Farming_Type::chicken };
		this->insert_animalprocess(a);
	}
	cout << "********" << "数据库初始化结束" << "********" << endl;
}

vector<AnimalProcess> Database::get_animals() {
	return animals;
}