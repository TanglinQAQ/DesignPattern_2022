#include <iostream>
#include "Flyweight.h"
using namespace std;

void Flyweight()
{
    cout << "#------享元模式--------#" << endl;
    shared_ptr<GoodsFactory> gf(new GoodsFactory);
    Goods* g1 = gf->GetGoods("小李的牛");
    cout << "商品名：" << g1->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g2 = gf->GetGoods("小李的鸡");
    cout << "商品名：" << g2->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g3 = gf->GetGoods("小李的猪");
    cout << "商品名：" << g3->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g4 = gf->GetGoods("老王的牛");
    cout << "商品名：" << g4->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g5 = gf->GetGoods("老王的鸡");
    cout << "商品名：" << g5->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g6 = gf->GetGoods("老王的猪");
    cout << "商品名：" << g6->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g7 = gf->GetGoods("小李的牛");
    cout << "商品已存在，商品名：" << g7->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g8 = gf->GetGoods("小李的鸡");
    cout << "商品已存在，商品名：" << g8->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g9 = gf->GetGoods("小李的猪");
    cout << "商品已存在，商品名：" << g9->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
    Goods* g10 = gf->GetGoods("老王的牛");
    cout << "商品已存在，商品名：" << g10->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
  
}