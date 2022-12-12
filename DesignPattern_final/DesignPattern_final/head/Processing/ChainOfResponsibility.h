#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include "../DAO/Data.h"
using namespace DATA;

string mp(const Farming_Type& type)
{
    switch (type)
    {
    case DATA::Farming_Type::cattle:
        return "cattle";
        break;
    case DATA::Farming_Type::chicken:
        return "chicken";
        break;
    case DATA::Farming_Type::pig:
        return "pig";
        break;
    default:
        return "cattle";
        break;
    }
}

// ����Ĵ�����
class AbstractNode
{
public:
    // ָ����һ���ڵ��ָ��
    AbstractNode* next = nullptr;

    // �麯������ʾ�����߼�
    virtual void handle(const Farming_Type&) = 0;
};

// �ջ�Ĵ�����
class HarvestingNode : public AbstractNode
{
public:
    // ʵ��handle����
    void handle(const Farming_Type& type) override
    {
        cout << "����������ϴ������ ������ϴ��" << mp(type) << std::endl;
    }
};

// �ӹ��Ĵ�����
class ProcessingNode : public AbstractNode
{
public:
    // ʵ��handle����
    void handle(const Farming_Type& type) override
    {
        cout << "�������ķָ���� ���ڷָ" << mp(type) << std::endl;
    }
};

// ���۵Ĵ�����
class SellingNode : public AbstractNode
{
public:
    // ʵ��handle����
    void handle(const Farming_Type& type) override
    {
        cout << "����������⿴����� ������⿣�" << mp(type) << std::endl;
    }
};

class Chain
{
public:
    // ָ������ͷ�ڵ��ָ��
    AbstractNode* head = nullptr;

    // ָ������β�ڵ��ָ��
    AbstractNode* tail = nullptr;

    // ����µĽڵ�
    void add(AbstractNode* node)
    {
        // �����Ϊ�գ����½ڵ���Ϊͷ�ڵ�
        if (head == nullptr)
        {
            head = node;
        }
        else
        {
            // �����½ڵ���Ϊβ�ڵ�
            tail->next = node;
        }
        tail = node;
    }

    // �������е����нڵ㲢ִ��handle����
    void start(const Farming_Type &type)
    {
        auto node = head;
        while (node != nullptr)
        {
            node->handle(type);
            node = node->next;
        }
    }
};