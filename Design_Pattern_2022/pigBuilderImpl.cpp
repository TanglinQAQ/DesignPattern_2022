#include<iostream>
#include"breedBuilder.h"

using namespace std;

void pigBuilderImpl::feed() {
    cout << "# 使用Builder模式：喂养牛" << endl;
    cout << "喂养【猪】：喂食猪饲料" << endl;
}

void pigBuilderImpl::graze() {
    cout << "# 使用Builder模式：放牧猪" << endl;
    cout << "放牧【猪】：猪圈养就可以啦哈哈" << endl;
}


void pigBuilderImpl::keephealthy() {
    cout << "# 使用Builder模式：保持猪健康" << endl;
    cout << "保持健康【猪】：定期洗澡" << endl;
}