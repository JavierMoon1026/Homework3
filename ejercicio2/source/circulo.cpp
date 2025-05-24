#include "../header/circulo.h"

Circulo::Circulo(double x, double y, double r) : pos(x, y), r(r){}

Punto Circulo::getPos() const {return pos;}
double Circulo::getR() const {return r;}

void Circulo::setPos(Punto posval){pos = posval;}
void Circulo::setR(double rval){r = rval;}
