/*数据库初始化*/
#include "Data.h"
#include <iostream>
#include <iomanip>
using namespace DATA;
using namespace std;

Database::Database()
{
	cout <<"********" << "数据库初始化中" <<"********" << endl;
	/*牧场信息初始化*/
	Farming f1 = { "Wang",{cattle,chicken,pig} };
	Farming f2 = { "Li",{cattle,chicken,pig} };
	this->insert_farm(f1);
	this->insert_farm(f2);
	cout << "********" << "数据库初始化结束" << "********" << endl;
}
