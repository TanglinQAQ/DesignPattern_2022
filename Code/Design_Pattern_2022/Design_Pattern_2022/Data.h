#pragma once
#include <string>
#include <vector>
using namespace std;
namespace DATA {

	//Farming数据的定义
	enum class Farming_Type { cattle, chicken, pig };//养殖类型：牛、鸡、猪
	class Farming {
	public:
		string owner_name;		//牧场的主人，主码
		vector<Farming_Type>type_name;//养殖的种类
	};

	//DAO接口
	class farmingDAO {
	public:
		virtual int insert_farm(Farming f) = 0;
		virtual int have_farm(string owner_name) = 0;
	};

	//数据库访问方法的具体实现
	class farmingDAOImpl:public farmingDAO {
	protected:
		vector<Farming> farm;
	public:
		int insert_farm(Farming f);
		int have_farm(string owner_name);
	};

	//数据库最终体现为Database类的一个实例
	//继承
	class Database :public farmingDAOImpl{
	public:
		Database();
	};
}