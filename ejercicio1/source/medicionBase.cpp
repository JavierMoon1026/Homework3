#include "medicionBase.h"

MedicionBase::MedicionBase(float t) : tiempoMedicion(std::make_unique<float>(t)) {}

float MedicionBase::getTiempo() const {
    return *tiempoMedicion;
}