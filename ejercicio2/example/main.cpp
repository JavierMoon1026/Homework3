#include <iostream>
#include "../header/punto.h"
#include "../header/circulo.h"
#include "../header/elipse.h"
#include "../header/rectangulo.h"
#include "../source/procesadorFigura.cpp"

using namespace std;

int main() {
    //se crean las figuras
    Punto p(0,0);
    Circulo c(0, 0, 5);
    Elipse e(0, 0, 2, 4);
    Rectangulo r(0, 0, 6, 8);

    //se imprimen las areas de las figuras
    cout << "Area del punto: " << ProcesadorFigura<Punto>::calcArea(p) << endl;
    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcArea(c) << endl;
    cout << "Area de la elipse: " << ProcesadorFigura<Elipse>::calcArea(e) << endl;
    cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcArea(r) << endl;
    return 0;
}