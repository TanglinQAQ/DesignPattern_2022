#include"Center factory.h"

void ZhangFamily::buy_sheep(int n) {
	cout << "����" << n << "ͷ�żҵ���" << endl;
}
void ZhangFamily::buy_cattle(int n)
{
	cout << "����" << n << "ͷ�żҵ�ţ" << endl;
}
void ZhangFamily::buy_chicken(int n) {
	cout << "����" << n << "ͷ�żҵļ�" << endl;
}

void WangFamily::buy_sheep(int n) {
	cout << "����" << n << "ͷ���ҵ���" << endl;
}
void WangFamily::buy_cattle(int n)
{
	cout << "����" << n << "ͷ���ҵ�ţ" << endl;
}
void WangFamily::buy_chicken(int n) {
	cout << "����" << n << "ͷ���ҵļ�" << endl;
}

void ChenFamily::buy_sheep(int n) {
	cout << "����" << n << "ͷ�¼ҵ���" << endl;
}
void ChenFamily::buy_cattle(int n)
{
	cout << "����" << n << "ͷ�¼ҵ�ţ" << endl;
}
void ChenFamily::buy_chicken(int n) {
	cout << "����" << n << "ͷ�¼ҵļ�" << endl;
}

void Sale_factory::Buy() {
	cout << "��Ҫ���������(0)���Ǽ�(1)����ţ(2)" << endl;
	int option, number;
	int n;
	cin >> option;
	cout << "������Ҫ�������" << endl;
	cin >> number;
	srand((unsigned int)time(0));
	if (option == 0) {
		n = rand() % number;
		number -= n;
		sales->BuyZhangSheep(n);
		n = rand() % number;
		number -= n;
		sales->BuyWangSheep(n);
		sales->BuyChenSheep(number);
	}
	else if (option == 1) {
		n = rand() % number;
		number -= n;
		sales->BuyZhangCattle(n);
		n = rand() % number;
		number -= n;
		sales->BuyWangCattle(n);
		sales->BuyChenCattle(number);
	}
	else if (option == 2) {
		n = rand() % number;
		number -= n;
		sales->BuyZhangChicken(n);
		n = rand() % number;
		number -= n;
		sales->BuyWangChicken(n);
		sales->BuyChenChicken(number);
	}
	else cout << "��ʱ���ṩ�����Ķ������" << endl;
}