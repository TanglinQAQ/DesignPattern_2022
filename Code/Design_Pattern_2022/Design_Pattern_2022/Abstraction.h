#pragma once
/*
  ʵ��ģʽ���Ž�ģʽ
*/
#include <string>

class Kind  //ʵ�ֻ�(Implementor)����
{
public:
	virtual void getKind() = 0;
};

class Breeding  //���󻯣�Abstraction����   ��ֳ��
{
protected:
	Kind* soft;
public:
	void setBreeding(Kind* soft)
	{
		this->soft = soft;
	}
	virtual void getKind() = 0;
};
