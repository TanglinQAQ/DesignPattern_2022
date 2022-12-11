#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// 动物抽象类（桥接模式中的抽象类）
class Animal
{
public:
    virtual void Say() = 0;
};

// 具体的动物类，如鸡、猪、牛等（桥接模式中的具体实现类）
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
// 养殖场抽象类（享元模式中的外部状态）
class Farm
{
public:
    virtual Animal* GetAnimal(string animal) = 0;
};

// 具体的养殖场类（享元模式中的内部状态）
class ConcreteFarm : public Farm
{
public:
    virtual Animal* GetAnimal(string animal)
    {
        Animal* animalPtr = nullptr;
        // 使用哈希表来维护内部状态
        if (animalMap.find(animal) == animalMap.end())
        {
            cout << "预订：";
            // 如果动物不存在，则新建一个动物对象并添加到哈希表中
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
            // 如果动物已存在，则直接从哈希表中获取动物对象
            animalPtr = animalMap[animal];
            cout << "已有库存:";
        }

        return animalPtr;
    }

private:
    unordered_map<string, Animal*> animalMap;
};