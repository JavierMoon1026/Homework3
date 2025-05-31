#pragma once
#include "medicionBase.h"

using namespace std;

class Presion : public MedicionBase {
    private:
        float presionEstatica;
        float presionDinamica;
    public:
        Presion();
        Presion(const Presion& other);
        Presion(float pe, float pd, float t);
        void imprimir() const override;
        void serializar(ostream& out) const override;
        void deserializar(istream& in) override;
};
