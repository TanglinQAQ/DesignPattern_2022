#pragma once
#include "Data.h"

using namespace DATA;

/*类描述：用来加工牛*/
class Cattlepro {
public:
	virtual string getcattle()=0;
	virtual void processcattle(string msg) =0;
};

/*类描述：用来加工鸡*/
class Chickenpro {
public:
	virtual string getchicken()=0;
	virtual void processchicken(string msg) =0;
};

/*类描述：用来加工牛*/
class CattleImpl :public Cattlepro {
public:
	string getcattle();
	void processcattle(string msg);
};

/*类描述：用来加工鸡*/
class ChickenImpl:public Chickenpro {
public:
	string getchicken();
	void processchicken(string msg);
};

/*类描述：将加工牛适配为加工鸡*/
class CattleAdapter :public CattleImpl {
public:
	ChickenImpl *chicken;
	CattleAdapter() {
		chicken = new ChickenImpl();
	}
	string getcattle();
	void processcattle(string msg);
};

/*类描述：抽象工厂类*/
class ProcessFactory {
public:
	virtual string process()=0;
	virtual string process2()=0;
};

/*类描述：加工牛的工厂类*/
class ProcessCattleFactory2:public ProcessFactory {
public:
	CattleImpl *cattle;
	CattleAdapter *cattletochicken;
	ProcessCattleFactory2(){
		cattle = new CattleImpl();
		cattletochicken = new CattleAdapter();
	}
	string process();
	string process2();
};

