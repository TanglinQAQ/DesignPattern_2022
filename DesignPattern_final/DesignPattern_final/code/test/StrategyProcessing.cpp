#include <iostream>
#include "../../head/Processing/strategyDesign.h"
#include "../../head/DAO/Data.h"
using namespace std;
using namespace DATA;

void StrategyProcessing_Client()
{
	cout << "�����Ǽӹ��������Σ����������ƶ��ӹ��ķ�����" << endl << endl;
	cout << "# ʹ�ò���ģʽ\n";
	//����ţ�ӹ�������
	cout << "********" << "�ӹ�ţ��������" << "********" << endl;
	ProcessFactory3* processfactory1 = new ProcessFactory3(Cattleprocessing);
	processfactory1->FactoryInterface();
	//�������ӹ�������
	cout << "********" << "�ӹ�����������" << "********" << endl;
	ProcessFactory3* processfactory2 = new ProcessFactory3(Chickenprocessing);
	processfactory2->FactoryInterface();
	//������ӹ�������
	cout << "********" << "�ӹ�����������" << "********" << endl;
	ProcessFactory3* processfactory3 = new ProcessFactory3(Pigprocessing);
	processfactory3->FactoryInterface();
	//
}