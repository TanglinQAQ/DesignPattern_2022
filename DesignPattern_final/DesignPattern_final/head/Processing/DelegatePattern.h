#pragma once
#include "../DAO/Data.h"
using namespace DATA;

/*类描述：加工厂老板2*/
class Man2 {
public:
	virtual void processing(string command);
};

/*类描述：加工厂老板1*/
class Man1 {
private:
	Man2 realman;
public:
	Man1():realman(Man2()){}
	virtual void processing(string command);
};


