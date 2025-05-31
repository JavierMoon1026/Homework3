#include "../header/medicionBase.h"

MedicionBase::MedicionBase() : tiempoMedicion(make_unique<float>(0.0f)){}
MedicionBase::MedicionBase(float t) : tiempoMedicion(make_unique<float>(t)){}

float MedicionBase::getTiempo() const{
    return *tiempoMedicion;
}