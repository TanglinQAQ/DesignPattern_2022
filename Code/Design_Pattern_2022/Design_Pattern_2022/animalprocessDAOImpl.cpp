/*Processing������ݷ��ʲ�������*/
#include <iostream>
#include "Data.h"
using namespace DATA;

int  animalprocessDAOImpl::insert_animalprocess(AnimalProcess animalprocess)
{
	cout << "# ʹ��DAOģʽ������ӹ�������" << endl;
	animals.push_back(animalprocess);
	return 1;
}

