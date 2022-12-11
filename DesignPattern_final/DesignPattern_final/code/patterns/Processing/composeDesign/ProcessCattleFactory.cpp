#include<iostream>
#include <vector>
#include"../../../../head/Processing/composeDesign.h"

using namespace std;

void ProcessCattleFactory::Add(ProcessFactory* com) {
	vectorcom.push_back(com);
}

void ProcessCattleFactory::Remove(ProcessFactory* com) {
	for (vector<ProcessFactory*>::iterator it = vectorcom.begin(); it != vectorcom.end(); ++it) {
		if ((*it)->strcom == com->strcom) {
			if (*it != NULL) {
				delete* it;
				*it = NULL;
			}
			vectorcom.erase(it);
			break;
		}
	}
}

ProcessFactory* ProcessCattleFactory::GetChild(int index) {
	if (index >= vectorcom.size()) //index从0开始
		return NULL;
	return vectorcom[index];
}

void ProcessCattleFactory::print() {
	cout << "现在负责加工牛的车间的分车间有：" << endl;
	for (vector<ProcessFactory*>::iterator it = vectorcom.begin(); it != vectorcom.end(); ++it) {
		cout << (*it)->strcom << endl;
	}
}

void ProcessCattleFactory::processing() {
	for (vector<ProcessFactory*>::iterator it = vectorcom.begin(); it != vectorcom.end(); ++it) {
		(*it)->processing();
	}
}
