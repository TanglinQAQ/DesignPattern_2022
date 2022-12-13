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

    cout << "********" << "外国人听到的" << "********" << endl;
    if(this->_statement=="牛")
        cout <<"cattle" << std::endl;
    else if(this->_statement == "鸡")
        cout  << "chicken" << std::endl;
    //std::cout << this->_statement << " 这是当前的语言表达" << std::endl;
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
