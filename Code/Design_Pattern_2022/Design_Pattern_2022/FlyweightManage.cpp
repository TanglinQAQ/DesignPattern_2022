#include <iostream>
#include "Flyweight.h"
using namespace std;

void Flyweight()
{
    cout << "#------��Ԫģʽ--------#" << endl;
    shared_ptr<GoodsFactory> gf(new GoodsFactory);
    Goods* g1 = gf->GetGoods("С���ţ");
    cout << "��Ʒ����" << g1->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g2 = gf->GetGoods("С��ļ�");
    cout << "��Ʒ����" << g2->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g3 = gf->GetGoods("С�����");
    cout << "��Ʒ����" << g3->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g4 = gf->GetGoods("������ţ");
    cout << "��Ʒ����" << g4->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g5 = gf->GetGoods("�����ļ�");
    cout << "��Ʒ����" << g5->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g6 = gf->GetGoods("��������");
    cout << "��Ʒ����" << g6->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g7 = gf->GetGoods("С���ţ");
    cout << "��Ʒ�Ѵ��ڣ���Ʒ����" << g7->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g8 = gf->GetGoods("С��ļ�");
    cout << "��Ʒ�Ѵ��ڣ���Ʒ����" << g8->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g9 = gf->GetGoods("С�����");
    cout << "��Ʒ�Ѵ��ڣ���Ʒ����" << g9->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
    Goods* g10 = gf->GetGoods("������ţ");
    cout << "��Ʒ�Ѵ��ڣ���Ʒ����" << g10->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
  
}