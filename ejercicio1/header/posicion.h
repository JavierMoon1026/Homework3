#pragma once
#include "medicionBase.h"

using namespace std;

class Posicion : public MedicionBase {
    private:
        float latitud;
        float longitud;
        float altitud;

    public:
        Posicion();
        Posicion(const Posicion& other);
        Posicion(float lat, float lon, float alt, float t);
        void imprimir() const override;
        void serializar(ostream& out) const override;
        void deserializar(istream& in) override;
};