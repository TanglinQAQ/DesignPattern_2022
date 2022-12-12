#pragma once
#include "../DAO/Data.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class receiver
{
public:
    receiver();
    ~receiver();
    virtual void recvMessage(string message) = 0;

};

class notifier
{
public:
    notifier();
    virtual ~notifier();

    void sendToAllRecv(string message);
    void loadReceiver(receiver* pRecv);

private:
    std::vector<receiver*> observerList;
};

class genMessage :public notifier
{
public:
    genMessage();
    ~genMessage();
    void throwMessage(string str);
};

class getMessage :public receiver
{
public:
    getMessage();
    ~getMessage();

    void recvMessage(string message);

};
