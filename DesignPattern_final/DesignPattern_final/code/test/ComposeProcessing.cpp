#include <iostream>
#include "../../head/Processing/composeDesign.h"
using namespace std;

void ComposeProcessing_Client()
{
	cout << "我是车间主任，现在开始分部位对牲畜进行加工" << endl;
	//创建加工厂对象
	cout << "********" << "开始加工牛的工序" << "********" << endl;
	ProcessFactory* pNode = new ProcessCattleFactory("牛工厂加工总部");
	cout << "********" << "开始加工牛的分工工序" << "********" << endl;
	cout << "\n# 使用组合模式：加工牛头";
	ProcessFactory* pNode1 = new ComFactory("加工牛头分车间");
	cout << "\n# 使用组合模式：加工牛尾";
	ProcessFactory* pNode2 = new ComFactory("加工牛尾分车间");
	cout << "\n# 使用组合模式：牛身\n";
	ProcessFactory* pNode3 = new ComFactory("加工牛身分车间");
	pNode->Add(pNode1);
	pNode->Add(pNode2);
	pNode->Add(pNode3);
	pNode->print();
	cout << "********" << "牛头处理完毕" << "********" << endl;
	cout << "********" << "关闭牛头分车间" << "********" << endl;
	pNode->Remove(pNode1);
	cout << "********" << "已经关闭牛头分车间" << "********" << endl;
	cout << "********" << "其余的分车间正在加工" << "********" << endl;
	pNode->processing();
}