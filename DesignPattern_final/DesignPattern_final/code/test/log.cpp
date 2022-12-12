#include"../../head/Managing/logManager.h"

void CommandManage() {
    cout << "【我是会计员，在完成销售后我要进行记账】" << endl << endl;
    Command* c = new ChangeBalance();
    Receiver* r = new Receiver();
    c->setReceiver(r);

    Invoker i;
    i.setCommand(c);
    i.Notify();

    delete r;
    delete c;
}