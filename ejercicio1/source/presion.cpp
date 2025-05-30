#include "presion.h"

Presion::Presion(float p, float q, float t) : MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

void Presion::serializar(std::ostream& out) const {
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(presionDinamica));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}

void Presion::deserializar(std::istream& in) {
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(presionDinamica));
    float t;
    in.read(reinterpret_cast<char*>(&t), sizeof(float));
    tiempoMedicion = std::make_unique<float>(t);
}

void Presion::imprimir() const {
    std::cout << "Presion Estatica: " << presionEstatica << ", Dinamica: " << presionDinamica << ", Tiempo: " << getTiempo() << '\n';
}
