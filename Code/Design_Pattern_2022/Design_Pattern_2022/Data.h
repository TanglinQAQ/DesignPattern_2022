#pragma once
#include <string>
#include <vector>
using namespace std;
namespace DATA {

	//Farming���ݵĶ���
	enum class Farming_Type { cattle, chicken, pig };//��ֳ���ͣ�ţ��������
	class Farming {
	public:
		string owner_name;		//���������ˣ�����
		vector<Farming_Type>type_name;//��ֳ������
	};

	//DAO�ӿ�
	class farmingDAO {
	public:
		virtual int insert_farm(Farming f) = 0;
		virtual int have_farm(string owner_name) = 0;
	};

	//���ݿ���ʷ����ľ���ʵ��
	class farmingDAOImpl:public farmingDAO {
	protected:
		vector<Farming> farm;
	public:
		int insert_farm(Farming f);
		int have_farm(string owner_name);
	};

	//���ݿ���������ΪDatabase���һ��ʵ��
	//�̳�
	class Database :public farmingDAOImpl{
	public:
		Database();
	};
}