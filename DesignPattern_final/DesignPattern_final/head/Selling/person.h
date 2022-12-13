#pragma once
//我们用中介者模式来模拟并管理批发商和消费者之间的关系
#include<iostream>
using namespace std;
class Person;
class Mediator {
public:
	virtual void setHost(Person* p) = 0;
	virtual void setClient(Person* p) = 0;
	virtual void sendMsg(Person* p, string msg) {};
};

class Person {
public:
	virtual void setMediator(Mediator* mediator) {};
	virtual void sendMessage(string msg) = 0;
	virtual void getMessage(string msg) {};
protected:
	Mediator* m_mediator;
};

class TradeMediator :public Mediator
{
public:
	void setHost(Person* p);
	void setClient(Person* p);
	void sendMsg(Person* p, string msg);

private:
	Person* m_host;
	Person* m_client;
};

class Wholesaler :public Person
{
public:
	void setMediator(Mediator* mediator);
	void sendMessage(string msg);
	void getMessage(string msg);
};

class Consumer :public Person
{
public:
	void setMediator(Mediator* mediator);
	void sendMessage(string msg);
	void getMessage(string msg);
};