#pragma once
#include<iostream>
#include<vector>

using namespace std;
class Memento {
	friend class Originator;
	friend class CareTaker;
	int number;
	Memento(int number) {
		this->number = number;
	}
	int GetNumber();
};
class Originator {
	friend void factory();
	int number;
	void setnumber(int number) {
		this->number = number;
		cout << "目前工厂里的动物总数是:" << this->number << endl;;
	}
	int getnumber() {
		return this->number;
	}
	Memento saveNumberToMemento() { 
		return *(new Memento(this->number));
	}
	void getNumberFromMemento(Memento Memento) {
		number = Memento.GetNumber();
	}
};
class CareTaker{
	friend void factory();
	vector<Memento>* mementoVector;
	CareTaker() {
		mementoVector = new vector<Memento>;
	}
	void add(Memento meme);
	Memento get(int n);
	Memento RollBack();
};