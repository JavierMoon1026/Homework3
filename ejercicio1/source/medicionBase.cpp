#include "medicionBase.h"

MedicionBase::MedicionBase() : tiempoMedicion(std::make_unique<float>(0.0f)) {}
MedicionBase::MedicionBase(float t) : tiempoMedicion(std::make_unique<float>(t)) {}

float MedicionBase::getTiempo() const{
    return *tiempoMedicion;
}