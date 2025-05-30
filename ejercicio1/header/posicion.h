#include "medicionBase.h"

class Posicion : public MedicionBase {
    float latitud;
    float longitud;
    float altitud;

public:
    Posicion(float lat = 0, float lon = 0, float alt = 0, float t = 0);
    void serializar(std::ostream& out) const override;
    void deserializar(std::istream& in) override;
};
