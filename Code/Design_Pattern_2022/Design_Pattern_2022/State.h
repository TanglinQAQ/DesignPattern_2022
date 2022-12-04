/*
  ʵ��ģʽ��״̬ģʽ
*/
#ifndef CODE_STATE_H
#define CODE_STATE_H
#include <string>
#include<vector>

class Context;
class Visitor;
//״̬��
class State
{
protected:
	std::string state;
	State()
	{

	};
public:
	// �Բ�ͬ��״̬���в�ͬ�Ĵ���
	virtual void handle(Context& c) = 0;

	~State() {};
	std::string getState()
	{
		return state;
	}
};
//�ӹ�ǰ״̬
class Pre_State : public State
{
public:
	virtual void handle(Context& c);
	Pre_State()
	{
		state = "�ӹ�ǰ";
	};
	~Pre_State() {};
};
//�ӹ���״̬
class After_State : public State
{
public:
	virtual void handle(Context& c);
	After_State()
	{
		state = "�ӹ���";
	};
	~After_State() {};
};
//�ֿ���״̬
class Store_State : public State
{
public:
	virtual void handle(Context& c);
	Store_State()
	{
		state = "�ֿ���";
	};
	~Store_State() {};
};
//������״̬
class Trans_State : public State
{
public:
	virtual void handle(Context& c);
	Trans_State()
	{
		state = "������";
	};
	~Trans_State() {};
};
//�����״̬
class Finish_State : public State
{
public:
	virtual void handle(Context& c);
	Finish_State()
	{
		state = "�����";
	};
	~Finish_State() {};
};

class State;
//��״̬ģʽ��������
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

