#include<iostream>
#include"iteratorDesign.h"

using namespace std;
//具体迭代器类
void ChickenIterator::setNumber(int i) {
	currentindex = i;
}

void ChickenIterator::next() {
	if (currentindex < animals.size())
		currentindex++;
}

void ChickenIterator::previous() {
	if (currentindex > 0) {
		currentindex--;
	}
}


AnimalProcess ChickenIterator::currentNumber() {
	return animals[currentindex];
}

bool ChickenIterator::isLast() {
	return currentindex == animals.size();
}

bool ChickenIterator::isFirst() {
	return currentindex == 0;
}