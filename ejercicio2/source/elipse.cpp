#include "../header/elipse.h"

Elipse::Elipse(double x, double y, double a, double b) : pos(x, y), a(a), b(b){}

Punto Elipse::getPos() const {return pos;}
double Elipse::getA() const {return a;}
double Elipse::getB() const {return b;}

void Elipse::setPos(Punto posval){pos = posval;}
void Elipse::setA(double aval){a = aval;}
void Elipse::setB(double bval){b = bval;}