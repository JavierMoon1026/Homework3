#include "presion.h"
#include "posicion.h"

using namespace std;

class SaveFlightData {
    private:
        Posicion posicion;
        Presion presion;

    public:
        SaveFlightData();
        SaveFlightData(const Posicion& po, const Presion& pr);

        void serializar(const string& nombreArchivo) const;
        void deserializar(const string& nombreArchivo);
        void imprimir() const;
};