#pragma once
#include <iostream>
#include "punto.h"

using namespace std;
class Circulo{
    private:
        Punto pos;
        double r;
    public:
        Circulo(double x = 0, double y = 0, double r = 0);

        Punto getPos() const;
        double getR() const;

        void setPos(Punto posval);
        void setR(double rval);
    };