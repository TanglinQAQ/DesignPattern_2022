#pragma once
#include "../DAO/Data.h"
using namespace DATA;

/*��������ţ��*/
class Cattle2 {
protected:
	int num;
public:
	Cattle2(int numm) { num = numm; }
	virtual int getnum();
	virtual string setnum(int numm) ;
};


/*���������ӹ�ţ������*/
class ProcessFactory4 {
public:
	vector<Cattle2*> cattles;
	ProcessFactory4()
	{
		Cattle2* c1 = new Cattle2(0);
		Cattle2* c2 = new Cattle2(1);
		cattles.push_back(c1);
		cattles.push_back(c2);
	}

	virtual vector<Cattle2*> getAllCattle();
	virtual void deleteCattle(int num);
	virtual Cattle2* getCattle(int num);
};