#include<iostream>
#include"../../../../head/Farming/farmHouseConstructTemplate.h"

using namespace std;

//实现建房子的通用三个步骤的函数
void houseConstructor::layfoundation() {
    cout << "首先需要打好地基" << endl;
}

void houseConstructor::laywall() {
    cout << "现在需要搭好墙体" << endl;
}

void houseConstructor::buildroof() {
    cout << "现在需要搭好顶棚" << endl;
}


//实现三种房子不同的那一个步骤
void hogpenConstructorImpl::anotherstep() {
    cout << "猪圈需要放入泥巴" << endl;
}

void henhouseConstructorImpl::anotherstep() {
    cout << "鸡舍需要安装窗户" << endl;
}

void cowshedConstructorImpl::anotherstep() {
    cout << "牛棚需要放置围栏" << endl;
}