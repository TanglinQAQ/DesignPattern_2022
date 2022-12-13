/*
   State.h -- defination
*/

#include "../../../../head/Processing/State.h"
#include <iostream>
using namespace std;

/*
   函数：Pre_State::handle
   参数：Context& c
   功能：State模式，农产品状态为Pre_State时接收一个Context参数，对农产品状态进行
		操作，并将农产品状态从Pre_State改为After_State
*/
void  Pre_State::handle(Context& c)
{
	After_State* a = new After_State();
	cout << "# 使用状态模式" << endl;
	cout << "农产品加工完成。" << endl
		<< "农产品状态为 " << a->getState() << "。" << endl;
	// 将农产品的状态从Pre_State改为After_State
	c.changeState(a);
}

/*
   函数：After_State::handle
   参数：Context& c
   功能：State模式，农产品状态为After_State时接收一个Context参数，对农产品当前状态进行
		操作，并将农产品状态从After_State改为Store_State
*/
void After_State::handle(Context& c)
{
	Store_State* s = new Store_State();
	cout << "# 使用状态模式" << endl;
	cout << "农产品入库完成。" << endl
		<< "农产品状态为 " << s->getState() << "。" << endl;
	// 将农产品的状态从After_State改为Store_State
	c.changeState(s);
}

/*
   函数：Store_State::handle
   参数：Context& c
   功能：State模式，设备状态为Store_State时接收一个Context参数，对农产品当前状态进行
		操作，并将农产品状态从Store_State改为Trans_State
*/
void Store_State::handle(Context& c)
{
	Trans_State* t = new Trans_State();
	cout << "# 使用状态模式" << endl;
	cout << "农产品发货完成。" << endl
		<< "农产品状态为 " << t->getState() << "。" << endl;
	// 将农产品的状态从Store_State改为Trans_State
	c.changeState(t);
}

/*
   函数：Trans_State::handle
   参数：Context& c
   功能：State模式，设备状态为Trans_State时接收一个Context参数，对农产品当前状态进行
		操作，并将农产品状态从Trans_State改为Finish_State
*/
void Trans_State::handle(Context& c)
{
	Finish_State* f = new Finish_State();
	cout << "# 使用状态模式" << endl;
	cout << "农产品运输完成。" << endl
		<< "农产品状态为 " << f->getState() << "。" << endl;
	// 将农产品的状态从Trans_State改为Finish_State
	c.changeState(f);
}

/*
   函数：Trans_State::handle
   参数：Context& c
   功能：State模式，设备状态为Trans_State时接收一个Context参数，对农产品当前状态进行
		操作，并将农产品状态从Trans_State改为Finish_State
*/
void Finish_State::handle(Context& c)
{
	cout << "# 使用状态模式" << endl;
	cout << "当前状态无可用操作。" << endl;
}

Context::Context()
{
	m_state = new Pre_State();
}

// 析构函数
Context::~Context()
{
	delete m_state;
}

/*
   函数：Context::showState
   参数：State* st
   功能：展示农产品状态
*/
void Context::showState()
{
	cout << "# 使用状态模式" << endl;
	cout << "当前农产品状态为" << m_state->getState() << endl;
}

/*
   函数：Context::changeState
   参数：State* st
   功能：将农产品状态改为st
*/
void Context::changeState(State* st)
{
	m_state = st;
}

/*
   函数：Context::request
   参数：
   功能：调用State中的handle方法对农产品状态进行处理
*/
void Context::request()
{
	m_state->handle(*this);
}