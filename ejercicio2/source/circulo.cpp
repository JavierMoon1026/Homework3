#include "../header/circulo.h"

Circulo::Circulo(double x = 0, double y = 0, double r = 0) : pos(x, y), r(r){}

Punto Circulo::getPos() const {return pos;}
double Circulo::getR() const {return r;}

void Circulo::setPos(Punto posval){pos = posval;}
void Circulo::setR(double rval){r = rval;}
