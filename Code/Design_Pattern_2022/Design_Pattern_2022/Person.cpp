#include"Person.h"
#include<iostream>

using namespace std;

void TradeMediator::setHost(Person* p) {
	m_host = p;
}

void TradeMediator::setClient(Person* p) {
	m_client = p;
}

void TradeMediator::sendMsg(Person* p, string msg) {
    if (p == m_host) {
        m_client->getMessage();
    }
    else {
        m_host->getMessage();
    }
}

void Wholesaler::setMediator(Mediator* mediator) {
    m_mediator = mediator;
}

void Wholesaler::sendMessage(string msg) {
    m_mediator->sendMsg(this, msg);
}

void Wholesaler::getMessage(string msg) {
    cout << "批发商收到消息：" << endl;
    cout << msg << endl;
}

void Consumer::setMediator(Mediator* mediator) {
    m_mediator = mediator;
}

void Consumer::sendMessage(string msg) {
    m_mediator->sendMsg(this, msg);
}

void Consumer::getMessage(string msg) {
    cout << "消费者收到消息！" << endl;
    cout << msg << endl;
}