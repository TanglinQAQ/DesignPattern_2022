#pragma once
#include "../DAO/Data.h"

using namespace DATA;
/*类描述：抽象策略类*/
class Strategy {
public:
	virtual void ProcessingInterface() = 0;
};

/*类描述：加工鸡的方法类*/
class ProcessingChicken : public Strategy {
public:
	void ProcessingInterface();
	~ProcessingChicken() {};
};

/*类描述：加工牛的方法类*/
class ProcessingCattle : public Strategy {
public:
	void ProcessingInterface();
	~ProcessingCattle() {};
};

/*类描述：加工猪的方法类*/
class ProcessingPig : public Strategy {
public:
	void ProcessingInterface();
	~ProcessingPig() {};
};

/*类描述：抽象工厂类*/
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
