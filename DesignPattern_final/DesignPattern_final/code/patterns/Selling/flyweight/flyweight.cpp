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
        cout << "��ȡ��" << godName << "��û�в鵽������һ���µ���Ʒ" << endl;
    }
    return g;
}