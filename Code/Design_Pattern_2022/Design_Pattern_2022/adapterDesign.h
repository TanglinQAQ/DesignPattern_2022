#pragma once
#include "Data.h"

using namespace DATA;

class Cattle {
public:
	virtual string getcattle()=0;
	virtual void processcattle(string msg) =0;
};

class Chicken {
public:
	virtual string getchicken()=0;
	virtual void processchicken(string msg) =0;
};


class CattleImpl :public Cattle {
public:
	string getcattle();
	void processcattle(string msg);
};

class ChickenImpl:public Chicken {
public:
	string getchicken();
	void processchicken(string msg);
};

//JAVAÖÐÊÇextends Cattle,implements ChickenImpl
class CattleAdapter :public CattleImpl {
public:
	ChickenImpl *chicken;
	CattleAdapter() {
		chicken = new ChickenImpl();
	}
	string getcattle();
	void processcattle(string msg);
};

class ProcessFactory {
public:
	virtual string process()=0;
	virtual string process2()=0;
};

class ProcessFactoryImpl:public ProcessFactory {
public:
	CattleImpl *cattle;
	CattleAdapter *cattletochicken;
	ProcessFactoryImpl(){
		cattle = new CattleImpl();
		cattletochicken = new CattleAdapter();
	}
	string process();
	string process2();
};

