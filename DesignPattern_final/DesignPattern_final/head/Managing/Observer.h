#pragma once
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

class Observer;

class Business_situation {
	friend class Observer;
	friend void market();
	vector<Observer> observers;
	Business_situation() {
		cout << "竞品公司的情况如下：" << endl;
		observers = *(new vector<Observer>);
	};
	void supply_quanlity_up();
	void supply_quanlity_dowm();
	void attch(Observer* observer);
};

class Observer {
	friend class Business_situation;
	friend void market();
	Business_situation* business_situation;
	Observer(string Name_supply, Business_situation* business_situation) {
		cout << "有名字为" << Name_supply << "的公司" << endl;
		this->Name_supply = Name_supply;
		this->price = 100;
		this->business_situation = business_situation;
		this->business_situation->attch(this);
	};
	void down();
	void up();
	void Price();
	string Name_supply;
	int price;
};
