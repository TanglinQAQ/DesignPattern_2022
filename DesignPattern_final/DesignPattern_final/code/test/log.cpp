#include"../../head/Managing/logManager.h"

void CommandManage() {
    cout << "�����ǻ��Ա����������ۺ���Ҫ���м��ˡ�" << endl << endl;
    Command* c = new ChangeBalance();
    Receiver* r = new Receiver();
    c->setReceiver(r);

    Invoker i;
    i.setCommand(c);
    i.Notify();

    delete r;
    delete c;
}