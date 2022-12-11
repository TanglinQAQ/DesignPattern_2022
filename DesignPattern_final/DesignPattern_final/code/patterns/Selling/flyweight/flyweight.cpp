#include "../../../../head/Selling/Flyweight.h"
#include<iostream>

using namespace std;
Goods* GoodsFactory::GetGoods(const string& godName)
{
    Goods* g = nullptr;
    try
    {
        g = m_goodsHash.at(godName);

    }
    catch (out_of_range)
    {
        g = new Goods(godName);
        m_goodsHash.insert(make_pair(godName, g));
        cout << "获取了" << godName << "，没有查到，创建一个新的商品" << endl;
    }
    return g;
}