/*Processing������ݷ��ʲ�������*/
#include <iostream>
#include "../../../head/DAO/Data.h"
using namespace DATA;

int  animalprocessDAOImpl::insert_animalprocess(AnimalProcess animalprocess)
{
	cout << "# ʹ��DAOģʽ������ӹ�������" << endl;
	animals.push_back(animalprocess);
	return 1;
}

vector<AnimalProcess> animalprocessDAOImpl::get_animals() {
	cout << "# ʹ��DAOģʽ����ȡ�ӹ����Ķ���" << endl;
	return animals;
}
