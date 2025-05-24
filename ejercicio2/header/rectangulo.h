#pragma once
#include <iostream>
#include "punto.h"

using namespace std;
class Rectangulo{
    private:
        Punto pos;
        double ancho;
        double largo;
    public:
        Rectangulo(double x = 0, double y = 0, double a = 0, double l = 0);

        Punto getPos() const;
        double getA() const;
        double getL() const;

        void setPos(Punto posval);
        void setAncho(double aval);
        void setLargo(double lval);
    };