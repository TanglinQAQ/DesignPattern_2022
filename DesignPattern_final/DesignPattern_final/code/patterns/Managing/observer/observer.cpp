#include "../../../../head/Managing/Observer.h"

void Business_situation::supply_quanlity_up() {
	cout << "�г��ϵ���Ʒ��ĸ����ˣ��۸񽵵���" << endl;
	srand((unsigned int)time(0));
	for (int it = 0; it < this->observers.size(); it++)
	{
		this->observers[it].down();
	}
}

void Business_situation::supply_quanlity_dowm() {
	cout << "�г��ϵ���Ʒ��ĸ����ˣ��۸������" << endl;
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
	cout << "����" << this->Name_supply << "�Ĺ�˾�Ǽ�" << price_change << endl;
	this->price += price_change;
	this->Price();
}

void Observer::down() {
	int price_change = 1 + rand() % (this->price / 10);
	cout << "����" << this->Name_supply << "�Ĺ�˾����" << price_change << endl;
	if (this->price > price_change);
	this->price -= price_change;
	this->Price();
}
void Observer::Price() {
	cout << this->Name_supply << "�Ĺ�˾Ŀǰ�ĵ�����" << price << endl;
}
