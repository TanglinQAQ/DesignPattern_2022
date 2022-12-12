#include "../../../../head/Processing/Interpret.h" 

AbstractExpression::AbstractExpression()
{
}

AbstractExpression::~AbstractExpression()
{
}

void AbstractExpression::Interpret(const Context& c)
{
}

TerminalExpression::TerminalExpression(const std::string& statement)
{
    this->_statement = statement;
}

TerminalExpression::~TerminalExpression()
{
}

void TerminalExpression::Interpret(const Context& c)
{
    cout << this->_statement << endl;

    cout << "********" << "�����������" << "********" << endl;
    if(this->_statement=="ţ")
        cout <<"cattle" << std::endl;
    else if(this->_statement == "��")
        cout  << "chicken" << std::endl;
    //std::cout << this->_statement << " ���ǵ�ǰ�����Ա��" << std::endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression*
    expression, int times)
{
    this->_expression = expression;
    this->_times = times;
}

NonterminalExpression::~NonterminalExpression()
{
}

void NonterminalExpression::Interpret(const Context& c)
{
    for (int i = 0; i < _times; i++)
    {
        this->_expression->Interpret(c);
    }
}
