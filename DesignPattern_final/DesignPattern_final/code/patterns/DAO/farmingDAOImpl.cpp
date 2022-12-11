/*Farming相关数据访问操作定义*/
#include <iostream>
#include "../../../head/DAO/Data.h"
using namespace DATA;

int  farmingDAOImpl::insert_farm(Farming f)
{
	cout << "# 使用DAO模式：插入养殖场数据" << endl;
	farm.push_back(f);
	return 1;
}

int farmingDAOImpl::have_farm(string owner_name)
{
	cout << "# 使用DAO模式：查询养殖场数据" << endl;
	int i;
	for (i = 0; i < farm.size(); i++) {
		if (farm[i].owner_name == owner_name)
			return 1;
	}
	return 0;
}