/*Farming������ݷ��ʲ�������*/
#include <iostream>
#include "../../../head/DAO/Data.h"
using namespace DATA;

int  farmingDAOImpl::insert_farm(Farming f)
{
	cout << "# ʹ��DAOģʽ��������ֳ������" << endl;
	farm.push_back(f);
	return 1;
}

int farmingDAOImpl::have_farm(string owner_name)
{
	cout << "# ʹ��DAOģʽ����ѯ��ֳ������" << endl;
	int i;
	for (i = 0; i < farm.size(); i++) {
		if (farm[i].owner_name == owner_name)
			return 1;
	}
	return 0;
}