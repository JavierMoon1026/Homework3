#include "../header/posicion.h"

Posicion::Posicion(float lat, float lon, float alt, float t) : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

void Posicion::serializar(std::ostream& out) const {
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(altitud));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}

void Posicion::deserializar(std::istream& in) {
    in.read(reinterpret_cast<char*>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(altitud));
    float t;
    in.read(reinterpret_cast<char*>(&t), sizeof(float));
    tiempoMedicion = std::make_unique<float>(t);
}
