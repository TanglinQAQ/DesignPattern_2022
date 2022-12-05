#pragma once
#include "Data.h"

using namespace DATA;

/*�������������ӹ�ţ*/
class Cattlepro {
public:
	virtual string getcattle()=0;
	virtual void processcattle(string msg) =0;
};

/*�������������ӹ���*/
class Chickenpro {
public:
	virtual string getchicken()=0;
	virtual void processchicken(string msg) =0;
};

/*�������������ӹ�ţ*/
class CattleImpl :public Cattlepro {
public:
	string getcattle();
	void processcattle(string msg);
};

/*�������������ӹ���*/
class ChickenImpl:public Chickenpro {
public:
	string getchicken();
	void processchicken(string msg);
};

/*�����������ӹ�ţ����Ϊ�ӹ���*/
class CattleAdapter :public CattleImpl {
public:
	ChickenImpl *chicken;
	CattleAdapter() {
		chicken = new ChickenImpl();
	}
	string getcattle();
	void processcattle(string msg);
};

/*�����������󹤳���*/
class ProcessFactory {
public:
	virtual string process()=0;
	virtual string process2()=0;
};

/*���������ӹ�ţ�Ĺ�����*/
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

