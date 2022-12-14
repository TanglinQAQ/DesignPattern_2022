/*从数据库拿数据*/
#include <iostream>
#include "../../head/Processing/iteratorDesign.h"
#include "../../head/DAO/Data.h"
#include <iomanip>

using namespace DATA;
using namespace std;


void IteratorProcessing_Client(Database &DB)
{
	cout << "【我是车间主任，现在开始流水线式加工原材料】" << endl << endl;
	//从数据库拿数据，获得待加工的牲畜
	cout << "********" << "开始从数据库获得要加工的牲畜" << "********" << endl;
	vector<AnimalProcess> animals = DB.get_animals();
	//开始将代加工的牲畜进行分类，放到不同的类别中
	ProcessCattle processcattle;
	ProcessChicken processchicken;
	cout << "********" << "开始将要加工的牲畜分类" << "********" << endl;
	for (int i = 0; i < animals.size(); i++) {
		if (animals[i].type_name == Farming_Type::cattle) //是牛，插入到牛数组中
			processcattle.addItem(animals[i]);
		else if (animals[i].type_name == Farming_Type::chicken) //是鸡，插入到鸡数组中
			processchicken.addItem(animals[i]);

	}
	//开始创建迭代器，分别进行牲畜的加工
	cout << "********" << "开始将分工后的牲畜进行加工" << "********" << endl;
	auto caiter = processcattle.createIterator();
	auto chiter = processchicken.createIterator();
	//加工牛
	cout << "\n# 使用迭代器模式：加工牛\n";
	while (!caiter->isLast()) {
		cout  <<"cattle  " << caiter->currentNumber().num << endl;
		caiter->next();
	}
	//加工鸡
	cout << "\n# 使用迭代器模式：加工鸡\n";
	while (!chiter->isLast()) {
		cout << "chicken  " << chiter->currentNumber().num << endl;
		chiter->next();
	}
	cout << "********" << "结束加工" << "********" << endl;
}