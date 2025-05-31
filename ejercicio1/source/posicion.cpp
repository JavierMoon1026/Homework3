#include "../header/posicion.h"

Posicion::Posicion() : latitud(0), longitud(0), altitud(0), MedicionBase(0.0f) {}
Posicion::Posicion(const Posicion& other) : latitud(other.latitud), longitud(other.longitud), altitud(other.altitud), MedicionBase(*other.tiempoMedicion) {}
Posicion::Posicion(float lat, float lon, float alt, float t) : latitud(lat), longitud(lon), altitud(alt), MedicionBase(t) {}

void Posicion::imprimir() const {
    std::cout << "Posicion: (" << latitud << ", " << longitud << ", " << altitud << ")"
              << " Tiempo: " << *tiempoMedicion << endl;
}

void Posicion::serializar(ostream& out) const{
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(altitud));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}

void Posicion::deserializar(istream& in){
    in.read(reinterpret_cast<char*>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(altitud));
    tiempoMedicion = std::make_unique<float>();
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}