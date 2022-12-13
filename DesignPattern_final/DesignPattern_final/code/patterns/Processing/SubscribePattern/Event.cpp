
#include<iostream>
#include "../../../../head/Processing/SubscribePattern.h"
using namespace std;
notifier::notifier()
{

}

notifier::~notifier()
{

}

void notifier::loadReceiver(receiver* pRecv)
{
    observerList.push_back(pRecv);
}

void notifier::sendToAllRecv(string message)
{
    std::vector<receiver*>::iterator it = observerList.begin();
    for (; it != observerList.end(); it++)
    {
        (*it)->recvMessage(message);
    }
}