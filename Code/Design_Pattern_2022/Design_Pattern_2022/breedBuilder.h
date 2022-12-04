#pragma once
#include "Data.h"

using namespace DATA;

    class breedBuilder {
    public:
        virtual void feed()=0;
        virtual void graze()=0;
        virtual void keephealthy()=0;

        virtual Farming_Type getTyoe()=0;
    };

    class cattleBuilderImpl : public breedBuilder {
    protected:
        Farming_Type mycattle;
    public:
        void feed();
        void graze();
        void keephealthy();
        Farming_Type getType() {
            mycattle = cattle;
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
            mycattle = chicken;
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
            mycattle = pig;
            return mycattle;
        };
    };


