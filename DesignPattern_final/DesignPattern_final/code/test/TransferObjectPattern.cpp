#include <iostream>
#include "../../head/Processing/TransferObject.h"
using namespace std;

void transferBojectPattern_Client()
{
	cout << "\n# 使用传输对象模式\n";
	cout << "********" << "现在获得所有加工对象" << "********" << endl ;
	ProcessFactory4* p = new ProcessFactory4();
	vector<Cattle2*> cattles=p->getAllCattle();
	cout << "********" << "得到所有的加工对象" << "********" << endl;
	for (vector<Cattle2*>::iterator it = cattles.begin(); it != cattles.end(); ++it) {
		cout<<"cattle  "<<(*it)->getnum()<<endl;
	}
	p->deleteCattle(0);
	cout << "********" << "已删除序号为0的加工牛" << "********" << endl;
	cout << "********" << "得到特定加工对象" << "********" << endl;
	Cattle2* cattle=p->getCattle(1);
	cout << "得到的cattle序号为:" << cattle->getnum()<<endl;
}