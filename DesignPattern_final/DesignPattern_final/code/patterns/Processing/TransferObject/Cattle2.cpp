#pragma once
#include "../../../../head/Processing/TransferObject.h" 
using namespace DATA;

/*类描述：牛类*/
int Cattle2::getnum()
{
	return num;
}

string Cattle2::setnum(int numm)
{
	num = numm;
	return "更改序号成功";
}




