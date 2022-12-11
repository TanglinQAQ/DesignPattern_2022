#include<iostream>
#include "../../../../head/Processing/strategyDesign.h"
using namespace std;

//具体加工
void ProcessFactory3::FactoryInterface() {
	if (strateprocessing)
		strateprocessing->ProcessingInterface();
}

