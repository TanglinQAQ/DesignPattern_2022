
#include<iostream>
#include "../../../../head/Processing/SubscribePattern.h"
using namespace std;

getMessage::getMessage()
{

}
getMessage::~getMessage()
{

}

void getMessage::recvMessage(string message)
{
    cout << "һλ���������յ�:" << message << endl;
}