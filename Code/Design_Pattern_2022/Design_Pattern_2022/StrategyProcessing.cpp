#include <iostream>
#include "strategyDesign.h"
using namespace std;
using namespace DATA;

void StrategyProcessing_Client()
{
	cout << "# ʹ�ò���ģʽ\n";
	//����ţ�ӹ�������
	cout << "********" << "��ʼ����ţ�ӹ���" << "********" << endl;
	ProcessFactory3* processfactory1 = new ProcessFactory3(Cattleprocessing);
	processfactory1->FactoryInterface();
	//�������ӹ�������
	cout << "********" << "��ʼ�������ӹ���" << "********" << endl;
	ProcessFactory3* processfactory2 = new ProcessFactory3(Chickenprocessing);
	processfactory2->FactoryInterface();
	//������ӹ�������
	cout << "********" << "��ʼ������ӹ���" << "********" << endl;
	ProcessFactory3* processfactory3 = new ProcessFactory3(Pigprocessing);
	processfactory3->FactoryInterface();
	//
}