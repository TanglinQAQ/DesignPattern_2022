#pragma once
#include "../DAO/Data.h"

using namespace DATA;
/*�����������������*/
class Strategy {
public:
	virtual void ProcessingInterface() = 0;
};

/*���������ӹ����ķ�����*/
class ProcessingChicken : public Strategy {
public:
	void ProcessingInterface();
	~ProcessingChicken() {};
};

/*���������ӹ�ţ�ķ�����*/
class ProcessingCattle : public Strategy {
public:
	void ProcessingInterface();
	~ProcessingCattle() {};
};

/*���������ӹ���ķ�����*/
class ProcessingPig : public Strategy {
public:
	void ProcessingInterface();
	~ProcessingPig() {};
};

/*�����������󹤳���*/
class ProcessFactory3 {
private:
	Strategy* strateprocessing;
public:
	ProcessFactory3(STRATEGETYPE strategytype) {
		switch (strategytype)
		{
		case Cattleprocessing:
			strateprocessing = new ProcessingCattle;
			break;
		case Chickenprocessing:
			strateprocessing = new ProcessingChicken;
			break;
		case Pigprocessing:
			strateprocessing = new ProcessingPig;
			break;
		default:
			break;
		}
	}
	~ProcessFactory3() {
		if (strateprocessing) delete strateprocessing;
	}
	virtual void FactoryInterface();
};
