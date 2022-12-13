#include"LogManager.h"

void ChangeBalance::setReceiver(Receiver* r) {
    receiver = r;
}

void ChangeBalance::Excute() {
    cout << "ÐÞ¸ÄÓà¶î" << endl;
    receiver->Action();
}

void Invoker::setCommand(Command* c) {
    commands.push_back(c);
}

void Invoker::Notify() {
    for (auto c = commands.begin(); c != commands.end(); c++) {
        (*c)->Excute();
    }
}