#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// ��������ࣨ�Ž�ģʽ�еĳ����ࣩ
class Animal
{
public:
    virtual void Say() = 0;
};

// ����Ķ����࣬�缦����ţ�ȣ��Ž�ģʽ�еľ���ʵ���ࣩ
class Chicken : public Animal
{
public:
    virtual void Say();

};

class Pig : public Animal
{
public:
    virtual void Say();
};

class Cow : public Animal
{
public:
    virtual void Say();
};
// ��ֳ�������ࣨ��Ԫģʽ�е��ⲿ״̬��
class Farm
{
public:
    virtual Animal* GetAnimal(string animal) = 0;
};

// �������ֳ���ࣨ��Ԫģʽ�е��ڲ�״̬��
class ConcreteFarm : public Farm
{
public:
    virtual Animal* GetAnimal(string animal)
    {
        Animal* animalPtr = nullptr;
        // ʹ�ù�ϣ����ά���ڲ�״̬
        if (animalMap.find(animal) == animalMap.end())
        {
            cout << "Ԥ����";
            // ������ﲻ���ڣ����½�һ�����������ӵ���ϣ����
            if (animal == "chicken")
                animalPtr = new Chicken();
            else if (animal == "pig")
                animalPtr = new Pig();
            else if (animal == "cow")
                animalPtr = new Cow();
            else
                cout << "Error: Unrecognized animal" << endl;

            animalMap[animal] = animalPtr;
        }
        else
        {
            // ��������Ѵ��ڣ���ֱ�Ӵӹ�ϣ���л�ȡ�������
            animalPtr = animalMap[animal];
            cout << "���п��:";
        }

        return animalPtr;
    }

private:
    unordered_map<string, Animal*> animalMap;
};