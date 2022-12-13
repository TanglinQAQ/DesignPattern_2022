
#include<iostream>
#include "../../../../head/Processing/SubscribePattern.h"
using namespace std;


genMessage::genMessage()
{

}
genMessage::~genMessage()
{

}
void genMessage::throwMessage(string str)
{
    sendToAllRecv(str);//基类的函数
}