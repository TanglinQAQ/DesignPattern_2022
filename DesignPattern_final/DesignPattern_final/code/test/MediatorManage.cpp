#include "../../head/Selling/person.h"

void MediatorManage()
{
    cout << "�����Ǽ��˵��м��̣��ڼӹ����͹˿�֮�䴫����Ϣ��" << endl << endl;
    cout << "# ʹ���н���ģʽ" << endl;
    TradeMediator* mediator = new TradeMediator();
    Wholesaler* host = new Wholesaler();
    host->setMediator(mediator);
    Consumer* client = new Consumer();
    client->setMediator(mediator);
    mediator->setClient(client);
    mediator->setHost(host);
    client->sendMessage("��Ҫ��20ֻ����");
    host->sendMessage("����������10��±����");
}