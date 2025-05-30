#include "../header/saveFlightData.h"
#include <fstream>
#include <iostream>

SaveFlightData::SaveFlightData(const Posicion& p, const Presion& q) : posicion(p), presion(q) {}

SaveFlightData::SaveFlightData() = default;

void SaveFlightData::serializar(const std::string& nombreArchivo) const {
    std::ofstream out(nombreArchivo, std::ios::binary);
    if (!out) {
        std::cerr << "Error al abrir archivo para escribir.\n";
        return;
    }
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData::deserializar(const std::string& nombreArchivo) {
    std::ifstream in(nombreArchivo, std::ios::binary);
    if (!in) {
        std::cerr << "Error al abrir archivo para leer.\n";
        return;
    }
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData::imprimir() const {
    std::cout << " Datos del Vuelo" << std::endl;
    posicion.imprimir();
    presion.imprimir();
}
