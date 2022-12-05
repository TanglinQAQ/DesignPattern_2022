#pragma once
#include "Data.h"
using namespace DATA;

class ProcessFactory {
public:
	string strcom;//��ʲô���͵����
	vector<ProcessFactory*> vectorcom;//���������
	ProcessFactory(string strcom) :strcom(strcom) {};
	virtual void Add(ProcessFactory *com) = 0;
	virtual void Remove(ProcessFactory *com) = 0;
	virtual ProcessFactory* GetChild(int index) = 0;
	virtual string getname() { return strcom; }
	virtual void processing() = 0;
	virtual void print() = 0;
};

//��������࣬Ҷ�ӽڵ�
class ComFactory :public  ProcessFactory{
public:
	ComFactory(string strcom) : ProcessFactory(strcom) {};
	void Add(ProcessFactory* com) {};
	void Remove(ProcessFactory* com) {};
	ProcessFactory* GetChild(int index) { return NULL; }
	void processing() ;
	void print() {};
};

//���幤���࣬��Ҷ�ӽڵ�
class ProcessCattleFactory :public ProcessFactory {
public:
	vector<ProcessFactory*> vectorcom;//���������
	~ProcessCattleFactory() {
		vector<ProcessFactory*>::iterator it = vectorcom.begin();
		while (it != vectorcom.end()) {
			if (*it != NULL) {
				delete* it;
				*it = NULL;
			}
			vectorcom.erase(it);
			it = vectorcom.begin();
		}
	}
	ProcessCattleFactory(string strcom) :ProcessFactory(strcom) {};
	void Add(ProcessFactory* com);
	void Remove(ProcessFactory* com);
	ProcessFactory* GetChild(int index);
	void processing();
	void print() ;
};

