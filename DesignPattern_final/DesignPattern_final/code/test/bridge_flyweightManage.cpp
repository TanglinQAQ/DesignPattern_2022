#include <iostream>
#include <unordered_map>
#include <string>
#include "../../head/Farming/bridge_flyweight.h"

void BridgeAndFly()
{
    cout << "���ǲɹ�Ա��������Ҫ�˽���ȥ����ֳ���Ŀ�棬Ȼ���¶���" << endl;
    cout << "# ʹ����Ԫģʽ���Ž�ģʽ#" << endl;
    // �½�������ֳ��
    Farm* farmLi = new ConcreteFarm();
    Farm* farmWang = new ConcreteFarm();

    // �� Li ��ֳ���в�ѯ��
    Animal* animal1 = farmLi->GetAnimal("chicken");
    cout << "С����ֳ��: ";
    animal1->Say();
    // �� Li ��ֳ���в�ѯţ
    Animal* animal2 = farmLi->GetAnimal("cow");
    cout << "С����ֳ��: ";
    animal2->Say();
    // �� Li ��ֳ���в�ѯ��
    Animal* animal3 = farmLi->GetAnimal("chicken");
    cout << "С����ֳ��: ";
    animal3->Say();
    // �� Wang ��ֳ���в�ѯţ
    Animal* animal4 = farmWang->GetAnimal("cow");
    cout << "������ֳ��: ";
    animal4->Say();
    // �� Wang �����в�ѯ��
    Animal* animal5 = farmWang->GetAnimal("chicken");
    cout << "������ֳ��: ";
    animal5->Say();
    // �� Wang �����в�ѯ��
    Animal* animal6 = farmWang->GetAnimal("pig");
    cout << "������ֳ��: ";
    animal6->Say();
    // �� Wang �����в�ѯ��
    Animal* animal7 = farmWang->GetAnimal("pig");
    cout << "������ֳ��: ";
    animal7->Say();

}