#include<iostream>
#include"iteratorDesign.h"

using namespace std;
//具体迭代器类
void CattleIterator::setNumber(int i) {
	currentindex = i;
}

void CattleIterator::next() {
	if(currentindex<animals.size())
	currentindex++;
}

void CattleIterator::previous() {
	if (currentindex > 0) {
		currentindex--;
	}
}

AnimalProcess CattleIterator::currentNumber() {
	return animals[currentindex];
}

bool CattleIterator::isLast() {
	return currentindex == animals.size();
}

bool CattleIterator::isFirst() {
	return currentindex==0;
}