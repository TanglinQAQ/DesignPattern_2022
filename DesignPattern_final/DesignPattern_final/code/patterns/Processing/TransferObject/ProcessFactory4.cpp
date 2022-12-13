#pragma once
#include "../../../../head/Processing/TransferObject.h" 

vector<Cattle2*> ProcessFactory4::getAllCattle()
{
	return cattles;
}

void ProcessFactory4::deleteCattle(int num)
{
	for (vector<Cattle2*>::iterator it = cattles.begin(); it != cattles.end(); ++it) {
		if ((*it)->getnum() ==num) {
			if (*it != NULL) {
				delete* it;
				*it = NULL;
			}
			cattles.erase(it);
			break;
		}
	}
}

Cattle2*  ProcessFactory4::getCattle(int num)
{
	for (vector<Cattle2*>::iterator it = cattles.begin(); it != cattles.end(); ++it) {
		if ((*it)->getnum() == num) {
			if (*it != NULL) {
				return (*it);
			}
			break;
		}
	}
}
