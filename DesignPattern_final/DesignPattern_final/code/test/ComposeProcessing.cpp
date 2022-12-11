#include <iostream>
#include "../../head/Processing/composeDesign.h"
using namespace std;

void ComposeProcessing_Client()
{
	//创建加工厂对象
	cout << "********" << "开始创建加工牛的工厂" << "********" << endl;
	ProcessFactory* pNode = new ProcessCattleFactory("牛工厂加工总部");
	cout << "********" << "开始创建加工牛的分工厂" << "********" << endl;
	cout << "\n# 使用组合模式：创建牛头分工厂";
	ProcessFactory* pNode1 = new ComFactory("加工牛头分工厂");
	cout << "\n# 使用组合模式：创建牛尾分工厂";
	ProcessFactory* pNode2 = new ComFactory("加工牛尾分工厂");
	cout << "\n# 使用组合模式：创建牛身分工厂\n";
	ProcessFactory* pNode3 = new ComFactory("加工牛身分工厂");
	pNode->Add(pNode1);
	pNode->Add(pNode2);
	pNode->Add(pNode3);
	pNode->print();
	cout << "********" << "结束创建工厂" << "********" << endl;
	cout << "********" << "正在删除牛头分工厂" << "********" << endl;
	pNode->Remove(pNode1);
	cout << "********" << "已经删除牛头分工厂" << "********" << endl;
	cout << "********" << "在剩余的分工厂加工" << "********" << endl;
	pNode->processing();
	cout << "********" << "结束分工厂创建的测试" << "********" << endl;
}