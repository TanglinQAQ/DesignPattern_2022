#include<iostream>
#include"Memo .h"

int Memento::GetNumber() {
	return this->number;
}
void CareTaker::add(Memento meme) {
	this->mementoVector->push_back(meme);
}

Memento CareTaker::get(int n) {
	return this->mementoVector->at(n);
}

Memento CareTaker::RollBack() {
	cout << "»Ø¹öÊý¾Ý:" << endl;
	Memento meme = *(this->mementoVector->end()-2);
	//this->mementoVector->erase(this->mementoVector->end() - 2);
	this->mementoVector->pop_back();
	return meme;
}