#pragma once
#include "../DAO/Data.h"
using namespace DATA;

/*���������ӹ����ϰ�2*/
class Man2 {
public:
	virtual void processing(string command);
};

/*���������ӹ����ϰ�1*/
class Man1 {
private:
	Man2 realman;
public:
	Man1():realman(Man2()){}
	virtual void processing(string command);
};


