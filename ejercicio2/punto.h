#pragma once
#include <iostream>

using namespace std;
class Punto{
    private:
        double x;
        double y;
    public:
        Punto(double x = 0, double y = 0);

        double getX() const;
        double getY() const;

        void setX(double xval);
        void setY(double yval);
    };