#include<iostream>
#include"iteratorDesign.h"

using namespace std;
//����ӹ���
AnimalIterator* ProcessChicken::createIterator() {
	return new ChickenIterator(chicken);
}
void ProcessChicken::addItem(AnimalProcess chick) {
	chicken.push_back(chick);
}