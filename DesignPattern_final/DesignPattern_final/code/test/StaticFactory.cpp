#include <iostream>
#include"../../head/Managing/ShowProduct.h"

using namespace std;

void staticfactory() {
    cout << "# ʹ��static factory ��̬����ģʽ#" << endl;
    cout << "չʾ����һ��Ϊ�̶���A��B���ֲ�Ʒ,��������չʾ" << endl;
    productA pa;
    productB pb;
    pa.show();
    cout << endl;
    pb.show();

}