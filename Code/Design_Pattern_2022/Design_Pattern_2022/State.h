/*
  实现模式：状态模式
*/
#ifndef CODE_STATE_H
#define CODE_STATE_H
#include <string>
#include<vector>

class Context;
class Visitor;
//状态类
class State
{
protected:
	std::string state;
	State()
	{

	};
public:
	// 对不同的状态进行不同的处理
	virtual void handle(Context& c) = 0;

	~State() {};
	std::string getState()
	{
		return state;
	}
};
//加工前状态
class Pre_State : public State
{
public:
	virtual void handle(Context& c);
	Pre_State()
	{
		state = "加工前";
	};
	~Pre_State() {};
};
//加工后状态
class After_State : public State
{
public:
	virtual void handle(Context& c);
	After_State()
	{
		state = "加工后";
	};
	~After_State() {};
};
//仓库中状态
class Store_State : public State
{
public:
	virtual void handle(Context& c);
	Store_State()
	{
		state = "仓库中";
	};
	~Store_State() {};
};
//运输中状态
class Trans_State : public State
{
public:
	virtual void handle(Context& c);
	Trans_State()
	{
		state = "运输中";
	};
	~Trans_State() {};
};
//已完成状态
class Finish_State : public State
{
public:
	virtual void handle(Context& c);
	Finish_State()
	{
		state = "已完成";
	};
	~Finish_State() {};
};

class State;
//与状态模式交互的类
class Context
{
private:
	State* m_state;

public:
	Context();
	~Context();

	void showState();
	void changeState(State* st);
	void request();
};

#endif

