#include "../../head/Processing/ChainOfResponsibility.h"

void ChainOfResponsibility()
{
	cout << "---��ʼ����������ģʽ---" << std::endl;
	cout << "��������Ҫ�������ֳ���ͣ�" << endl;
	cout << "1��ţ��cattle��" << endl;
	cout << "2������chicken��" << endl;
	cout << "3����pig��" << endl;
	cout << "������ţ��cattle��" << endl;
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
	cout << "---��ʼ����---" << endl;

	// ����������
	Chain chain;

	// �����ڵ�
	HarvestingNode harvesting;
	ProcessingNode processing;
	SellingNode selling;

	// ���ڵ����������
	chain.add(&harvesting);
	chain.add(&processing);
	chain.add(&selling);

	// �������е����нڵ㲢ִ��handle����
	chain.start(type);

	cout << "---�������---" << endl;

	return;
}