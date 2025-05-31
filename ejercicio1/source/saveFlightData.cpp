#include "../header/saveFlightData.h"
#include <fstream>
#include <iostream>

SaveFlightData::SaveFlightData() {}
SaveFlightData::SaveFlightData(const Posicion& po, const Presion& pr) : posicion(po), presion(pr) {}

void SaveFlightData::serializar(const string& filename) const {
    ofstream out(filename, ios::binary);
    if (!out) {
        cerr << "Error abriendo el archivo para escritura\n";
        return;
    }
    posicion.serializar(out);
    presion.serializar(out);
    out.close();
}

void SaveFlightData::deserializar(const string& filename) {
    ifstream in(filename, ios::binary);
    if (!in) {
        cerr << "Error abriendo el archivo para lectura\n";
        return;
    }
    posicion.deserializar(in);
    presion.deserializar(in);
    in.close();
}

void SaveFlightData::imprimir() const {
    posicion.imprimir();
    presion.imprimir();
}
