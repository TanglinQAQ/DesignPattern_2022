#include "../../../../head/Managing/Observer.h"

void Business_situation::supply_quanlity_up() {
	cout << "市场上的商品变的更多了，价格降低了" << endl;
	srand((unsigned int)time(0));
	for (int it = 0; it < this->observers.size(); it++)
	{
		this->observers[it].down();
	}
}

void Business_situation::supply_quanlity_dowm() {
	cout << "市场上的商品变的更少了，价格提高了" << endl;
	for (int it = 0; it < this->observers.size(); it++)
	{
		this->observers[it].up();
	}
}

void Business_situation::attch(Observer* observser) {
	this->observers.push_back(*observser);
}

void Observer::up() {
	int price_change = 1 + rand() % (this->price / 10);
	cout << "本次" << this->Name_supply << "的公司涨价" << price_change << endl;
	this->price += price_change;
	this->Price();
}

void Observer::down() {
	int price_change = 1 + rand() % (this->price / 10);
	cout << "本次" << this->Name_supply << "的公司降价" << price_change << endl;
	if (this->price > price_change);
	this->price -= price_change;
	this->Price();
}
void Observer::Price() {
	cout << this->Name_supply << "的公司目前的单价是" << price << endl;
}
