#include<iostream>
#include"iteratorDesign.h"

using namespace std;
//����ӹ���
AnimalIterator* ProcessCattle::createIterator() {
	return new CattleIterator(cattles);
}
void ProcessCattle::addItem(AnimalProcess cattle) {
	cattles.push_back(cattle);
}