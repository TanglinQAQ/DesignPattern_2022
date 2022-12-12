#include <iostream>
#include "../../head/Processing/SubscribePattern.h"
using namespace std;

void SubscribePattern_Client()
{
	cout << "********" << "开始创建消息订阅中心" << "********" << endl;
	genMessage notifier1;
	getMessage man1;
	getMessage man2;
	getMessage man3;

	notifier1.loadReceiver(&man1);
	notifier1.loadReceiver(&man2);
	notifier1.loadReceiver(&man3);
	cout << "\n# 使用发布者-订阅模式：发布消息";
	cout << "\n# 使用发布者-订阅模式：订阅消息\n";
	notifier1.sendToAllRecv("今天加工厂完工");
	notifier1.sendToAllRecv("加工厂今天没有特别的事情发生");
}