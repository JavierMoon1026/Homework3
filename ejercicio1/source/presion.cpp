#include "presion.h"


Presion::Presion() : presionEstatica(0), presionDinamica(0), MedicionBase(0.0f) {}
Presion::Presion(const Presion& other) : presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica), MedicionBase(*other.tiempoMedicion) {}
Presion::Presion(float pe, float pd, float t) : presionEstatica(pe), presionDinamica(pd), MedicionBase(t) {}

void Presion::imprimir() const {
    std::cout << "Presion: Estatica = " << presionEstatica << ", Dinamica = " << presionDinamica
              << " Tiempo: " << *tiempoMedicion << endl;
}

void Presion::serializar(ostream& out) const {
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(presionDinamica));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}

void Presion::deserializar(istream& in) {
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(presionDinamica));
    tiempoMedicion = make_unique<float>();
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}