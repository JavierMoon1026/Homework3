#include <iostream>
#include "../header/punto.h"
#include "../header/circulo.h"
#include "../header/elipse.h"
#include "../header/rectangulo.h"
#define PI 3.1419

template <typename T>
class ProcesadorFigura{
    public:
        double calcArea(){return 0;}     
};

template<>
class ProcesadorFigura<Circulo> {
    double calcArea(Circulo& c){
        return PI * c.getR() * c.getR();
    }
};

template<>
class ProcesadorFigura<Elipse> {
    double calcArea(Elipse& e){
        return PI * e.getA() * e.getB();
    }
};

template<>
class ProcesadorFigura<Rectangulo> {
    double calcArea(Rectangulo& r){
        return r.getA() * r.getL();
    }
};