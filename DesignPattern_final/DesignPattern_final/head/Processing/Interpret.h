#pragma once
#ifndef _INTERPRET_H_ 
#define _INTERPRET_H_ 

#include "Context.h" 
#include <string> 

class AbstractExpression
{
public:

	virtual ~AbstractExpression();
	virtual void Interpret(const Context& c);

protected:
	AbstractExpression();
private:
};

class TerminalExpression :public AbstractExpression
{
public:
	TerminalExpression(const std::string& statement);
	~TerminalExpression();
	void Interpret(const Context& c);

protected:
private:
	std::string _statement;
};

class NonterminalExpression :public AbstractExpression
{
public:
	NonterminalExpression(AbstractExpression* expression, int times);
	~NonterminalExpression();
	void Interpret(const Context& c);

protected:
private:
	AbstractExpression* _expression;
	int _times;
};

#endif 

