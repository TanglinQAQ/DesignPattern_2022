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
	void buy_sheep(int n) {
		cout << "买了" << n << "头张家的羊" << endl;
	}
	void buy_cattle(int n)
	{
		cout << "买了" << n << "头张家的牛" << endl;
	}
	void buy_chicken(int n) {
		cout << "买了" << n << "头张家的鸡" << endl;
	}
};
class WangFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n) {
		cout << "买了" << n << "头王家的羊" << endl;
	}
	void buy_cattle(int n)
	{
		cout << "买了" << n << "头王家的牛" << endl;
	}
	void buy_chicken(int n) {
		cout << "买了" << n << "头王家的鸡" << endl;
	}
};
class ChenFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n) {
		cout << "买了" << n << "头陈家的羊" << endl;
	}
	void buy_cattle(int n)
	{
		cout << "买了" << n << "头陈家的牛" << endl;
	}
	void buy_chicken(int n) {
		cout << "买了" << n << "头陈家的鸡" << endl;
	}
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
	void Buy() {
		cout << "你要购买的是羊(0)还是鸡(1)还是牛(2)" << endl;
		srand(time(0));
		int option,number;
		int n;
		cin >> option;
		cout << "输入你要买的数量" << endl;
		cin >> number;
		if (option == 0) {
			n = rand() % number;
			number -= n;
			sales->BuyZhangSheep(n);
			n = rand() % number;
			number -= n;
			sales->BuyWangSheep(n);
			sales->BuyChenSheep(number);
		}
		else if (option == 1) {
			n = rand() % number;
			number -= n;
			sales->BuyZhangCattle(n);
			n = rand() % number;
			number -= n;
			sales->BuyWangCattle(n);
			sales->BuyChenCattle(number);
		}
		else if (option == 2) {
			n = rand() % number;
			number -= n;
			sales->BuyZhangChicken(n);
			n = rand() % number;
			number -= n;
			sales->BuyWangChicken(n);
			sales->BuyChenChicken(number);
		}
		else cout << "暂时不提供其他的动物出售" << endl;
	}
};

void Facade();