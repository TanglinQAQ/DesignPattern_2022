#include<iostream>
#include"Center factory.h"
using namespace std;

void Facade() {
	Sale_factory* factory = new Sale_factory;
	factory->Buy();
}