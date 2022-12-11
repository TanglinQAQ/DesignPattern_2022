#include "../../head/Processing/ChainOfResponsibility.h"

void ChainOfResponsibility()
{
	cout << "---开始测试责任链模式---" << std::endl;
	cout << "请输入需要处理的养殖类型：" << endl;
	cout << "1：牛（cattle）" << endl;
	cout << "2：鸡（chicken）" << endl;
	cout << "3：猪（pig）" << endl;
	cout << "其他：牛（cattle）" << endl;
	int op; cin >> op;
	Farming_Type type;
	switch (op)
	{
	case 1:
		type = Farming_Type::cattle;
		break;
	case 2:
		type = Farming_Type::chicken;
		break;
	case 3:
		type = Farming_Type::pig;
		break;
	default:
		type = Farming_Type::cattle;
		break;
	}
	cout << "---开始处理---" << endl;

	// 创建责任链
	Chain chain;

	// 创建节点
	HarvestingNode harvesting;
	ProcessingNode processing;
	SellingNode selling;

	// 将节点加入责任链
	chain.add(&harvesting);
	chain.add(&processing);
	chain.add(&selling);

	// 遍历链中的所有节点并执行handle函数
	chain.start(type);

	cout << "---处理结束---" << endl;

	return;
}