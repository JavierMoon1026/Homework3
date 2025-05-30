#include "iMediciones.h"
#include <memory>

class MedicionBase : public IMediciones {
protected:
    std::unique_ptr<float> tiempoMedicion;

public:
    MedicionBase(float t);
    float getTiempo() const;
    virtual void imprimir() const = 0;
};
