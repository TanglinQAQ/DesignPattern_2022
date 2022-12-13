#include <iostream>
#include"../../head/Managing/ShowProduct.h"

using namespace std;

void staticfactory() {
    cout << "# 使用static factory 静态工厂模式#" << endl;
    cout << "展示环节一般为固定的A和B两种产品,下面依次展示" << endl;
    productA pa;
    productB pb;
    pa.show();
    cout << endl;
    pb.show();

}