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
	class AnimalProcess {
	public:
		int num;//�Ǽӹ��ĵڼ��Ŷ���
		Farming_Type type_name;//��ʲô���͵Ķ���
	};
	//DAO�ӿ�
	class farmingDAO {
	public:
		virtual int insert_farm(Farming f) = 0;
		virtual int have_farm(string owner_name) = 0;
	};
	class animalprocessDAO {
		virtual int insert_animalprocess(AnimalProcess animalprocess) = 0;//����ӹ�����
		virtual vector<AnimalProcess> get_animals() = 0;//�õ��ӹ��������ж���
	};
	//���ݿ���ʷ����ľ���ʵ��
	class farmingDAOImpl :public farmingDAO {
	protected:
		vector<Farming> farm;
	public:
		int insert_farm(Farming f);
		int have_farm(string owner_name);
	};
	class animalprocessDAOImpl :public animalprocessDAO {
	protected:
		vector<AnimalProcess> animals;
	public:
		int insert_animalprocess(AnimalProcess animalprocess);
		vector<AnimalProcess> get_animals();//�õ��ӹ��������ж�������ݿ�����

	};

	//���ݿ���������ΪDatabase���һ��ʵ��
	//�̳�
	class Database :public farmingDAOImpl, public animalprocessDAOImpl {
	private:
		Database();
		static Database instance;
	public:
		static Database& get_DB();
	};
}