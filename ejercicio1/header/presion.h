#include "medicionBase.h"

class Presion : public MedicionBase {
    float presionEstatica;
    float presionDinamica;

public:
    Presion(float p = 0, float q = 0, float t = 0);
};
