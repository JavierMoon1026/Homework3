#include "../header/generadorVectores.h"

void Generador::agregar_lista(const vector<int>& lista) {
    listas.push_back(lista);
}

const vector<double>& Generador::get_doubles() const {
    return doubles;
}

const vector<string>& Generador::get_palabras() const {
    return palabras;
}

const vector<vector<int>>& Generador::get_listas() const {
    return listas;
}