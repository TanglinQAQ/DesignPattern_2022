#include"../../../../head/Processing/pack.h"
#include<iostream>

VegetablePackage* VegetablePackage::Clone() {
	return new VegetablePackage(*this);
}

MeatPackage* MeatPackage::Clone() {
	return new MeatPackage(*this);
}