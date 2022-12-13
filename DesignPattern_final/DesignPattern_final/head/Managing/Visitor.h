/*
  ʵ��ģʽ��������ģʽ
*/
#ifndef CODE_STATE_H
#define CODE_STATE_H
#include <string>
#include<vector>
using namespace std;

class Apple;
class Chicken;
//��������
class Visitor {
public:
	void setName(string name);
	virtual void visit(Apple* apple) = 0;
	virtual void visit(Chicken* chicken) = 0;
protected:
	string name;
};

//�����������Customer���˿��ࣩ 
class Customer : public Visitor {
public:
	virtual void visit(Apple* apple);
	virtual void visit(Chicken* chicken);
};

//�����������Manager��ũ���������ࣩ 
class Farm_manager : public Visitor {
public:
	virtual void visit(Apple* apple);
	virtual void visit(Chicken* chicken);
};

//����Ԫ����Product����Ʒ�ࣩ
class Product {
public:
	virtual void accept(Visitor* visitor) = 0;
};

//����Ԫ����Apple��ƻ���ࣩ 
class Apple : public Product {
public:
	void accept(Visitor* visitor) {
		visitor->visit(this);
	}
};

class Chicken : public Product {
public:
	void accept(Visitor* visitor) {
		visitor->visit(this);
	}
};

#endif