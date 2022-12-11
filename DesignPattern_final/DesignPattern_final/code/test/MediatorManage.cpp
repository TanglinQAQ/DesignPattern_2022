#include "../../head/Selling/person.h"

void MediatorManage()
{
    TradeMediator* mediator = new TradeMediator();
    Wholesaler* host = new Wholesaler();
    host->setMediator(mediator);
    Consumer* client = new Consumer();
    client->setMediator(mediator);
    mediator->setClient(client);
    mediator->setHost(host);
    client->sendMessage("我要买鸡100只");
    host->sendMessage("这里有鸡300只要出售");
}