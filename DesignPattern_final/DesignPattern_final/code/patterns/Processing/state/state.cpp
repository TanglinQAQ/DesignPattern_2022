/*
   State.h -- defination
*/

#include "../../../../head/Processing/State.h"
#include <iostream>
using namespace std;

/*
   ������Pre_State::handle
   ������Context& c
   ���ܣ�Stateģʽ��ũ��Ʒ״̬ΪPre_Stateʱ����һ��Context��������ũ��Ʒ״̬����
		����������ũ��Ʒ״̬��Pre_State��ΪAfter_State
*/
void  Pre_State::handle(Context& c)
{
	After_State* a = new After_State();
	cout << "# ʹ��״̬ģʽ" << endl;
	cout << "ũ��Ʒ�ӹ���ɡ�" << endl
		<< "ũ��Ʒ״̬Ϊ " << a->getState() << "��" << endl;
	// ��ũ��Ʒ��״̬��Pre_State��ΪAfter_State
	c.changeState(a);
}

/*
   ������After_State::handle
   ������Context& c
   ���ܣ�Stateģʽ��ũ��Ʒ״̬ΪAfter_Stateʱ����һ��Context��������ũ��Ʒ��ǰ״̬����
		����������ũ��Ʒ״̬��After_State��ΪStore_State
*/
void After_State::handle(Context& c)
{
	Store_State* s = new Store_State();
	cout << "# ʹ��״̬ģʽ" << endl;
	cout << "ũ��Ʒ�����ɡ�" << endl
		<< "ũ��Ʒ״̬Ϊ " << s->getState() << "��" << endl;
	// ��ũ��Ʒ��״̬��After_State��ΪStore_State
	c.changeState(s);
}

/*
   ������Store_State::handle
   ������Context& c
   ���ܣ�Stateģʽ���豸״̬ΪStore_Stateʱ����һ��Context��������ũ��Ʒ��ǰ״̬����
		����������ũ��Ʒ״̬��Store_State��ΪTrans_State
*/
void Store_State::handle(Context& c)
{
	Trans_State* t = new Trans_State();
	cout << "# ʹ��״̬ģʽ" << endl;
	cout << "ũ��Ʒ������ɡ�" << endl
		<< "ũ��Ʒ״̬Ϊ " << t->getState() << "��" << endl;
	// ��ũ��Ʒ��״̬��Store_State��ΪTrans_State
	c.changeState(t);
}

/*
   ������Trans_State::handle
   ������Context& c
   ���ܣ�Stateģʽ���豸״̬ΪTrans_Stateʱ����һ��Context��������ũ��Ʒ��ǰ״̬����
		����������ũ��Ʒ״̬��Trans_State��ΪFinish_State
*/
void Trans_State::handle(Context& c)
{
	Finish_State* f = new Finish_State();
	cout << "# ʹ��״̬ģʽ" << endl;
	cout << "ũ��Ʒ������ɡ�" << endl
		<< "ũ��Ʒ״̬Ϊ " << f->getState() << "��" << endl;
	// ��ũ��Ʒ��״̬��Trans_State��ΪFinish_State
	c.changeState(f);
}

/*
   ������Trans_State::handle
   ������Context& c
   ���ܣ�Stateģʽ���豸״̬ΪTrans_Stateʱ����һ��Context��������ũ��Ʒ��ǰ״̬����
		����������ũ��Ʒ״̬��Trans_State��ΪFinish_State
*/
void Finish_State::handle(Context& c)
{
	cout << "# ʹ��״̬ģʽ" << endl;
	cout << "��ǰ״̬�޿��ò�����" << endl;
}

Context::Context()
{
	m_state = new Pre_State();
}

// ��������
Context::~Context()
{
	delete m_state;
}

/*
   ������Context::showState
   ������State* st
   ���ܣ�չʾũ��Ʒ״̬
*/
void Context::showState()
{
	cout << "# ʹ��״̬ģʽ" << endl;
	cout << "��ǰũ��Ʒ״̬Ϊ" << m_state->getState() << endl;
}

/*
   ������Context::changeState
   ������State* st
   ���ܣ���ũ��Ʒ״̬��Ϊst
*/
void Context::changeState(State* st)
{
	m_state = st;
}

/*
   ������Context::request
   ������
   ���ܣ�����State�е�handle������ũ��Ʒ״̬���д���
*/
void Context::request()
{
	m_state->handle(*this);
}