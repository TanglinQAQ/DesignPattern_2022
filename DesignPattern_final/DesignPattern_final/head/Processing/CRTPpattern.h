#pragma once
#include "../DAO/Data.h"
#include<iostream>
using namespace DATA;

template <typename Child> struct Factory {
    void interface() { static_cast<Child*>(this)->implementation(); }
};

struct Derived : Factory<Derived> {
    void implementation() { cerr << "����ţ�����ļӹ�����\n"; }
};

template <typename ChildType> struct CattleFactory {
    ChildType& underlying() { return static_cast<ChildType&>(*this); }
    inline ChildType& operator+=(const ChildType& rhs) {
        this->underlying() = this->underlying() + rhs;
        return this->underlying();
    }
};