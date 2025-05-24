#include "../header/punto.h"

Punto::Punto(double x, double y) : x(x), y(y){}

double Punto::getX() const {return x;}
double Punto::getY() const {return y;}

void Punto::setX(double xval){x = xval;}
void Punto::setY(double yval){y = yval;}
