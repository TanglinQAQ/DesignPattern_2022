#include<iostream>
#include "../../../../head/DAO/Data.h"
#include"../../../../head/Processing/iteratorDesign.h"

using namespace std;
//具体加工类
AnimalIterator* ProcessChicken::createIterator() {
	return new ChickenIterator(chicken);
}
void ProcessChicken::addItem(AnimalProcess chick) {
	chicken.push_back(chick);
}