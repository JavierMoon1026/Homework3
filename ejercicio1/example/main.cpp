#include "SaveFlightData.h"
#include <iostream>

int main() {
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData datos(posicion, presion);
    datos.serializar("vuelo.dat");

    SaveFlightData datosCargados;
    datosCargados.deserializar("vuelo.dat");
    datosCargados.imprimir();

    return 0;
}
