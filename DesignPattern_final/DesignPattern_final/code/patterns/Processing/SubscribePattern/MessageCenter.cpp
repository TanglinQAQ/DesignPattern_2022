
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
    cout << "一位负责人已收到:" << message << endl;
}