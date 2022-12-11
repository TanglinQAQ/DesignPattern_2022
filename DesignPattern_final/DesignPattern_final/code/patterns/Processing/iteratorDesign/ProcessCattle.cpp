#include<iostream>
#include "../../../../head/DAO/Data.h"
#include"../../../../head/Processing/iteratorDesign.h"

using namespace std;
//具体加工类
AnimalIterator* ProcessCattle::createIterator() {
	return new CattleIterator(cattles);
}
void ProcessCattle::addItem(AnimalProcess cattle) {
	cattles.push_back(cattle);
}