#pragma once
/*
  实现模式：桥接模式
*/
#include <string>

class Kind  //实现化(Implementor)种类
{
public:
	virtual void getKind() = 0;
};

class Breeding  //抽象化（Abstraction）类   养殖地
{
protected:
	Kind* soft;
public:
	void setBreeding(Kind* soft)
	{
		this->soft = soft;
	}
	virtual void getKind() = 0;
};
