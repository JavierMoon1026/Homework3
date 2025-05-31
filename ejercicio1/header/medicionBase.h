#pragma once
#include "iMediciones.h"
#include <memory>

using namespace std;

class MedicionBase : public IMediciones {
    protected:
        unique_ptr<float> tiempoMedicion;
    public:
        MedicionBase();
        MedicionBase(float t);
        float getTiempo() const;
        virtual void imprimir() const = 0;
        virtual ~MedicionBase() = default;
};
