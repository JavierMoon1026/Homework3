#include "../header/rectangulo.h"

Rectangulo::Rectangulo(double x, double y, double a, double l) : pos(x, y), ancho(a), largo(l){}

Punto Rectangulo::getPos() const {return pos;}
double Rectangulo::getA() const {return ancho;}
double Rectangulo::getL() const {return largo;}

void Rectangulo::setPos(Punto posval){pos = posval;}
void Rectangulo::setAncho(double aval){ancho = aval;}
void Rectangulo::setLargo(double lval){largo = lval;}