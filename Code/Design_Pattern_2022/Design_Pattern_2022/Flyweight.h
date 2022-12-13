#pragma once
#include<iostream>
#include<map>
#include <string>

using namespace std;
class BaseGoods//商品
{
public:
    BaseGoods() = default;
    virtual ~BaseGoods() = default;
public:
    virtual string GetGoodsName() = 0;
};
class Goods : public BaseGoods
{
private:
    string m_goodsName;//商品名字
public:
    Goods(const string& n) : m_goodsName(n) {}
    virtual ~Goods() {}
public:
    virtual string GetGoodsName()
    {
        return m_goodsName;
    }
};
class GoodsFactory
{
public:
    GoodsFactory() {}
    ~GoodsFactory()
    {
        for (auto iter : m_goodsHash)
        {
            delete iter.second;
            iter.second = nullptr;
        }
    }
private:
    map<string, Goods*> m_goodsHash;
public:
    Goods* GetGoods(const string& godName);

    auto GetHashSize()
    {
        return m_goodsHash.size();
    }
};