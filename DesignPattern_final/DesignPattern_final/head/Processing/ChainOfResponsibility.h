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

// 抽象的处理类
class AbstractNode
{
public:
    // 指向下一个节点的指针
    AbstractNode* next = nullptr;

    // 虚函数，表示处理逻辑
    virtual void handle(const Farming_Type&) = 0;
};

// 收获的处理类
class HarvestingNode : public AbstractNode
{
public:
    // 实现handle函数
    void handle(const Farming_Type& type) override
    {
        cout << "责任链的清洗处理者 正在清洗：" << mp(type) << std::endl;
    }
};

// 加工的处理类
class ProcessingNode : public AbstractNode
{
public:
    // 实现handle函数
    void handle(const Farming_Type& type) override
    {
        cout << "责任链的分割处理者 正在分割：" << mp(type) << std::endl;
    }
};

// 销售的处理类
class SellingNode : public AbstractNode
{
public:
    // 实现handle函数
    void handle(const Farming_Type& type) override
    {
        cout << "责任链的烹饪处理者 正在烹饪：" << mp(type) << std::endl;
    }
};

class Chain
{
public:
    // 指向链的头节点的指针
    AbstractNode* head = nullptr;

    // 指向链的尾节点的指针
    AbstractNode* tail = nullptr;

    // 添加新的节点
    void add(AbstractNode* node)
    {
        // 如果链为空，则新节点作为头节点
        if (head == nullptr)
        {
            head = node;
        }
        else
        {
            // 否则，新节点作为尾节点
            tail->next = node;
        }
        tail = node;
    }

    // 遍历链中的所有节点并执行handle函数
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