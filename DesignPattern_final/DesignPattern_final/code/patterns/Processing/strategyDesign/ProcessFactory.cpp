#include<iostream>
#include "../../../../head/Processing/strategyDesign.h"
using namespace std;

//����ӹ�
void ProcessFactory3::FactoryInterface() {
	if (strateprocessing)
		strateprocessing->ProcessingInterface();
}

