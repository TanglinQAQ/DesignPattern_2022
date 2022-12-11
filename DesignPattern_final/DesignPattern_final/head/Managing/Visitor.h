/*
  实现模式：访问者模式
*/
#ifndef CODE_STATE_H
#define CODE_STATE_H
#include <string>
#include<vector>
using namespace std;

class Apple;
class Chicken;
//访问者类
class Visitor {
public:
	void setName(string name);
	virtual void visit(Apple* apple) = 0;
	virtual void visit(Chicken* chicken) = 0;
protected:
	string name;
};

//具体访问者类Customer（顾客类） 
class Customer : public Visitor {
public:
	virtual void visit(Apple* apple);
	virtual void visit(Chicken* chicken);
};

//具体访问者类Manager（农场管理者类） 
class Farm_manager : public Visitor {
public:
	virtual void visit(Apple* apple);
	virtual void visit(Chicken* chicken);
};

//抽象元素类Product（商品类）
class Product {
public:
	virtual void accept(Visitor* visitor) = 0;
};

//具体元素类Apple（苹果类） 
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