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
    client->sendMessage("��Ҫ��100ֻ");
    host->sendMessage("�����м�300ֻҪ����");
}