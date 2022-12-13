/*Processing相关数据访问操作定义*/
#include <iostream>
#include "../../../head/DAO/Data.h"
using namespace DATA;

int  animalprocessDAOImpl::insert_animalprocess(AnimalProcess animalprocess)
{
	cout << "# 使用DAO模式：插入加工厂数据" << endl;
	animals.push_back(animalprocess);
	return 1;
}

vector<AnimalProcess> animalprocessDAOImpl::get_animals() {
	cout << "# 使用DAO模式，获取加工厂的动物" << endl;
	return animals;
}
