#pragma once
#include <iostream>
#include "punto.h"

using namespace std;
class Elipse{
    private:
        Punto pos;
        double a;
        double b;
    public:
        Elipse(double x = 0, double y = 0, double a = 0, double b = 0);

        Punto getPos() const;
        double getA() const;
        double getB() const;

        void setPos(Punto posval);
        void setA(double aval);
        void setB(double bval);
    };