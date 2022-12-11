#include<iostream>
#include "../../../../head/Farming/breedBuilder.h"

using namespace std;

void cattleBuilderImpl::feed() {
    cout << "# 使用Builder模式：喂养牛" << endl;
    cout << "喂养【牛】：喂食新鲜牧草" << endl;
}

void cattleBuilderImpl::graze() {
    cout << "# 使用Builder模式：放牧牛" << endl;
    cout << "放牧【牛】：河边放养" << endl;
}

void cattleBuilderImpl::keephealthy() {
    cout << "# 使用Builder模式：保持牛健康" << endl;
    cout << "保持健康【牛】：接种牛疫苗" << endl;
}
