#include "presion.h"
#include "posicion.h"

class SaveFlightData {
    Posicion posicion();
    Presion presion();

public:
    SaveFlightData(const Posicion& p, const Presion& q);
    SaveFlightData();

    void serializar(const std::string& nombreArchivo) const;
    void deserializar(const std::string& nombreArchivo);
    void imprimir() const;
};