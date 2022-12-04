#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
class AnimalCenter {
	virtual void buy_sheep(int n) = 0;
	virtual void buy_cattle(int n) = 0;
	virtual void buy_chicken(int n) = 0;
};

class ZhangFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n);
	void buy_cattle(int n);
	void buy_chicken(int n);
};
class WangFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n);
	void buy_cattle(int n);
	void buy_chicken(int n);
};
class ChenFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n);
	void buy_cattle(int n);
	void buy_chicken(int n);
};

class CenterFactory {
	friend class Sale_factory;
	ZhangFamily *Zhang;
	WangFamily* Wang;
	ChenFamily* Chen;
	CenterFactory() {
		Zhang = new ZhangFamily;
		Wang = new WangFamily;
		Chen = new ChenFamily;
	}
	~CenterFactory() {
		delete Zhang;
		delete Wang;
		delete Chen;
	}
	void BuyZhangSheep(int n)
	{
		Zhang->buy_sheep(n);
	}
	void BuyZhangCattle(int n)
	{
		Zhang->buy_cattle(n);
	}
	void BuyZhangChicken(int n)
	{
		Zhang->buy_chicken(n);
	}

	void BuyWangSheep(int n)
	{
		Wang->buy_sheep(n);
	}
	void BuyWangCattle(int n)
	{
		Wang->buy_cattle(n);
	}
	void BuyWangChicken(int n)
	{
		Wang->buy_chicken(n);
	}

	void BuyChenSheep(int n)
	{
		Chen->buy_sheep(n);
	}
	void BuyChenCattle(int n)
	{
		Chen->buy_cattle(n);
	}
	void BuyChenChicken(int n)
	{
		Chen->buy_chicken(n);
	}
};

class Sale_factory {
	friend void Facade();
	CenterFactory* sales;
	Sale_factory(){
		cout << "这里是销售工厂，你可以购买牛羊鸡。" << endl;
		sales = new CenterFactory();
	}
	~Sale_factory() {
		delete sales;
	}
	void Buy();
};

void Facade();