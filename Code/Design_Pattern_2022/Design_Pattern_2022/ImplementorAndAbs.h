#pragma once
#include "Abstraction.h"
using namespace std;

class setCattle :public Kind  //����ʵ�ֻ���Concrete Implementor����
{
public:
	void getKind();
};
class setChicken :public Kind  //����ʵ�ֻ���Concrete Implementor����
{
public:
	void getKind();
};
class setPig :public Kind  //����ʵ�ֻ���Concrete Implementor����
{
public:
	void getKind();
};

class Li :public Breeding  //��չ������
{
public:
	void getKind();
};

class Wang :public Breeding  //��չ������
{
public:
	void getKind();
};