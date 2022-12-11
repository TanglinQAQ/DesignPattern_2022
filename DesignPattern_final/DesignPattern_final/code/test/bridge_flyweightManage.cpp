#include <iostream>
#include <unordered_map>
#include <string>
#include "../../head/Farming/bridge_flyweight.h"

void BridgeAndFly()
{
    cout << "我是采购员，现在我要了解下去各养殖场的库存，然后下订单" << endl;
    cout << "# 使用享元模式和桥接模式#" << endl;
    // 新建两个养殖场
    Farm* farmLi = new ConcreteFarm();
    Farm* farmWang = new ConcreteFarm();

    // 在 Li 养殖场中查询鸡
    Animal* animal1 = farmLi->GetAnimal("chicken");
    cout << "小李养殖场: ";
    animal1->Say();
    // 在 Li 养殖场中查询牛
    Animal* animal2 = farmLi->GetAnimal("cow");
    cout << "小李养殖场: ";
    animal2->Say();
    // 在 Li 养殖场中查询猪
    Animal* animal3 = farmLi->GetAnimal("chicken");
    cout << "小李养殖场: ";
    animal3->Say();
    // 在 Wang 养殖场中查询牛
    Animal* animal4 = farmWang->GetAnimal("cow");
    cout << "老王养殖场: ";
    animal4->Say();
    // 在 Wang 养场中查询鸡
    Animal* animal5 = farmWang->GetAnimal("chicken");
    cout << "老王养殖场: ";
    animal5->Say();
    // 在 Wang 养场中查询猪
    Animal* animal6 = farmWang->GetAnimal("pig");
    cout << "老王养殖场: ";
    animal6->Say();
    // 在 Wang 养场中查询猪
    Animal* animal7 = farmWang->GetAnimal("pig");
    cout << "老王养殖场: ";
    animal7->Say();

}