#include "../header/saveFlightData.h"
#include <iostream>

int main() {
    Posicion posicion(20.4f, 50.4f, 90.0f, 5.3f);
    Presion presion(10.3f, 5.8f, 6.1f);

    SaveFlightData datos(posicion, presion);
    datos.serializar("vuelo.dat");

    SaveFlightData datosCargados;
    datosCargados.deserializar("vuelo.dat");
    datosCargados.imprimir();

    return 0;
}
