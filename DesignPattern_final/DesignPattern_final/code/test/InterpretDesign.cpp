#include "../../head/Processing/Context.h" 
#include "../../head/Processing/Interpret.h" 

void InterpreterPattern_Client()
{
	cout << "********" << "开始向外国人讲话" << "********" ;
	Context* c = new Context();
	AbstractExpression* te = new TerminalExpression("牛");
	cout << "\n# 使用解释器模式模式：翻译\n";
	AbstractExpression* nte = new NonterminalExpression(te, 1);
	nte->Interpret(*c);

	AbstractExpression* te1 = new TerminalExpression("鸡");
	AbstractExpression* nte1 = new NonterminalExpression(te1, 1);
	nte1->Interpret(*c);
}
