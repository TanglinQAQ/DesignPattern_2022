#include<iostream>
#include"breedBuilder.h"

using namespace std;

void chickenBuilderImpl::feed() {
    cout << "# 使用Builder模式：喂养鸡" << endl;
    cout << "喂养【鸡】：喂食鸡饲料" << endl;
}

void chickenBuilderImpl::graze() {
    cout << "# 使用Builder模式：放牧鸡" << endl;
    cout << "放牧【鸡】：在院子里逛逛吧" << endl;
}

void chickenBuilderImpl::keephealthy() {
    cout << "# 使用Builder模式：保持鸡健康" << endl;
    cout << "保持健康【鸡】：不要得禽流感" << endl;
}