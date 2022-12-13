#pragma once
//ʹ������ģʽ��ģ�����ϵͳ
#include <iostream>
#include <list>
using namespace std;

class Receiver {
public:
    void Action() {
        cout << "ִ�м��˲���" << endl;
    }
};

class Command {
public:
    virtual void Excute() = 0;
    virtual void setReceiver(Receiver* r) = 0;
    virtual ~Command() {};
};

class ChangeBalance : public Command {
private:
    Receiver* receiver;
public:
    void setReceiver(Receiver* r);
    void Excute();
};

class Invoker {
private:
    list<Command* > commands;
public:
    void setCommand(Command* c);
    void Notify();
};