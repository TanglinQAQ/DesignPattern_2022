#pragma once
#include "Abstraction.h"
using namespace std;

class setCattle :public Kind  //具体实现化（Concrete Implementor）类
{
public:
	void getKind();
};
class setChicken :public Kind  //具体实现化（Concrete Implementor）类
{
public:
	void getKind();
};
class setPig :public Kind  //具体实现化（Concrete Implementor）类
{
public:
	void getKind();
};

class Li :public Breeding  //拓展抽象化类
{
public:
	void getKind();
};

class Wang :public Breeding  //拓展抽象化类
{
public:
	void getKind();
};