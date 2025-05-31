#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Generador{
private:
    vector<double> doubles;
    vector<string> palabras;
    vector<vector<int>> listas;

public:
    template <typename T>
    void agregar(const T& value){
        if constexpr(is_same_v<T, double>) {
            doubles.push_back(value);
        } else if constexpr(is_same_v<T, string>) {
            palabras.push_back(value);
        } else{
            throw invalid_argument("Tipo no soportado por Generador");
        }
    }

    void agregar_lista(const vector<int>& lista);

    const vector<double>& get_doubles() const;
    const vector<string>& get_palabras() const;
    const vector<vector<int>>& get_listas() const;
};