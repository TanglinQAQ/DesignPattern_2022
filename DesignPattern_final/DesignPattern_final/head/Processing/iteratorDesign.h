#pragma once
#include "../DAO/Data.h"

using namespace DATA;
/*类描述：动物加工迭代器类*/
class AnimalIterator {
public:
	virtual void setNumber(int i) = 0;
	virtual void next() = 0;
	virtual void previous() = 0;
	virtual bool isLast() = 0;
	virtual AnimalProcess currentNumber() = 0;//返回一个动物对象
	virtual bool isFirst() = 0;
};
/*类描述：牛加工迭代器类*/
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
/*类描述：鸡加工迭代器类*/
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
/*类描述：抽象工厂类*/
class ProcessFactory {
public:
	virtual AnimalIterator* createIterator() = 0;
};
/*类描述：加工牛类*/
class ProcessCattle :public ProcessFactory {
private:
	vector<AnimalProcess> cattles;
public:
	AnimalIterator* createIterator();
	void addItem(AnimalProcess cattle);
};
/*类描述：加工鸡类*/
class ProcessChicken :public ProcessFactory {
public:
private:
	vector<AnimalProcess> chicken;
public:
	AnimalIterator* createIterator();
	void addItem(AnimalProcess chick);
};
