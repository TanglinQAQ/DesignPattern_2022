#include "../../head/Selling/person.h"

void MediatorManage()
{
    cout << "【我是加盟的中间商，在加工厂和顾客之间传递信息】" << endl << endl;
    cout << "# 使用中介者模式" << endl;
    TradeMediator* mediator = new TradeMediator();
    Wholesaler* host = new Wholesaler();
    host->setMediator(mediator);
    Consumer* client = new Consumer();
    client->setMediator(mediator);
    mediator->setClient(client);
    mediator->setHost(host);
    client->sendMessage("我要买20只烤鸡");
    host->sendMessage("这里生产了10盒卤猪肉");
}