#include "../../head/Processing/Context.h" 
#include "../../head/Processing/Interpret.h" 

void InterpreterPattern_Client()
{
	cout << "********" << "��ʼ������˽���" << "********" ;
	Context* c = new Context();
	AbstractExpression* te = new TerminalExpression("ţ");
	cout << "\n# ʹ�ý�����ģʽģʽ������\n";
	AbstractExpression* nte = new NonterminalExpression(te, 1);
	nte->Interpret(*c);

	AbstractExpression* te1 = new TerminalExpression("��");
	AbstractExpression* nte1 = new NonterminalExpression(te1, 1);
	nte1->Interpret(*c);
}
