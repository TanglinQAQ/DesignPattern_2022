#pragma once
#include "../DAO/Data.h"

using namespace DATA;

class breedBuilder {
public:
    virtual void feed() = 0;
    virtual void graze() = 0;
    virtual void keephealthy() = 0;

    virtual Farming_Type getType() = 0;
};

class cattleBuilderImpl : public breedBuilder {
protected:
    Farming_Type mycattle;
public:
    void feed();
    void graze();
    void keephealthy();
    Farming_Type getType() {
        mycattle = Farming_Type::cattle;
        return mycattle;
    };
};

class chickenBuilderImpl : public breedBuilder {
protected:
    Farming_Type mycattle;
public:
    void feed();
    void graze();
    void keephealthy();
    Farming_Type getType() {
        mycattle = Farming_Type::chicken;
        return mycattle;
    };
};

class pigBuilderImpl : public breedBuilder {
protected:
    Farming_Type mycattle;
public:
    void feed();
    void graze();
    void keephealthy();
    Farming_Type getType() {
        mycattle = Farming_Type::pig;
        return mycattle;
    };
};


