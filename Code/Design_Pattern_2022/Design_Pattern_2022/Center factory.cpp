#include"Center factory.h"

void ZhangFamily::buy_sheep(int n) {
	cout << "买了" << n << "头张家的羊" << endl;
}
void ZhangFamily::buy_cattle(int n)
{
	cout << "买了" << n << "头张家的牛" << endl;
}
void ZhangFamily::buy_chicken(int n) {
	cout << "买了" << n << "头张家的鸡" << endl;
}

void WangFamily::buy_sheep(int n) {
	cout << "买了" << n << "头王家的羊" << endl;
}
void WangFamily::buy_cattle(int n)
{
	cout << "买了" << n << "头王家的牛" << endl;
}
void WangFamily::buy_chicken(int n) {
	cout << "买了" << n << "头王家的鸡" << endl;
}

void ChenFamily::buy_sheep(int n) {
	cout << "买了" << n << "头陈家的羊" << endl;
}
void ChenFamily::buy_cattle(int n)
{
	cout << "买了" << n << "头陈家的牛" << endl;
}
void ChenFamily::buy_chicken(int n) {
	cout << "买了" << n << "头陈家的鸡" << endl;
}

void Sale_factory::Buy() {
	cout << "你要购买的是羊(0)还是鸡(1)还是牛(2)" << endl;
	int option, number;
	int n;
	cin >> option;
	cout << "输入你要买的数量" << endl;
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
	else cout << "暂时不提供其他的动物出售" << endl;
}