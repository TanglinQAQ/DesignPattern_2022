/*�����������ڵ��ø����ܵĲ���ģ��*/
#include <iostream>
#include "../head/DAO/Data.h"
#include "../head/Test/test.h"
using namespace std;
using namespace DATA;

Database Database::instance;//����ģʽ

int main()
{
	Database DB = DB.get_DB();
	int oper = -1;
	while (1) {
		cout << "����R������..." << endl;
		while (1) {
			char cont;
			cont = getchar();
			if (cont == 'R' || cont == 'r')
				break;
		}
		oper++;
		switch (oper) {
		case 1:
			//�ӹ����ϰ�Ҫ�˽����ֳ������ֳ����
			templatetest();
			break;
		case 2:
			//�ӹ����ϰ�Ҫ�˽����ֳ������ֳ����
			buildertest();
			break;
		case 3:
			//�ӹ����ϰ尲�Ųɹ�Ա����
			Facade();
			break;
		case 4:
			//�ɹ�Ա�鿴����ֳ���Ŀ�棬׼���¶���
			BridgeAndFly();
			break;
		case 5:
			//�ɹ�Աȥ����ֳ������
			FarmStocking_Client();
			break;
		case 6:
			//�ӹ�ǰ��ȷ���üӹ��ķ���
			StrategyProcessing_Client();
			break;
		case 7:
			//ȷ�ϼӹ�������ֳ����������д���
			ComposeProcessing_Client();
			break;
		case 8:
			//ԭ���Ǽӹ�ţ�ĳ��䣬���������ӹ���
			AdapterProcessing_Client();
			break;
		case 9:
			//��ˮ��ʽ�ӹ����е�ţ�ͼ�
			IteratorProcessing_Client(DB);//������Ҫ�õ����ݿ�����
			break;
		case 10:
			//�ӹ���ɺ����Ʒ���д��
			Prototype_Manage();
			break;
		case 11:
			//��Ʒ����ú�˿Ϳ��������ӹ�����ȡ
			Visitor_manage();
			break;
		case 12:
			//Ҳ���Լӹ�����������
			proxytest();
			break;
		case 13:
			//Ҳ�������м������ȥ����
			MediatorManage();
			break;
		case 14:
			//���۹������ϰ�Ҫ��¼ԭ�����������
			factory();
			break;
		case 15:
			//�����β�Ʒ������ɺ���м���
			CommandManage();
			break;
		case 16:
			//Ԥ����ǰ��Ʒ���мۣ�������һ�ִε����۷���
			market();
			break;
		case 17:
			//�����ο����ӹ����ιۣ�չʾ��������������
			State_manage();
			break;
		case 18:
			//�����ο����ӹ����ιۣ�չʾĳһ��Ʒ�ľ�����������
			ChainOfResponsibility();
			break;
		default:
			break;
		}
		if (oper == 18) {
			cout << "���Խ���" << endl;
			break;
		}
	}
	return 0;
}