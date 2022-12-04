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
		cout << "����" << n << "ͷ�żҵ���" << endl;
	}
	void buy_cattle(int n)
	{
		cout << "����" << n << "ͷ�żҵ�ţ" << endl;
	}
	void buy_chicken(int n) {
		cout << "����" << n << "ͷ�żҵļ�" << endl;
	}
};
class WangFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n) {
		cout << "����" << n << "ͷ���ҵ���" << endl;
	}
	void buy_cattle(int n)
	{
		cout << "����" << n << "ͷ���ҵ�ţ" << endl;
	}
	void buy_chicken(int n) {
		cout << "����" << n << "ͷ���ҵļ�" << endl;
	}
};
class ChenFamily :public AnimalCenter {
	friend class CenterFactory;
	void buy_sheep(int n) {
		cout << "����" << n << "ͷ�¼ҵ���" << endl;
	}
	void buy_cattle(int n)
	{
		cout << "����" << n << "ͷ�¼ҵ�ţ" << endl;
	}
	void buy_chicken(int n) {
		cout << "����" << n << "ͷ�¼ҵļ�" << endl;
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
		cout << "���������۹���������Թ���ţ�򼦡�" << endl;
		sales = new CenterFactory();
	}
	~Sale_factory() {
		delete sales;
	}
	void Buy() {
		cout << "��Ҫ���������(0)���Ǽ�(1)����ţ(2)" << endl;
		srand(time(0));
		int option,number;
		int n;
		cin >> option;
		cout << "������Ҫ�������" << endl;
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
		else cout << "��ʱ���ṩ�����Ķ������" << endl;
	}
};

void Facade();