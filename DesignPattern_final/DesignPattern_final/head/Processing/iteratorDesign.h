#pragma once
#include "../DAO/Data.h"

using namespace DATA;
/*������������ӹ���������*/
class AnimalIterator {
public:
	virtual void setNumber(int i) = 0;
	virtual void next() = 0;
	virtual void previous() = 0;
	virtual bool isLast() = 0;
	virtual AnimalProcess currentNumber() = 0;//����һ���������
	virtual bool isFirst() = 0;
};
/*��������ţ�ӹ���������*/
class CattleIterator :public AnimalIterator {
public:
	int currentindex = 0;
	vector<AnimalProcess> animals;
	CattleIterator(vector<AnimalProcess>& animals) :animals(animals) {};
	void setNumber(int i);
	void next();
	void previous();
	bool isLast();
	AnimalProcess currentNumber();
	bool isFirst();
};
/*�����������ӹ���������*/
class ChickenIterator :public AnimalIterator {
public:
	int currentindex = 0;
	vector<AnimalProcess> animals;
	ChickenIterator(vector<AnimalProcess>& animals) :animals(animals) {};
	void setNumber(int i);
	void next();
	void previous();
	bool isLast();
	AnimalProcess currentNumber();
	bool isFirst();
};
/*�����������󹤳���*/
class ProcessFactory {
public:
	virtual AnimalIterator* createIterator() = 0;
};
/*���������ӹ�ţ��*/
class ProcessCattle :public ProcessFactory {
private:
	vector<AnimalProcess> cattles;
public:
	AnimalIterator* createIterator();
	void addItem(AnimalProcess cattle);
};
/*���������ӹ�����*/
class ProcessChicken :public ProcessFactory {
public:
private:
	vector<AnimalProcess> chicken;
public:
	AnimalIterator* createIterator();
	void addItem(AnimalProcess chick);
};
