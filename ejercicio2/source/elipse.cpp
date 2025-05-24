#include "../header/elipse.h"

Elipse::Elipse(double x = 0, double y = 0, double a = 0, double b = 0) : pos(x, y), a(a), b(b){}

Punto Elipse::getPos() const {return pos;}
double Elipse::getA() const {return a;}
double Elipse::getB() const {return b;}

void Elipse::setPos(Punto posval){pos = posval;}
void Elipse::setA(double aval){a = aval;}
void Elipse::setB(double bval){b = bval;}