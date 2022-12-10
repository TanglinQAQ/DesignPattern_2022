#include<iostream>

#include"farmHouseConstructTemplate.h"

using namespace std;

//实现建房子的通用三个步骤的函数
void houseConstructor::layfoundation() {
    cout << "1. 首先需要打好地基" << endl;
}

void houseConstructor::laywall() {
    cout << "2. 现在需要搭好墙体" << endl;
}

void houseConstructor::buildroof() {
    cout << "4. 现在需要搭好顶棚" << endl;
}


//实现三种房子不同的那一个步骤
void hogpenConstructorImpl::anotherstep() {
    cout << "3. 猪圈需要放入泥巴（特异性步骤）" << endl;
}

void henhouseConstructorImpl::anotherstep() {
    cout << "3. 鸡舍需要安装窗户（特异性步骤）" << endl;
}

void cowshedConstructorImpl::anotherstep() {
    cout << "3. 牛棚需要放置围栏（特异性步骤）" << endl;
}