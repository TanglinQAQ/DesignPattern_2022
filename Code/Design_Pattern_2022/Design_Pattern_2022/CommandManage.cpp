#include"LogManager.h"

void CommandManage() {
    Command* c = new ChangeBalance();
    Receiver* r = new Receiver();
    c->setReceiver(r);

    Invoker i;
    i.setCommand(c);
    i.Notify();

    delete r;
    delete c;
}