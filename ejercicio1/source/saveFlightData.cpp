#include "../header/saveFlightData.h"
#include <fstream>
#include <iostream>

//se implementan los constructores
SaveFlightData::SaveFlightData() {}
SaveFlightData::SaveFlightData(const Posicion& po, const Presion& pr) : posicion(po), presion(pr) {}

//se implementan las funciones de serializar y deserializar
void SaveFlightData::serializar(const string& filename) const{
    ofstream out(filename, ios::binary);
    if (!out) {
        cerr << "Error abriendo el archivo para escritura\n";
        return;
    }
    posicion.serializar(out);
    presion.serializar(out);
    out.close();
}

void SaveFlightData::deserializar(const string& filename){
    ifstream in(filename, ios::binary);
    if (!in) {
        cerr << "Error abriendo el archivo para lectura\n";
        return;
    }
    posicion.deserializar(in);
    presion.deserializar(in);
    in.close();
}

//se implementa la funcion imprimir()
void SaveFlightData::imprimir() const {
    posicion.imprimir();
    presion.imprimir();
}
